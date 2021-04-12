/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivityAchievementsPlugin.bundle/ActivityAchievementsPlugin
*/

#import <ActivityAchievementsPlugin/ActivityAchievementsPlugin-Structs.h>
#import <libobjc.A.dylib/HDXPCListenerDelegate.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/HDProfileExtension.h>
#import <libobjc.A.dylib/ACHAchievementsProfileExtending.h>

@protocol OS_dispatch_queue, ACHAwardingScheduler;
@class ACHAchievementStore, ACHTemplateStore, NSObject, HDProfile, HDXPCListener, NSMutableSet, NSSet, ACHTemplateAssetRegistry, ACHAchievementProgressEngine, ACHEarnedInstanceStore, ACHEarnedInstanceEntityWrapper, ACHEarnedInstanceAwardingEngine, ACHTemplateEntityWrapper, ACHAWDSubmissionManager, ACHMobileAssetProvider, ACHDataStore, ACHActivityAwardingSource, ACHWorkoutUtility, ACHWorkoutAwardingSource, ACHMonthlyChallengeAwardingSource, ACHActivitySummaryUtility, ACHBuiltinTemplateSource, ACHPerfectMonthTemplateSource, ACHMonthlyChallengeTemplateSource, ACHRemoteTemplateSource, ACHTemplateSourceScheduler, ACHBackCompatMonthlyChallengeListener, ACHRemoteTemplateAvailabilityKeyProvider, ACHRemoteTemplateAvailabilityListener, NSString;

@interface ACHAchievementsProfileExtension : NSObject <HDXPCListenerDelegate, HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDProfileExtension, ACHAchievementsProfileExtending> {

	os_unfair_lock_s _accessLock;
	NSObject*<OS_dispatch_queue> _clientQueue;
	BOOL _initialMoveGoalFetchCompleted;
	BOOL _initialMoveGoalHasBeenSet;
	BOOL _isWatch;
	BOOL _krakenUnleashed;
	BOOL _fitnessAppIsInstalled;
	BOOL _unitTesting;
	HDProfile* _profile;
	HDXPCListener* _listener;
	NSMutableSet* _templatesSourcesToRegister;
	NSMutableSet* _awardingSourcesToRegister;
	NSSet* _blocksWaitingOnInitialization;
	ACHAchievementStore* _achievementStore;
	ACHTemplateAssetRegistry* _templateAssetRegistry;
	ACHAchievementProgressEngine* _progressProvider;
	ACHEarnedInstanceStore* _earnedInstanceStore;
	ACHEarnedInstanceEntityWrapper* _earnedInstanceEntityWrapper;
	ACHEarnedInstanceAwardingEngine* _awardingEngine;
	ACHTemplateStore* _templateStore;
	ACHTemplateEntityWrapper* _templateEntityWrapper;
	ACHAWDSubmissionManager* _submissionManager;
	ACHMobileAssetProvider* _mobileAssetProvider;
	ACHDataStore* _dataStore;
	ACHActivityAwardingSource* _activityAwardingSource;
	ACHWorkoutUtility* _workoutUtility;
	ACHWorkoutAwardingSource* _workoutAwardingSource;
	ACHMonthlyChallengeAwardingSource* _monthlyChallengeAwardingSource;
	ACHActivitySummaryUtility* _activitySummaryUtility;
	id<ACHAwardingScheduler> _awardingScheduler;
	ACHBuiltinTemplateSource* _builtInTemplateSource;
	ACHPerfectMonthTemplateSource* _perfectMonthTemplateSource;
	ACHMonthlyChallengeTemplateSource* _monthlyChallengeTemplateSource;
	ACHRemoteTemplateSource* _remoteTemplateSource;
	ACHTemplateSourceScheduler* _templateSourceScheduler;
	ACHBackCompatMonthlyChallengeListener* _backCompatMonthlyChallengeListener;
	ACHRemoteTemplateAvailabilityKeyProvider* _remoteTemplateAvailabilityKeyProvider;
	ACHRemoteTemplateAvailabilityListener* _remoteTemplateAvailabilityListener;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                                                    //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HDXPCListener * listener;                                                                      //@synthesize listener=_listener - In the implementation block
@property (assign,nonatomic) BOOL initialMoveGoalFetchCompleted;                                                            //@synthesize initialMoveGoalFetchCompleted=_initialMoveGoalFetchCompleted - In the implementation block
@property (assign,nonatomic) BOOL initialMoveGoalHasBeenSet;                                                                //@synthesize initialMoveGoalHasBeenSet=_initialMoveGoalHasBeenSet - In the implementation block
@property (assign,nonatomic) BOOL isWatch;                                                                                  //@synthesize isWatch=_isWatch - In the implementation block
@property (assign,nonatomic) BOOL krakenUnleashed;                                                                          //@synthesize krakenUnleashed=_krakenUnleashed - In the implementation block
@property (assign,nonatomic) BOOL fitnessAppIsInstalled;                                                                    //@synthesize fitnessAppIsInstalled=_fitnessAppIsInstalled - In the implementation block
@property (assign,nonatomic) BOOL unitTesting;                                                                              //@synthesize unitTesting=_unitTesting - In the implementation block
@property (nonatomic,retain) NSMutableSet * templatesSourcesToRegister;                                                     //@synthesize templatesSourcesToRegister=_templatesSourcesToRegister - In the implementation block
@property (nonatomic,retain) NSMutableSet * awardingSourcesToRegister;                                                      //@synthesize awardingSourcesToRegister=_awardingSourcesToRegister - In the implementation block
@property (nonatomic,retain) NSSet * blocksWaitingOnInitialization;                                                         //@synthesize blocksWaitingOnInitialization=_blocksWaitingOnInitialization - In the implementation block
@property (nonatomic,retain) ACHAchievementStore * achievementStore;                                                        //@synthesize achievementStore=_achievementStore - In the implementation block
@property (nonatomic,retain) ACHTemplateAssetRegistry * templateAssetRegistry;                                              //@synthesize templateAssetRegistry=_templateAssetRegistry - In the implementation block
@property (nonatomic,retain) ACHAchievementProgressEngine * progressProvider;                                               //@synthesize progressProvider=_progressProvider - In the implementation block
@property (nonatomic,retain) ACHEarnedInstanceStore * earnedInstanceStore;                                                  //@synthesize earnedInstanceStore=_earnedInstanceStore - In the implementation block
@property (nonatomic,retain) ACHEarnedInstanceEntityWrapper * earnedInstanceEntityWrapper;                                  //@synthesize earnedInstanceEntityWrapper=_earnedInstanceEntityWrapper - In the implementation block
@property (nonatomic,retain) ACHEarnedInstanceAwardingEngine * awardingEngine;                                              //@synthesize awardingEngine=_awardingEngine - In the implementation block
@property (nonatomic,retain) ACHTemplateStore * templateStore;                                                              //@synthesize templateStore=_templateStore - In the implementation block
@property (nonatomic,retain) ACHTemplateEntityWrapper * templateEntityWrapper;                                              //@synthesize templateEntityWrapper=_templateEntityWrapper - In the implementation block
@property (nonatomic,retain) ACHAWDSubmissionManager * submissionManager;                                                   //@synthesize submissionManager=_submissionManager - In the implementation block
@property (nonatomic,retain) ACHMobileAssetProvider * mobileAssetProvider;                                                  //@synthesize mobileAssetProvider=_mobileAssetProvider - In the implementation block
@property (nonatomic,retain) ACHDataStore * dataStore;                                                                      //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,retain) ACHActivityAwardingSource * activityAwardingSource;                                            //@synthesize activityAwardingSource=_activityAwardingSource - In the implementation block
@property (nonatomic,retain) ACHWorkoutUtility * workoutUtility;                                                            //@synthesize workoutUtility=_workoutUtility - In the implementation block
@property (nonatomic,retain) ACHWorkoutAwardingSource * workoutAwardingSource;                                              //@synthesize workoutAwardingSource=_workoutAwardingSource - In the implementation block
@property (nonatomic,retain) ACHMonthlyChallengeAwardingSource * monthlyChallengeAwardingSource;                            //@synthesize monthlyChallengeAwardingSource=_monthlyChallengeAwardingSource - In the implementation block
@property (nonatomic,retain) ACHActivitySummaryUtility * activitySummaryUtility;                                            //@synthesize activitySummaryUtility=_activitySummaryUtility - In the implementation block
@property (nonatomic,retain) id<ACHAwardingScheduler> awardingScheduler;                                                    //@synthesize awardingScheduler=_awardingScheduler - In the implementation block
@property (nonatomic,retain) ACHBuiltinTemplateSource * builtInTemplateSource;                                              //@synthesize builtInTemplateSource=_builtInTemplateSource - In the implementation block
@property (nonatomic,retain) ACHPerfectMonthTemplateSource * perfectMonthTemplateSource;                                    //@synthesize perfectMonthTemplateSource=_perfectMonthTemplateSource - In the implementation block
@property (nonatomic,retain) ACHMonthlyChallengeTemplateSource * monthlyChallengeTemplateSource;                            //@synthesize monthlyChallengeTemplateSource=_monthlyChallengeTemplateSource - In the implementation block
@property (nonatomic,retain) ACHRemoteTemplateSource * remoteTemplateSource;                                                //@synthesize remoteTemplateSource=_remoteTemplateSource - In the implementation block
@property (nonatomic,retain) ACHTemplateSourceScheduler * templateSourceScheduler;                                          //@synthesize templateSourceScheduler=_templateSourceScheduler - In the implementation block
@property (nonatomic,retain) ACHBackCompatMonthlyChallengeListener * backCompatMonthlyChallengeListener;                    //@synthesize backCompatMonthlyChallengeListener=_backCompatMonthlyChallengeListener - In the implementation block
@property (nonatomic,retain) ACHRemoteTemplateAvailabilityKeyProvider * remoteTemplateAvailabilityKeyProvider;              //@synthesize remoteTemplateAvailabilityKeyProvider=_remoteTemplateAvailabilityKeyProvider - In the implementation block
@property (nonatomic,retain) ACHRemoteTemplateAvailabilityListener * remoteTemplateAvailabilityListener;                    //@synthesize remoteTemplateAvailabilityListener=_remoteTemplateAvailabilityListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDXPCListener *)listener;
-(void)setListener:(HDXPCListener *)arg1 ;
-(void)setUnitTesting:(BOOL)arg1 ;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(ACHDataStore *)dataStore;
-(BOOL)unitTesting;
-(BOOL)isWatch;
-(void)setDataStore:(ACHDataStore *)arg1 ;
-(void)setIsWatch:(BOOL)arg1 ;
-(ACHAchievementProgressEngine *)progressProvider;
-(void)setProgressProvider:(ACHAchievementProgressEngine *)arg1 ;
-(ACHEarnedInstanceStore *)earnedInstanceStore;
-(ACHTemplateStore *)templateStore;
-(void)daemonReady:(id)arg1 ;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)setTemplateStore:(ACHTemplateStore *)arg1 ;
-(void)setEarnedInstanceStore:(ACHEarnedInstanceStore *)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(ACHRemoteTemplateAvailabilityKeyProvider *)remoteTemplateAvailabilityKeyProvider;
-(void)setRemoteTemplateAvailabilityKeyProvider:(ACHRemoteTemplateAvailabilityKeyProvider *)arg1 ;
-(ACHMobileAssetProvider *)mobileAssetProvider;
-(void)setMobileAssetProvider:(ACHMobileAssetProvider *)arg1 ;
-(ACHRemoteTemplateAvailabilityListener *)remoteTemplateAvailabilityListener;
-(void)setRemoteTemplateAvailabilityListener:(ACHRemoteTemplateAvailabilityListener *)arg1 ;
-(ACHTemplateAssetRegistry *)templateAssetRegistry;
-(void)setTemplateAssetRegistry:(ACHTemplateAssetRegistry *)arg1 ;
-(ACHAchievementStore *)achievementStore;
-(id<ACHAwardingScheduler>)awardingScheduler;
-(ACHTemplateSourceScheduler *)templateSourceScheduler;
-(void)setAwardingScheduler:(id<ACHAwardingScheduler>)arg1 ;
-(void)setAchievementStore:(ACHAchievementStore *)arg1 ;
-(void)setTemplateSourceScheduler:(ACHTemplateSourceScheduler *)arg1 ;
-(void)registerTemplateSource:(id)arg1 awardingSource:(id)arg2 ;
-(void)deregisterTemplateSource:(id)arg1 awardingSource:(id)arg2 ;
-(void)requestImmediateUpdateForTemplateSource:(id)arg1 ;
-(void)requestIncrementalEvaluationForAwardingSource:(id)arg1 evaluationBlock:(/*^block*/id)arg2 ;
-(void)performBlockAfterInitialization:(/*^block*/id)arg1 ;
-(void)setActivitySummaryUtility:(ACHActivitySummaryUtility *)arg1 ;
-(ACHActivitySummaryUtility *)activitySummaryUtility;
-(void)_applicationsInstalled:(id)arg1 ;
-(void)_applicationsUninstalled:(id)arg1 ;
-(ACHEarnedInstanceAwardingEngine *)awardingEngine;
-(void)setAwardingEngine:(ACHEarnedInstanceAwardingEngine *)arg1 ;
-(ACHWorkoutUtility *)workoutUtility;
-(void)setWorkoutUtility:(ACHWorkoutUtility *)arg1 ;
-(id)listenerEndpointForClient:(id)arg1 error:(id*)arg2 ;
-(id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(void)_registerApplicationNotifications;
-(id)initWithProfile:(id)arg1 unitTesting:(BOOL)arg2 ;
-(void)_unleashTheKrakenUnderProperConditions;
-(void)_removeAllAchievementsIfNeeded;
-(void)_loadInitialMoveGoal;
-(void)_checkForMoveGoal;
-(void)setInitialMoveGoalFetchCompleted:(BOOL)arg1 ;
-(void)setInitialMoveGoalHasBeenSet:(BOOL)arg1 ;
-(BOOL)initialMoveGoalFetchCompleted;
-(BOOL)initialMoveGoalHasBeenSet;
-(void)setFitnessAppIsInstalled:(BOOL)arg1 ;
-(BOOL)fitnessAppIsInstalled;
-(void)_unleashTheKraken;
-(BOOL)krakenUnleashed;
-(void)_registerTemplateSource:(id)arg1 ;
-(void)_registerAwardingSource:(id)arg1 ;
-(void)endPhaseRegistration;
-(void)tryInitialAchievementLoadWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableSet *)templatesSourcesToRegister;
-(void)setTemplatesSourcesToRegister:(NSMutableSet *)arg1 ;
-(NSMutableSet *)awardingSourcesToRegister;
-(void)setAwardingSourcesToRegister:(NSMutableSet *)arg1 ;
-(void)setKrakenUnleashed:(BOOL)arg1 ;
-(void)_deregisterTemplateSource:(id)arg1 ;
-(void)_deregisterAwardingSource:(id)arg1 ;
-(NSSet *)blocksWaitingOnInitialization;
-(void)setBlocksWaitingOnInitialization:(NSSet *)arg1 ;
-(ACHEarnedInstanceEntityWrapper *)earnedInstanceEntityWrapper;
-(void)setEarnedInstanceEntityWrapper:(ACHEarnedInstanceEntityWrapper *)arg1 ;
-(ACHTemplateEntityWrapper *)templateEntityWrapper;
-(void)setTemplateEntityWrapper:(ACHTemplateEntityWrapper *)arg1 ;
-(ACHAWDSubmissionManager *)submissionManager;
-(void)setSubmissionManager:(ACHAWDSubmissionManager *)arg1 ;
-(ACHActivityAwardingSource *)activityAwardingSource;
-(void)setActivityAwardingSource:(ACHActivityAwardingSource *)arg1 ;
-(ACHWorkoutAwardingSource *)workoutAwardingSource;
-(void)setWorkoutAwardingSource:(ACHWorkoutAwardingSource *)arg1 ;
-(ACHMonthlyChallengeAwardingSource *)monthlyChallengeAwardingSource;
-(void)setMonthlyChallengeAwardingSource:(ACHMonthlyChallengeAwardingSource *)arg1 ;
-(ACHBuiltinTemplateSource *)builtInTemplateSource;
-(void)setBuiltInTemplateSource:(ACHBuiltinTemplateSource *)arg1 ;
-(ACHPerfectMonthTemplateSource *)perfectMonthTemplateSource;
-(void)setPerfectMonthTemplateSource:(ACHPerfectMonthTemplateSource *)arg1 ;
-(ACHMonthlyChallengeTemplateSource *)monthlyChallengeTemplateSource;
-(void)setMonthlyChallengeTemplateSource:(ACHMonthlyChallengeTemplateSource *)arg1 ;
-(ACHRemoteTemplateSource *)remoteTemplateSource;
-(void)setRemoteTemplateSource:(ACHRemoteTemplateSource *)arg1 ;
-(ACHBackCompatMonthlyChallengeListener *)backCompatMonthlyChallengeListener;
-(void)setBackCompatMonthlyChallengeListener:(ACHBackCompatMonthlyChallengeListener *)arg1 ;
@end

