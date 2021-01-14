/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSSafariBookmarksSyncAgentProtocol, OS_dispatch_queue, WBSCloudBookmarksMigrationCoordinatorLocalDataProvider, WBSLogger;
@class NSObject;

@interface WBSCloudBookmarksMigrationCoordinator : NSObject {

	id<WBSSafariBookmarksSyncAgentProtocol> _syncAgent;
	NSObject*<OS_dispatch_queue> _processingQueue;
	BOOL _didDetermineReadyToMigrate;
	long long _skipReason;
	BOOL _migrationEnabled;
	id<WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> _localDataProvider;
	id<WBSLogger> _keyActionsLogger;

}

@property (nonatomic,__weak,readonly) id<WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> localDataProvider;              //@synthesize localDataProvider=_localDataProvider - In the implementation block
@property (nonatomic,readonly) id<WBSSafariBookmarksSyncAgentProtocol> syncAgent; 
@property (nonatomic,retain) id<WBSLogger> keyActionsLogger;                                                                     //@synthesize keyActionsLogger=_keyActionsLogger - In the implementation block
@property (assign,getter=isMigrationEnabled,nonatomic) BOOL migrationEnabled;                                                    //@synthesize migrationEnabled=_migrationEnabled - In the implementation block
-(void)startCoordinatingMigration;
-(id)init;
-(id<WBSSafariBookmarksSyncAgentProtocol>)syncAgent;
-(void)_considerOverridingOtherMigratingDevice;
-(id<WBSLogger>)keyActionsLogger;
-(void)_beginMigrationIfPossible;
-(void)_logKeyAction:(id)arg1 ;
-(void)setKeyActionsLogger:(id<WBSLogger>)arg1 ;
-(void)_determineCourseOfActionFromRemoteMigrationState;
-(void)setMigrationEnabled:(BOOL)arg1 ;
-(void)_logErrorAsKeyAction:(id)arg1 ;
-(id<WBSCloudBookmarksMigrationCoordinatorLocalDataProvider>)localDataProvider;
-(BOOL)isMigrationEnabled;
-(void)_determineCourseOfActionFromSyncAgentMigrationState;
-(id)initWithSyncAgent:(id)arg1 localDataProvider:(id)arg2 ;
@end

