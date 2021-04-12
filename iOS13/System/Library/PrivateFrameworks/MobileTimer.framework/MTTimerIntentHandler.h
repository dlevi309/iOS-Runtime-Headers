/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol MTTimerManagerProviding, MTTimerManagerIntentSupport;
@interface MTTimerIntentHandler : NSObject {

	id<MTTimerManagerProviding> _timerManagerProvider;
	id<MTTimerManagerIntentSupport> _timerManager;

}

@property (nonatomic,retain) id<MTTimerManagerIntentSupport> timerManager;                         //@synthesize timerManager=_timerManager - In the implementation block
@property (assign,nonatomic,__weak) id<MTTimerManagerProviding> timerManagerProvider;              //@synthesize timerManagerProvider=_timerManagerProvider - In the implementation block
-(id)_timerManager;
-(void)_genericallyResolveTargetTimer:(id)arg1 multiple:(BOOL)arg2 allowedTimerStatesForFollowup:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_matchTimersFromIntentsTimer:(id)arg1 excludeStoppedTimers:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_onlyUnnamedTimerInTimers:(id)arg1 forTargetTimer:(id)arg2 allowMultiple:(BOOL)arg3 ;
-(id<MTTimerManagerIntentSupport>)timerManager;
-(id)_alternateTimersForTargetTimerState:(long long)arg1 type:(long long)arg2 inTimers:(id)arg3 allowedTimerStates:(id)arg4 ;
-(id<MTTimerManagerProviding>)timerManagerProvider;
-(BOOL)_isDefaultTimer:(id)arg1 ;
-(void)setTimerManagerProvider:(id<MTTimerManagerProviding>)arg1 ;
-(void)setTimerManager:(id<MTTimerManagerIntentSupport>)arg1 ;
@end

