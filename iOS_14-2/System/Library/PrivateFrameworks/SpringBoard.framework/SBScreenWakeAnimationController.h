/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBFScreenWakeAnimationControlling.h>

@protocol SBFScreenWakeAnimationTarget;
@class SBFLockScreenDateView, SBAppStatusBarSettingsAssertion, NSMutableSet, NSString;

@interface SBScreenWakeAnimationController : NSObject <SBFScreenWakeAnimationControlling> {

	double _originalDateLeftEdge;
	double _originalDateBottomEdge;
	double _finalTimeAlpha;
	double _finalStatusBarAlpha;
	id<SBFScreenWakeAnimationTarget> _target;
	SBFLockScreenDateView* _realDateView;
	BOOL _preparingToAnimateWake;
	BOOL _animatingForWake;
	BOOL _animatingForSleep;
	BOOL _insideWakeCompletionBlock;
	BOOL _insideSleepCompletionBlock;
	int _animationToken;
	/*^block*/id _wakeCompletionBlock;
	/*^block*/id _sleepCompletionBlock;
	BOOL _animatingWallpaper;
	BOOL _animatingContent;
	BOOL _animatingBacklight;
	BOOL _ignoringInteractionEvents;
	BOOL _waitingForScreenUnblank;
	long long _lastBacklightChangeSource;
	SBAppStatusBarSettingsAssertion* _statusBarAssertion;
	NSMutableSet* _temporaryDisabledReasons;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(double)backlightFadeDurationForSource:(long long)arg1 isWake:(BOOL)arg2 ;
+(double)_animationSpeedForBacklightChangeSource:(long long)arg1 isWake:(BOOL)arg2 ;
-(id)succinctDescription;
-(id)init;
-(void)_startWakeIfNecessary;
-(void)_setInteractionEventsIgnored:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)prepareToWakeForSource:(long long)arg1 timeAlpha:(double)arg2 statusBarAlpha:(double)arg3 target:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_setRelevantLockScreenViewsHidden:(BOOL)arg1 ;
-(BOOL)isSleepAnimationInProgress;
-(void)_handleAnimationCompletionIfNecessaryForWaking:(BOOL)arg1 ;
-(BOOL)isWakeAnimationInProgress;
-(void)_startWakeAnimationsForWaking:(BOOL)arg1 animationSettings:(id)arg2 ;
-(void)_setLastBacklightChangeSource:(long long)arg1 ;
-(NSString *)description;
-(BOOL)isWakeAnimationInProgressForSource:(long long)arg1 ;
-(void)sleepForSource:(long long)arg1 target:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_animationSettingsForBacklightChangeSource:(long long)arg1 isWake:(BOOL)arg2 ;
-(void)_runCompletionHandlerForWake:(BOOL)arg1 reason:(id)arg2 ;
-(void)sleepForSource:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startWakeFromUnblankNotification;
-(void)setScreenWakeTemporarilyDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(BOOL)interruptSleepAnimationIfNeeded;
-(void)_cleanupAnimationWhenInterruptingWaking:(BOOL)arg1 ;
@end

