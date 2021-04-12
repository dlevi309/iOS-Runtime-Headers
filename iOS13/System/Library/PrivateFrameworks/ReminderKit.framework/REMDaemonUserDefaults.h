/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMUserDefaults.h>

@class NSString, NSNumber, NSDate, NSData, REMObjectID, NSURL, NSDateComponents;

@interface REMDaemonUserDefaults : REMUserDefaults

@property (nonatomic,readonly) BOOL newAppShouldTakeoverEKReminderNotifications; 
@property (nonatomic,readonly) BOOL dataaccessDaemonStopSyncingReminders; 
@property (nonatomic,readonly) BOOL siriShouldRouteIntentsToNewRemindersApp; 
@property (assign,nonatomic) BOOL databaseMigrationTestModeEnabled; 
@property (assign,nonatomic) BOOL isDatabaseMigrated; 
@property (assign,nonatomic) BOOL databaseMigrationTimedOut; 
@property (nonatomic,copy) NSString * lastDatabaseMigrationSystemBuildVersion; 
@property (nonatomic,retain) NSNumber * cloudKitMigrationMaxNumInvocations; 
@property (nonatomic,retain) NSNumber * cloudKitMigrationMaxNumFailures; 
@property (nonatomic,retain) NSNumber * cloudKitMigrationDelayAfterError; 
@property (nonatomic,retain) NSNumber * cloudKitMigrationObserverPollingInterval; 
@property (nonatomic,retain) NSNumber * cloudKitMigrationSimulatedError; 
@property (nonatomic,retain) NSNumber * cloudKitResultsLimitPerSyncOperation; 
@property (assign,nonatomic) BOOL cloudKitMigrationDisableCleanUp; 
@property (nonatomic,retain) NSString * acAccountIdentifierToMergeLocalDataIntoSyncData; 
@property (nonatomic,retain) NSString * acAccountIdentifierToMigrateInactivatedCalDavData; 
@property (nonatomic,copy) NSNumber * spotlightIndexVersion; 
@property (nonatomic,copy) NSDate * nextScheduledAlarmDate; 
@property (nonatomic,copy) NSDate * lastPresentAlarmDate; 
@property (nonatomic,copy) NSDate * lastSyncPoll; 
@property (nonatomic,copy) NSData * userInteractionsData; 
@property (assign,nonatomic) BOOL simulateMAIDAccount; 
@property (assign,nonatomic) BOOL showRemindersAsOverdue; 
@property (assign,nonatomic) BOOL enableWelcomeScreen; 
@property (assign,nonatomic) BOOL forceShowWelcomeScreen; 
@property (nonatomic,retain) REMObjectID * preferredDefaultListID; 
@property (nonatomic,retain) NSURL * preferredDefaultListObjectIDUrl; 
@property (nonatomic,retain) NSDateComponents * todayNotificationFireTime; 
@property (assign,nonatomic) BOOL disableAlarmEngineDataSourcePrefetching; 
+(id)todayNotificationFireTimeFromStorageNumber:(id)arg1 ;
+(id)storageNumberForTodayNotificationTime:(id)arg1 ;
-(BOOL)siriShouldRouteIntentsToNewRemindersApp;
-(BOOL)newAppShouldTakeoverEKReminderNotifications;
-(BOOL)dataaccessDaemonStopSyncingReminders;
-(BOOL)showRemindersAsOverdue;
-(BOOL)databaseMigrationTestModeEnabled;
-(NSString *)lastDatabaseMigrationSystemBuildVersion;
-(BOOL)isDatabaseMigrated;
-(void)setIsDatabaseMigrated:(BOOL)arg1 ;
-(void)setLastDatabaseMigrationSystemBuildVersion:(NSString *)arg1 ;
-(void)_deletePreferredDefaultListObjectIDUrl;
-(REMObjectID *)preferredDefaultListID;
-(NSDateComponents *)todayNotificationFireTime;
-(void)setDatabaseMigrationTestModeEnabled:(BOOL)arg1 ;
-(BOOL)databaseMigrationTimedOut;
-(void)setDatabaseMigrationTimedOut:(BOOL)arg1 ;
-(NSNumber *)cloudKitMigrationMaxNumInvocations;
-(void)setCloudKitMigrationMaxNumInvocations:(NSNumber *)arg1 ;
-(NSNumber *)cloudKitMigrationMaxNumFailures;
-(void)setCloudKitMigrationMaxNumFailures:(NSNumber *)arg1 ;
-(NSNumber *)cloudKitMigrationDelayAfterError;
-(void)setCloudKitMigrationDelayAfterError:(NSNumber *)arg1 ;
-(NSNumber *)cloudKitMigrationObserverPollingInterval;
-(void)setCloudKitMigrationObserverPollingInterval:(NSNumber *)arg1 ;
-(NSNumber *)cloudKitMigrationSimulatedError;
-(void)setCloudKitMigrationSimulatedError:(NSNumber *)arg1 ;
-(NSNumber *)cloudKitResultsLimitPerSyncOperation;
-(void)setCloudKitResultsLimitPerSyncOperation:(NSNumber *)arg1 ;
-(BOOL)cloudKitMigrationDisableCleanUp;
-(void)setCloudKitMigrationDisableCleanUp:(BOOL)arg1 ;
-(void)setPreferredDefaultListID:(REMObjectID *)arg1 ;
-(void)deletePreferredDefaultListID;
-(id)observePreferredDefaultListIDWithBlock:(/*^block*/id)arg1 ;
-(NSURL *)preferredDefaultListObjectIDUrl;
-(void)setPreferredDefaultListObjectIDUrl:(NSURL *)arg1 ;
-(NSString *)acAccountIdentifierToMergeLocalDataIntoSyncData;
-(void)setAcAccountIdentifierToMergeLocalDataIntoSyncData:(NSString *)arg1 ;
-(NSString *)acAccountIdentifierToMigrateInactivatedCalDavData;
-(void)setAcAccountIdentifierToMigrateInactivatedCalDavData:(NSString *)arg1 ;
-(NSNumber *)spotlightIndexVersion;
-(void)setSpotlightIndexVersion:(NSNumber *)arg1 ;
-(NSDate *)nextScheduledAlarmDate;
-(void)setNextScheduledAlarmDate:(NSDate *)arg1 ;
-(NSDate *)lastPresentAlarmDate;
-(void)setLastPresentAlarmDate:(NSDate *)arg1 ;
-(NSDate *)lastSyncPoll;
-(void)setLastSyncPoll:(NSDate *)arg1 ;
-(NSData *)userInteractionsData;
-(void)setUserInteractionsData:(NSData *)arg1 ;
-(BOOL)simulateMAIDAccount;
-(void)setSimulateMAIDAccount:(BOOL)arg1 ;
-(void)setShowRemindersAsOverdue:(BOOL)arg1 ;
-(id)observeShowRemindersAsOverdueWithBlock:(/*^block*/id)arg1 ;
-(BOOL)enableWelcomeScreen;
-(void)setEnableWelcomeScreen:(BOOL)arg1 ;
-(BOOL)forceShowWelcomeScreen;
-(void)setForceShowWelcomeScreen:(BOOL)arg1 ;
-(void)setTodayNotificationFireTime:(NSDateComponents *)arg1 ;
-(id)streamTodayNotificationFireTime:(/*^block*/id)arg1 ;
-(BOOL)disableAlarmEngineDataSourcePrefetching;
-(void)setDisableAlarmEngineDataSourcePrefetching:(BOOL)arg1 ;
@end

