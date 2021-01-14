/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
*/

typedef struct timespec {
	long long tv_sec;
	long long tv_nsec;
} timespec;

typedef struct LIFileAttributes {
	unsigned long long __fa_rsvd0;
	unsigned long long fa_validmask;
	unsigned fa_type;
	unsigned fa_mode;
	unsigned fa_nlink;
	unsigned fa_uid;
	unsigned fa_gid;
	unsigned fa_bsd_flags;
	unsigned long long fa_size;
	unsigned long long fa_allocsize;
	unsigned long long fa_fileid;
	unsigned long long fa_parentid;
	timespec fa_atime;
	timespec fa_mtime;
	timespec fa_ctime;
	timespec fa_birthtime;
	timespec fa_backuptime;
	timespec fa_addedtime;
} LIFileAttributes;

