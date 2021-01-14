/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)toggleiCloudBackupsIfNeeded:(/*^block*/id)arg1 ;
-(void)_setICloudBackupsDisabled:(BOOL)arg1 ;
-(BOOL)iCloudBackupsDisabled;
-(void)_savePreviousDeviceState:(id)arg1 ;
-(id)syncStateDebuggingInfo:(id)arg1 ;
-(void)setCkUtilities:(IMDCKUtilities *)arg1 ;
-(id)_serverBagTimeIntervalForFirstSyncTimeout;
-(id)_readPreviousDeviceState;
-(void)_deviceIDFromMobileBackupManager:(id*)arg1 legacyDeviceID:(id*)arg2 ;
-(id)_readCurrentDeviceState;
-(void)sendDeviceIDToCloudKitWithCompletion:(/*^block*/id)arg1 ;
-(long long)_readRecordCount;
-(BOOL)checkDatabaseWasRestored;
-(void)removePathFromiCloudBackup:(id)arg1 ;
-(void)_ensureRestoredDatabaseToBackup;
-(BOOL)iCloudBackupEnabledSystemWide;
-(id)_debuggingRestoreStateDescription;
-(NSDate *)firstSyncDate;
-(BOOL)_firstSyncTimeoutHasExpired;
-(void)_fetchCountOfSyncedCloudKitRecords:(long long*)arg1 totalCount:(long long*)arg2 ;
-(BOOL)pathRemovedFromBackup:(id)arg1 ;
-(void)eventStreamHandler:(id)arg1 didReceiveEventWithName:(id)arg2 userInfo:(id)arg3 ;
-(IMDCKUtilities *)ckUtilities;
-(void)_enqueOperation:(id)arg1 ;
-(void)setUserDefaultBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)_disabledDirectoryPath;
-(void)writeUserDefault:(id)arg1 forKey:(id)arg2 ;
-(long long)_disableiCloudBackupIfSyncPercentageIsHighEnough:(long long)arg1 totalCount:(long long)arg2 ;
-(void)_saveRecordCount:(long long)arg1 ;
-(void)setFirstSyncDateToNow;
-(BOOL)_currentDeviceStateIsRestore:(id)arg1 ;
-(BOOL)_timeIntervalFromFirstSync:(id)arg1 hasExpiredForDate:(id)arg2 ;
-(BOOL)_canDisableiCloudBackupsAfterRestore;
-(void)removeUserDefault:(id)arg1 ;
-(long long)_attemptToDisableiCloudBackupsWithCurrentDeviceState:(id)arg1 ;
-(BOOL)_setiCloudBackupAttribute:(BOOL)arg1 onItemAtPath:(id)arg2 error:(id*)arg3 ;
-(void)setFirstSyncDate:(NSDate *)arg1 ;
-(BOOL)_deviceStateHasChanged:(id)arg1 ;
-(BOOL)readUserDefaultBoolForKey:(id)arg1 ;
-(id)readUserDefaultForKey:(id)arg1 ;
-(id)dateOfLastBackUp;
-(id)createBackupManager;
-(double)_firstSyncExpirationTimeInterval;
-(id)_primaryAccountAltDSID;
-(void)setICloudBackupsDisabled:(BOOL)arg1 ;
-(void)registerForDistributedNotifications;
@end

