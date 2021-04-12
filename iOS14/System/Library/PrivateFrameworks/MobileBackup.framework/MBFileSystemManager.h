/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/


@class NSString;

@interface MBFileSystemManager : NSObject {

	BOOL _supportsLocalSnapshots;
	BOOL _supportsSparseFiles;
	NSString* _currentSnapshotPath;
	NSString* _currentSnapshotName;
	NSString* _fileSystemType;

}

@property (nonatomic,retain) NSString * fileSystemType;                     //@synthesize fileSystemType=_fileSystemType - In the implementation block
@property (nonatomic,readonly) BOOL supportsLocalSnapshots;                 //@synthesize supportsLocalSnapshots=_supportsLocalSnapshots - In the implementation block
@property (nonatomic,readonly) BOOL supportsSparseFiles;                    //@synthesize supportsSparseFiles=_supportsSparseFiles - In the implementation block
@property (nonatomic,readonly) NSString * currentSnapshotPath;              //@synthesize currentSnapshotPath=_currentSnapshotPath - In the implementation block
@property (nonatomic,readonly) NSString * currentSnapshotName;              //@synthesize currentSnapshotName=_currentSnapshotName - In the implementation block
+(unsigned long long)fileSystemCapacity;
+(BOOL)startFilesystemKeyRollingWithError:(id*)arg1 ;
+(BOOL)stopFilesystemKeyRollingWithError:(id*)arg1 ;
+(void)removeDeviceTransferDirectoryWithEarliestCreationDate:(id)arg1 ;
+(id)sharedManager;
+(id)listAllSnapshotsWithError:(id*)arg1 ;
+(id)listAllSnapshotsAtPath:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)removeRestorePrefetchCacheWithEarliestDate:(id)arg1 ;
-(BOOL)snapshotFilesystem:(id)arg1 withError:(id*)arg2 ;
-(BOOL)removeAllBackupSnapshotsWithLatestCreationDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAllBackupSnapshots:(id*)arg1 ;
-(BOOL)removeAllBackupInternalSnapshots:(id*)arg1 ;
-(unsigned long long)removeRestorePrefetchCache;
-(BOOL)supportsSparseFiles;
-(BOOL)mountSnapshot:(id)arg1 atMountPoint:(id)arg2 withError:(id*)arg3 ;
-(BOOL)unmountCurrentSnapshotFromMountPoint:(id)arg1 andRemoveIt:(BOOL)arg2 withError:(id*)arg3 ;
-(BOOL)unmountCurrentSnapshotAndRenameToInternalArchive:(id*)arg1 ;
-(NSString *)currentSnapshotPath;
-(NSString *)currentSnapshotName;
-(NSString *)fileSystemType;
-(void)setFileSystemType:(NSString *)arg1 ;
-(id)init;
-(id)description;
-(BOOL)_fileSystemSupportsSnapshots;
-(BOOL)_fileSystemSupportsSparseFiles;
-(id)_snapshotName:(id)arg1 ;
-(BOOL)snapshotFilesystemWithSnapshotName:(id)arg1 withError:(id*)arg2 ;
-(BOOL)supportsLocalSnapshots;
-(BOOL)removeSnapshot:(id)arg1 withError:(id*)arg2 ;
-(id)_removeFileSystemSnapshotsWithBlock:(/*^block*/id)arg1 ;
@end

