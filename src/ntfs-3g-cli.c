#include "ntfs-3g-fuse.h"
#include "win_utils.h"

const char *EXEC_NAME = "ntfs-3g";
const char *TARGET_FILE = "/ProgramData/SeewoFreezeKernelConfig/VolumeInfo.config";

struct return_value handle_ntfs_operations()
{
	struct return_value result = {0, {0}};
	WIN_HANDLE hDriver = WIN_INVALID_HANDLE_VALUE;
	long long offset = 0, size = 0;
	DWORD diskNumber;

	// 初始化
	if (ntfs_fuse_init())
	{
		snprintf(result.message, sizeof(result.message), "ntfs_fuse_init failed\n");
		result.value = 1;
		return result;
	}

	const char *device = 0;
	device = InitAndGetCommand(&result);
	if (device)
	{
		hDriver = GetWinDiskHandle();
		// 挂载 NTFS
		if (ntfs_open(device, FALSE, FALSE))
		{
			snprintf(result.message, sizeof(result.message), "ntfs_open failed\n");
			CloseWinDiskDriver(hDriver);
			result.value = 1;
			return result;
		}

		// 删除目标文件
		int ret = ntfs_fuse_unlink(TARGET_FILE);
		if (ret != 0)
		{
			snprintf(result.message, sizeof(result.message), "Failed to delete (error %d)\n", ret);
			ntfs_close();
			CloseWinDiskDriver(hDriver);
			result.value = 1;
			return result;
		}

		snprintf(result.message, sizeof(result.message), "Successfully deleted\n");
		ntfs_close();
		CloseWinDiskDriver(hDriver);
		return result;
	}

	return result;
}

int main()
{
	struct return_value result = handle_ntfs_operations();
	DebugPrint(result.message);
	return result.value;
}