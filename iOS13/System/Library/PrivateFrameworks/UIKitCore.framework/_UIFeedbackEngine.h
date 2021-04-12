/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableDictionary, NSTimer, NSMapTable, NSString;

@interface _UIFeedbackEngine : NSObject {

	NSMutableDictionary* _completionBlocks;
	NSTimer* _suspensionTimer;
	BOOL _suspended;
	BOOL _enabled;
	long long _prewarmCount;
	long long _state;
	unsigned long long _numberOfClients;
	NSMapTable* _playerDequeueBlocks;
	unsigned long long _backgroundTaskIdentifier;
	long long _suspensionState;

}

@property (assign,nonatomic) long long prewarmCount;                                                                                                         //@synthesize prewarmCount=_prewarmCount - In the implementation block
@property (assign,setter=_setEnabled:,getter=isEnabled,nonatomic) BOOL enabled;                                                                              //@synthesize enabled=_enabled - In the implementation block
@property (assign,setter=_setState:,getter=_state,nonatomic) long long state;                                                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfClients;                                                                                           //@synthesize numberOfClients=_numberOfClients - In the implementation block
@property (setter=_setPlayerDequeueBlocks:,getter=_playerDequeueBlocks,nonatomic,retain) NSMapTable * playerDequeueBlocks;                                   //@synthesize playerDequeueBlocks=_playerDequeueBlocks - In the implementation block
@property (assign,setter=_setBackgroundTaskIdentifier:,getter=_backgroundTaskIdentifier,nonatomic) unsigned long long backgroundTaskIdentifier;              //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
@property (getter=_suspensionState,nonatomic,readonly) long long suspensionState;                                                                            //@synthesize suspensionState=_suspensionState - In the implementation block
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) NSString * _stats_key; 
+(id)_internalQueue;
+(id)engineForFeedback:(id)arg1 ;
+(BOOL)_supportsPlayingFeedbackPatternsDirectly;
+(id)sharedEngine;
+(BOOL)_supportsPlayingIndividualFeedback:(id)arg1 ;
+(BOOL)_supportsAbortingDeactivation;
+(BOOL)_supportsPlayingFeedback:(id)arg1 ;
-(id)init;
-(id)description;
-(long long)_state;
-(BOOL)isEnabled;
-(void)_setEnabled:(BOOL)arg1 ;
-(void)_setState:(long long)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_prewarm:(BOOL)arg1 andPerformWhenPrewarmed:(/*^block*/id)arg2 ;
-(void)_activate:(BOOL)arg1 andPerformWhenRunning:(/*^block*/id)arg2 ;
-(void)_startWarmingFeedbacks:(id)arg1 ;
-(void)_stopWarmingFeedbacks:(id)arg1 ;
-(void)_cooldown;
-(void)_deactivate;
-(double)currentTime;
-(NSString *)_stats_key;
-(id)_statsSuffix;
-(id)_activationCountStatistics;
-(id)_activationDurationStatistics;
-(id)_prewarmCountStatistics;
-(id)_prewarmDurationStatistics;
-(id)_outOfChannelsCountStatistics;
-(void)_stats_stateDidChangeFrom:(long long)arg1 to:(long long)arg2 ;
-(void)_stats_outOfChannels;
-(void)_playFeedback:(id)arg1 atTime:(double)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_dequeueReusableFeedbackPlayerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_internal_teardownBackgroundTask;
-(void)_internal_performAtState:(long long)arg1 block:(/*^block*/id)arg2 ;
-(void)_internal_prewarmUnderlyingPlayerWithCompletion:(/*^block*/id)arg1 ;
-(void)_internal_cooldownUnderlyingPlayerIfPossibleWithCompletion:(/*^block*/id)arg1 ;
-(void)_internal_activateUnderlyingPlayerWithCompletion:(/*^block*/id)arg1 ;
-(void)_internal_teardownUnderlyingPlayerIfPossibleWithCompletion:(/*^block*/id)arg1 ;
-(void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_internal_willPlayFeedback:(id)arg1 atTime:(double)arg2 ;
-(void)_internal_willCancelFeedback:(id)arg1 ;
-(void)_hostDidEnterBackground:(id)arg1 ;
-(void)_hostWillEnterForeground:(id)arg1 ;
-(void)_removeViewControllerWillDisconnect:(id)arg1 ;
-(void)_applicationWillSuspend:(id)arg1 ;
-(void)_applicationDidResume:(id)arg1 ;
-(unsigned long long)numberOfClients;
-(long long)prewarmCount;
-(BOOL)_internal_isSuspended;
-(void)_internal_setSuspended:(BOOL)arg1 ;
-(void)_internal_updateSuspension;
-(void)_internal_deactivateEngineIfPossible;
-(void)_internal_cooldownEngineIfPossible;
-(void)_internal_setupBackgroundTask;
-(void)_internal_prewarmEngine;
-(void)_internal_activateEngine;
-(void)_internal_activate:(BOOL)arg1 andPerformWhenRunning:(/*^block*/id)arg2 ;
-(void)_internal_serviceBlocksForState:(long long)arg1 withSuccess:(BOOL)arg2 ;
-(void)_internal_deactivate;
-(void)_internal_startWarmingFeedbacks:(id)arg1 ;
-(void)_internal_stopWarmingFeedbacks:(id)arg1 ;
-(void)_internal_prewarm:(BOOL)arg1 andPerformWhenPrewarmed:(/*^block*/id)arg2 ;
-(void)_internal_cooldown;
-(void)_internal_playFeedbackData:(id)arg1 atTime:(double)arg2 feedback:(id)arg3 effectiveFeedbackType:(unsigned long long)arg4 existingPlayer:(id)arg5 withCompletionBlock:(/*^block*/id)arg6 ;
-(void)_suspendEngineNow;
-(void)_setSuspended:(BOOL)arg1 ;
-(unsigned long long)_backgroundTaskIdentifier;
-(void)_setBackgroundTaskIdentifier:(unsigned long long)arg1 ;
-(void)runWhenReady:(/*^block*/id)arg1 ;
-(void)setPrewarmCount:(long long)arg1 ;
-(id)_playerDequeueBlocks;
-(void)_setPlayerDequeueBlocks:(id)arg1 ;
-(long long)_suspensionState;
@end

