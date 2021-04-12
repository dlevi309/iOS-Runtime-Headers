/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDXPCEventStreamHandlerDelegate.h>

@class IMDCKUtilities, NSDate, NSString;

@interface IMDCKBackupController : NSObject <IMDXPCEventStreamHandlerDelegate> {

	IMDCKUtilities* _ckUtilities;

}

@property (assign,nonatomic,__weak) IMDCKUtilities * ckUtilities;              //@synthesize ckUtilities=_ckUtilities - In the implementation block
@property (nonatomic,retain) NSDate * firstSyncDate; 
@property (assign,nonatomic) BOOL iCloudBackupsDisabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_enqueOperation:(id)arg1 ;
-(BOOL)iCloudBackupsDisabled;
-(void)setICloudBackupsDisabled:(BOOL)arg1 ;
-(id)dateOfLastBackUp;
-(IMDCKUtilities *)ckUtilities;
-(void)removePathFromiCloudBackup:(id)arg1 ;
-(void)_ensureRestoredDatabaseToBackup;
-(void)setCkUtilities:(IMDCKUtilities *)arg1 ;
-(id)syncStateDebuggingInfo:(id)arg1 ;
-(void)_setICloudBackupsDisabled:(BOOL)arg1 ;
-(void)writeUserDefault:(id)arg1 forKey:(id)arg2 ;
-(id)readUserDefaultForKey:(id)arg1 ;
-(id)_serverBagTimeIntervalForFirstSyncTimeout;
-(NSDate *)firstSyncDate;
-(void)setFirstSyncDate:(NSDate *)arg1 ;
-(BOOL)_timeIntervalFromFirstSync:(id)arg1 hasExpiredForDate:(id)arg2 ;
-(double)_firstSyncExpirationTimeInterval;
-(id)_readCurrentDeviceState;
-(void)_savePreviousDeviceState:(id)arg1 ;
-(long long)_attemptToDisableiCloudBackupsWithCurrentDeviceState:(id)arg1 ;
-(id)_readPreviousDeviceState;
-(BOOL)_currentDeviceStateIsRestore:(id)arg1 ;
-(BOOL)_canDisableiCloudBackupsAfterRestore;
-(void)_fetchCountOfSyncedCloudKitRecords:(long long*)arg1 totalCount:(long long*)arg2 ;
-(long long)_disableiCloudBackupIfSyncPercentageIsHighEnough:(long long)arg1 totalCount:(long long)arg2 ;
-(id)_disabledDirectoryPath;
-(BOOL)_setiCloudBackupAttribute:(BOOL)arg1 onItemAtPath:(id)arg2 error:(id*)arg3 ;
-(id)createBackupManager;
-(void)_deviceIDFromMobileBackupManager:(id*)arg1 legacyDeviceID:(id*)arg2 ;
-(BOOL)checkDatabaseWasRestored;
-(id)_debuggingRestoreStateDescription;
-(void)eventStreamHandler:(id)arg1 didReceiveEventWithName:(id)arg2 userInfo:(id)arg3 ;
-(void)setUserDefaultBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)removeUserDefault:(id)arg1 ;
-(BOOL)readUserDefaultBoolForKey:(id)arg1 ;
-(long long)_readRecordCount;
-(void)_saveRecordCount:(long long)arg1 ;
-(void)setFirstSyncDateToNow;
-(BOOL)_firstSyncTimeoutHasExpired;
-(void)toggleiCloudBackupsIfNeeded:(/*^block*/id)arg1 ;
-(void)registerForDistributedNotifications;
-(id)_primaryAccountAltDSID;
-(BOOL)_deviceStateHasChanged:(id)arg1 ;
-(BOOL)pathRemovedFromBackup:(id)arg1 ;
-(BOOL)iCloudBackupEnabledSystemWide;
-(void)sendDeviceIDToCloudKitWithCompletion:(/*^block*/id)arg1 ;
@end

