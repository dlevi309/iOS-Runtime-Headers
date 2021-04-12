/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSCloudBookmarksUserIdentityFetcher.h>

@protocol WBSCloudBookmarksMigrationCoordinatorStorage, WBSSafariBookmarksSyncAgentProtocol, WBSCloudTabDeviceProvider, WBSCloudBookmarksDeviceEligibilityFetcher, OS_dispatch_queue, WBSCloudBookmarksMigrationCoordinatorLocalDataProvider, WBSLogger;
@class NSObject, WBSCloudBookmarksMigrationReadinessDecider, NSTimer, NSString;

@interface WBSCloudBookmarksMigrationCoordinator : NSObject <WBSCloudBookmarksUserIdentityFetcher> {

	id<WBSCloudBookmarksMigrationCoordinatorStorage> _storage;
	id<WBSSafariBookmarksSyncAgentProtocol> _syncAgent;
	id<WBSCloudTabDeviceProvider> _cloudTabDeviceProvider;
	id<WBSCloudBookmarksDeviceEligibilityFetcher> _windowsDeviceEligibilityFetcher;
	NSObject*<OS_dispatch_queue> _processingQueue;
	WBSCloudBookmarksMigrationReadinessDecider* _migrationReadinessDecider;
	BOOL _readyToMigrate;
	long long _skipReason;
	NSTimer* _migrationReadinessReevaluationTimer;
	BOOL _migrationEnabled;
	id<WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> _localDataProvider;
	id<WBSLogger> _keyActionsLogger;

}

@property (nonatomic,readonly) id<WBSCloudBookmarksMigrationCoordinatorStorage> storage; 
@property (nonatomic,__weak,readonly) id<WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> localDataProvider;              //@synthesize localDataProvider=_localDataProvider - In the implementation block
@property (nonatomic,readonly) id<WBSSafariBookmarksSyncAgentProtocol> syncAgent; 
@property (nonatomic,readonly) id<WBSCloudTabDeviceProvider> cloudTabDeviceProvider; 
@property (nonatomic,readonly) id<WBSCloudBookmarksDeviceEligibilityFetcher> windowsDeviceEligibilityFetcher; 
@property (nonatomic,retain) id<WBSLogger> keyActionsLogger;                                                                     //@synthesize keyActionsLogger=_keyActionsLogger - In the implementation block
@property (assign,getter=isMigrationEnabled,nonatomic) BOOL migrationEnabled;                                                    //@synthesize migrationEnabled=_migrationEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<WBSCloudBookmarksMigrationCoordinatorStorage>)storage;
-(void)fetchUserIdentityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_migrationReadinessDataInvalidated:(id)arg1 ;
-(void)_logKeyAction:(id)arg1 ;
-(void)_determineCourseOfActionFromSyncAgentMigrationState;
-(void)startCoordinatingMigration;
-(void)setKeyActionsLogger:(id<WBSLogger>)arg1 ;
-(void)_determineCourseOfActionFromRemoteMigrationState;
-(void)_startWaitingForMigrationReadiness;
-(void)_evaluateMigrationRampInclusionForced:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_considerOverridingOtherMigratingDevice;
-(void)noteCloudTabDevicesChanged;
-(void)_logErrorAsKeyAction:(id)arg1 ;
-(void)_reevaluateMigrationReadiness;
-(void)_migrationReadinessDeciderDecidedMigrationIsPossible;
-(void)_migrationReadinessDeciderDecidedMigrationIsNoLongerPossible;
-(void)_scheduleMigrationReadinessReevaluationForDate:(id)arg1 ;
-(void)_stopWaitingForMigrationReadiness;
-(id)initWithStorage:(id)arg1 syncAgent:(id)arg2 localDataProvider:(id)arg3 cloudTabDeviceProvider:(id)arg4 windowsDeviceEligibilityFetcher:(id)arg5 ;
-(id<WBSSafariBookmarksSyncAgentProtocol>)syncAgent;
-(id<WBSCloudTabDeviceProvider>)cloudTabDeviceProvider;
-(id<WBSCloudBookmarksDeviceEligibilityFetcher>)windowsDeviceEligibilityFetcher;
-(void)setMigrationEnabled:(BOOL)arg1 ;
-(BOOL)isMigrationEnabled;
-(id<WBSCloudBookmarksMigrationCoordinatorLocalDataProvider>)localDataProvider;
-(id<WBSLogger>)keyActionsLogger;
@end

