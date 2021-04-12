/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <libobjc.A.dylib/SCLTransportControllerDelegate.h>
#import <libobjc.A.dylib/SCLSchoolModeServerObserver.h>

@class SCLSchoolModeCoordinatorConfiguration, SCLState, NSMutableSet, NSURL, SCLUnlockHistoryItem, SCLPersistentSettings, SCLSettingsSyncCoordinator, SCLScheduleSettings, NSString;

@interface SCLSchoolModeCoordinator : NSObject <SCLTransportControllerDelegate, SCLSchoolModeServerObserver> {

	int _firstUnlockToken;
	BOOL _hasReceivedFirstUnlock;
	BOOL _ready;
	SCLSchoolModeCoordinatorConfiguration* _configuration;
	SCLState* _currentState;
	NSMutableSet* _clients;
	NSURL* _directoryURL;
	NSURL* _scheduleURL;
	SCLUnlockHistoryItem* _pendingUnlockItem;
	SCLPersistentSettings* _persistentSettings;
	SCLSettingsSyncCoordinator* _settingsSyncCoordinator;
	unsigned long long _stateHandle;

}

@property (nonatomic,readonly) NSMutableSet * clients;                                                  //@synthesize clients=_clients - In the implementation block
@property (nonatomic,readonly) NSURL * directoryURL;                                                    //@synthesize directoryURL=_directoryURL - In the implementation block
@property (nonatomic,readonly) NSURL * scheduleURL;                                                     //@synthesize scheduleURL=_scheduleURL - In the implementation block
@property (nonatomic,retain) SCLUnlockHistoryItem * pendingUnlockItem;                                  //@synthesize pendingUnlockItem=_pendingUnlockItem - In the implementation block
@property (nonatomic,retain) SCLPersistentSettings * persistentSettings;                                //@synthesize persistentSettings=_persistentSettings - In the implementation block
@property (nonatomic,retain) SCLSettingsSyncCoordinator * settingsSyncCoordinator;                      //@synthesize settingsSyncCoordinator=_settingsSyncCoordinator - In the implementation block
@property (assign,nonatomic) unsigned long long stateHandle;                                            //@synthesize stateHandle=_stateHandle - In the implementation block
@property (nonatomic,copy,readonly) SCLSchoolModeCoordinatorConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) SCLState * currentState;                                                 //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,retain) SCLScheduleSettings * scheduleSettings; 
@property (getter=isReady,nonatomic,readonly) BOOL ready;                                               //@synthesize ready=_ready - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addClient:(id)arg1 ;
-(NSMutableSet *)clients;
-(id)_configuration;
-(void)setStateHandle:(unsigned long long)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(SCLState *)currentState;
-(id)idsDevice;
-(void)removeClient:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(SCLSchoolModeCoordinatorConfiguration *)configuration;
-(id)server;
-(BOOL)isReady;
-(NSURL *)directoryURL;
-(unsigned long long)stateHandle;
-(id)nrDevice;
-(void)dealloc;
-(SCLScheduleSettings *)scheduleSettings;
-(void)fetchRecentUnlockHistoryItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)addUnlockHistoryItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteHistoryWithCompletion:(/*^block*/id)arg1 ;
-(void)server:(id)arg1 didUpdateState:(id)arg2 fromState:(id)arg3 ;
-(SCLSettingsSyncCoordinator *)settingsSyncCoordinator;
-(void)transportController:(id)arg1 didReceiveSchedule:(id)arg2 forInitialSync:(BOOL)arg3 ;
-(void)transportController:(id)arg1 didReceiveUnlockHistoryItem:(id)arg2 ;
-(id)currentScheduleSettingsForTransportController:(id)arg1 ;
-(void)setSettingsSyncCoordinator:(SCLSettingsSyncCoordinator *)arg1 ;
-(id)transportController;
-(void)_createSchoolTimeDirectoryIfNeeded;
-(void)_registerForFirstUnlockIfNeeded;
-(os_state_data_s*)stateDataWithHints:(os_state_hints_s*)arg1 ;
-(SCLPersistentSettings *)persistentSettings;
-(NSURL *)scheduleURL;
-(void)_requestRemoteScheduleSettingsIfNeeded;
-(void)_lock_loadPersistentSchedule;
-(id)historyStore;
-(void)activateSettingsSyncCoordinatorWithSettings:(id)arg1 ;
-(void)_updateClientsWithSchedule:(id)arg1 notify:(BOOL)arg2 ;
-(void)_classCDataIsAvailable;
-(BOOL)applySchedule:(id)arg1 forInitialSync:(BOOL)arg2 error:(id*)arg3 ;
-(void)_lock_updatePersistentSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)_noteHistoryDidUpdate;
-(void)_persistSettings:(id)arg1 ;
-(SCLUnlockHistoryItem *)pendingUnlockItem;
-(void)setPendingUnlockItem:(SCLUnlockHistoryItem *)arg1 ;
-(BOOL)applySchedule:(id)arg1 error:(id*)arg2 ;
-(void)purgeOldHistoryItems;
-(void)setPersistentSettings:(SCLPersistentSettings *)arg1 ;
@end

