/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(double)_animationSpeedForBacklightChangeSource:(long long)arg1 isWake:(BOOL)arg2 ;
+(double)backlightFadeDurationForSource:(long long)arg1 isWake:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isWakeAnimationInProgress;
-(void)prepareToWakeForSource:(long long)arg1 timeAlpha:(double)arg2 statusBarAlpha:(double)arg3 target:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)isSleepAnimationInProgress;
-(void)sleepForSource:(long long)arg1 target:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cleanupAnimationWhenInterruptingWaking:(BOOL)arg1 ;
-(BOOL)interruptSleepAnimationIfNeeded;
-(void)_runCompletionHandlerForWake:(BOOL)arg1 ;
-(void)_setInteractionEventsIgnored:(BOOL)arg1 ;
-(void)_setLastBacklightChangeSource:(long long)arg1 ;
-(void)_setRelevantLockScreenViewsHidden:(BOOL)arg1 ;
-(void)_startWakeIfNecessary;
-(id)_animationSettingsForBacklightChangeSource:(long long)arg1 isWake:(BOOL)arg2 ;
-(void)_startWakeAnimationsForWaking:(BOOL)arg1 animationSettings:(id)arg2 ;
-(void)_handleAnimationCompletionIfNecessaryForWaking:(BOOL)arg1 ;
-(void)sleepForSource:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isWakeAnimationInProgressForSource:(long long)arg1 ;
-(void)setScreenWakeTemporarilyDisabled:(BOOL)arg1 forReason:(id)arg2 ;
@end

