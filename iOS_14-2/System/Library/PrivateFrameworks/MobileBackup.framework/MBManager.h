/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/


@protocol MBManagerDelegate;
#import <MobileBackup/MobileBackup-Structs.h>
@class NSObject;

@interface MBManager : NSObject {

	NSObject*<MBManagerDelegate> _delegate;

}

@property (__weak) NSObject*<MBManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)backupDeviceUDID;
-(BOOL)startBackupWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)backupDeviceUUID;
-(BOOL)setupBackupWithPasscode:(id)arg1 error:(id*)arg2 ;
-(void)insufficientFreeSpaceToRestore;
-(BOOL)deleteItemFromBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 error:(id*)arg5 ;
-(void)finishRestore;
-(BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 context:(id)arg3 error:(id*)arg4 ;
-(void)prioritizeRestoreFileWithPath:(id)arg1 ;
-(BOOL)restoreSupportsBatching;
-(id)getAppleIDsMapForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 activeAppleID:(id*)arg3 error:(id*)arg4 ;
-(BOOL)restoreBookWithPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareForBackgroundRestoreWithError:(id*)arg1 ;
-(BOOL)saveKeybagsForBackupUDID:(id)arg1 withError:(id*)arg2 ;
-(id)getBuddyDataStashForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)restoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 range:(NSRange)arg3 ;
-(BOOL)extractItemFromBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 toPath:(id)arg5 error:(id*)arg6 ;
-(id)init;
-(BOOL)restoreFilesWithPaths:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(BOOL)arg3 range:(NSRange)arg4 error:(id*)arg5 ;
-(void)startBackup;
-(BOOL)startBackupWithError:(id*)arg1 ;
-(NSObject*<MBManagerDelegate>)delegate;
-(BOOL)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)fetchiCloudRestoreIsCompleteWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)countCameraRollQuota;
-(id)dateOfLastBackup;
-(BOOL)unpinSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3 ;
-(BOOL)pinSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3 ;
-(BOOL)isBackupEnabledForDomainName:(id)arg1 ;
-(BOOL)startScanWithError:(id*)arg1 ;
-(void)setSupportsiTunes:(BOOL)arg1 ;
-(void)rebootDevice;
-(void)setRestoreQualityOfService:(long long)arg1 ;
-(id)reservedBackupSizeListWithError:(id*)arg1 ;
-(BOOL)restoreBookWithPath:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)discountCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2 ;
-(BOOL)startScanForBundleIDs:(id)arg1 error:(id*)arg2 ;
-(BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 withQOS:(long long)arg3 context:(id)arg4 error:(id*)arg5 ;
-(id)backgroundRestoreInfo;
-(unsigned long long)countOfRestoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 ;
-(BOOL)restoreFilesWithPaths:(id)arg1 error:(id*)arg2 ;
-(void)startDataTransferWithPreflightInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)domainInfoForName:(id)arg1 ;
-(BOOL)startDeviceTransferWithTaskType:(long long)arg1 sessionInfo:(id)arg2 error:(id*)arg3 ;
-(BOOL)restoreFileExistsWithPath:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 eventQueue:(id)arg2 ;
-(BOOL)resumeDeviceTransferWithTaskType:(long long)arg1 error:(id*)arg2 ;
-(BOOL)restoreFileWithPath:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)allowiTunesBackup;
-(BOOL)unsetLocalBackupPasswordWithError:(id*)arg1 ;
-(BOOL)deleteBackupUDID:(id)arg1 error:(id*)arg2 ;
-(id)getBackupListWithError:(id*)arg1 ;
-(void)startKeychainDataImportWithKeychainInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isLocalBackupPasswordSetWithError:(id*)arg1 ;
-(void)setBackupEnabled:(BOOL)arg1 ;
-(id)dateOfNextScheduledBackup;
-(id)backupList;
-(BOOL)restoreFileWithPath:(id)arg1 error:(id*)arg2 ;
-(void)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 ;
-(id)restoreInfo;
-(BOOL)inheritSnapshot:(id)arg1 fromDevice:(id)arg2 error:(id*)arg3 ;
-(void)setRestoreSessionWithBackupUDID:(id)arg1 snapshotUUID:(id)arg2 ;
-(unsigned long long)nextBackupSize;
-(BOOL)restoreDataExistsForApplicationWithBundleID:(id)arg1 size:(unsigned long long*)arg2 ;
-(BOOL)mergeSnapshots:(id)arg1 backupUUID:(id)arg2 error:(id*)arg3 ;
-(BOOL)cancelApplicationRestoreWithBundleID:(id)arg1 error:(id*)arg2 ;
-(id)journalForBackupUUID:(id)arg1 error:(id*)arg2 ;
-(BOOL)cancelDeviceTransferWithTaskType:(long long)arg1 error:(id*)arg2 ;
-(id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(BOOL)arg3 error:(id*)arg4 ;
-(void)syncBackupEnabled;
-(void)setBackupEnabled:(BOOL)arg1 forDomainName:(id)arg2 ;
-(id)journalLastModifiedForBackupUUID:(id)arg1 error:(id*)arg2 ;
-(id)restoreState;
-(BOOL)discountCameraRollQuota;
-(BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 error:(id*)arg3 ;
-(id)disabledDomainInfos;
-(void)setDelegate:(NSObject*<MBManagerDelegate>)arg1 ;
-(void)startKeychainTransferWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)filesForSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3 ;
-(void)restoreFileWithPath:(id)arg1 ;
-(BOOL)airTrafficShouldCreateAppPlaceholdersWithError:(id*)arg1 ;
-(void)startKeychainDataTransferWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)domainInfoList;
-(BOOL)isBackupEnabled;
-(BOOL)archiveLogsTo:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeDomainName:(id)arg1 error:(id*)arg2 ;
-(void)startPreflightWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)countCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2 ;
-(BOOL)addFileToBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 fromPath:(id)arg5 error:(id*)arg6 ;
-(void)cancelRestore;
-(BOOL)recordRestoreFailure:(id)arg1 error:(id*)arg2 ;
-(void)clearRestoreSession;
-(void)setAllowiTunesBackup:(BOOL)arg1 ;
-(id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 activeAppleID:(id*)arg3 error:(id*)arg4 ;
-(id)getBackupListWithFiltering:(BOOL)arg1 error:(id*)arg2 ;
-(id)nextBackupSizeInfo;
-(id)backupState;
-(id)restoreFilesForDomain:(id)arg1 error:(id*)arg2 ;
-(id)_init;
-(void)cancel;
@end

