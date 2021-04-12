/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/


#import <MobileBackup/MobileBackup-Structs.h>
@interface MBManager : NSObject {

	id _delegate;

}

@property (assign,nonatomic) NSObject*<MBManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(NSObject*<MBManagerDelegate>)delegate;
-(void)setDelegate:(NSObject*<MBManagerDelegate>)arg1 ;
-(id)_init;
-(void)cancel;
-(id)initWithDelegate:(id)arg1 ;
-(void)rebootDevice;
-(BOOL)discountCameraRollQuota;
-(BOOL)countCameraRollQuota;
-(id)domainInfoForName:(id)arg1 ;
-(id)restoreState;
-(id)getBuddyDataStashForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)setupBackupWithPasscode:(id)arg1 error:(id*)arg2 ;
-(BOOL)startDeviceTransferWithTaskType:(long long)arg1 sessionInfo:(id)arg2 error:(id*)arg3 ;
-(BOOL)cancelDeviceTransferWithTaskType:(long long)arg1 error:(id*)arg2 ;
-(id)initWithDelegate:(id)arg1 eventQueue:(id)arg2 ;
-(id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(BOOL)arg3 range:(NSRange)arg4 error:(id*)arg5 ;
-(void)setSupportsiTunes:(BOOL)arg1 ;
-(BOOL)isBackupEnabled;
-(void)setBackupEnabled:(BOOL)arg1 ;
-(void)syncBackupEnabled;
-(BOOL)isLocalBackupPasswordSetWithError:(id*)arg1 ;
-(BOOL)unsetLocalBackupPasswordWithError:(id*)arg1 ;
-(id)backupState;
-(id)backupDeviceUUID;
-(id)backupDeviceUDID;
-(id)backupList;
-(id)getBackupListWithError:(id*)arg1 ;
-(id)getBackupListWithFiltering:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)inheritSnapshot:(id)arg1 fromDevice:(id)arg2 error:(id*)arg3 ;
-(BOOL)recordRestoreFailure:(id)arg1 error:(id*)arg2 ;
-(id)restoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 range:(NSRange)arg3 ;
-(unsigned long long)countOfRestoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 ;
-(void)startBackup;
-(BOOL)startBackupWithError:(id*)arg1 ;
-(id)filesForSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3 ;
-(BOOL)mergeSnapshots:(id)arg1 backupUUID:(id)arg2 error:(id*)arg3 ;
-(id)journalLastModifiedForBackupUUID:(id)arg1 error:(id*)arg2 ;
-(id)journalForBackupUUID:(id)arg1 error:(id*)arg2 ;
-(void)fetchiCloudRestoreIsCompleteWithCompletion:(/*^block*/id)arg1 ;
-(id)backgroundRestoreInfo;
-(BOOL)restoreFileExistsWithPath:(id)arg1 ;
-(BOOL)restoreDataExistsForApplicationWithBundleID:(id)arg1 size:(unsigned long long*)arg2 ;
-(id)restoreFilesForDomain:(id)arg1 error:(id*)arg2 ;
-(id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(BOOL)arg3 error:(id*)arg4 ;
-(void)prioritizeRestoreFileWithPath:(id)arg1 ;
-(id)dateOfLastBackup;
-(id)dateOfNextScheduledBackup;
-(BOOL)restoreSupportsBatching;
-(void)setRestoreQualityOfService:(long long)arg1 ;
-(void)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 ;
-(BOOL)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)restoreFileWithPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)restoreFileWithPath:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(void)restoreFileWithPath:(id)arg1 ;
-(BOOL)restoreFilesWithPaths:(id)arg1 error:(id*)arg2 ;
-(BOOL)restoreFilesWithPaths:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)restoreBookWithPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)restoreBookWithPath:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 context:(id)arg3 error:(id*)arg4 ;
-(BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 withQOS:(long long)arg3 context:(id)arg4 error:(id*)arg5 ;
-(BOOL)cancelApplicationRestoreWithBundleID:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveKeybagsForBackupUDID:(id)arg1 withError:(id*)arg2 ;
-(void)finishRestore;
-(void)insufficientFreeSpaceToRestore;
-(void)cancelRestore;
-(BOOL)deleteBackupUDID:(id)arg1 error:(id*)arg2 ;
-(BOOL)startScanWithError:(id*)arg1 ;
-(BOOL)startScanForBundleIDs:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)nextBackupSize;
-(id)nextBackupSizeInfo;
-(id)domainInfoList;
-(id)disabledDomainInfos;
-(BOOL)removeDomainName:(id)arg1 error:(id*)arg2 ;
-(id)reservedBackupSizeListWithError:(id*)arg1 ;
-(BOOL)isBackupEnabledForDomainName:(id)arg1 ;
-(void)setBackupEnabled:(BOOL)arg1 forDomainName:(id)arg2 ;
-(BOOL)extractItemFromBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 toPath:(id)arg5 error:(id*)arg6 ;
-(BOOL)addFileToBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 fromPath:(id)arg5 error:(id*)arg6 ;
-(BOOL)deleteItemFromBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 error:(id*)arg5 ;
-(id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 activeAppleID:(id*)arg3 error:(id*)arg4 ;
-(id)getAppleIDsMapForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 activeAppleID:(id*)arg3 error:(id*)arg4 ;
-(id)restoreInfo;
-(void)setRestoreSessionWithBackupUDID:(id)arg1 snapshotUUID:(id)arg2 ;
-(void)clearRestoreSession;
-(void)setAllowiTunesBackup:(BOOL)arg1 ;
-(BOOL)allowiTunesBackup;
-(BOOL)airTrafficShouldCreateAppPlaceholdersWithError:(id*)arg1 ;
-(BOOL)countCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2 ;
-(BOOL)discountCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareForBackgroundRestoreWithError:(id*)arg1 ;
-(BOOL)archiveLogsTo:(id)arg1 error:(id*)arg2 ;
-(BOOL)pinSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3 ;
-(BOOL)unpinSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3 ;
-(BOOL)resumeDeviceTransferWithTaskType:(long long)arg1 error:(id*)arg2 ;
-(void)startPreflightWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startKeychainTransferWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startKeychainDataTransferWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startKeychainDataImportWithKeychainInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startDataTransferWithPreflightInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

