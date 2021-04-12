/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@protocol UIViewImplicitlyAnimating, UITimingCurveProvider;
@class NSUUID, NSString;

@interface UIPercentDrivenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning> {

	double _duration;
	BOOL _didCommitAnimations;
	id<UIViewImplicitlyAnimating> _interruptibleAnimator;
	NSUUID* _animationTrackingAnimatorUUID;
	BOOL _wantsInteractiveStart;
	BOOL __transitionInterrupted;
	double _completionSpeed;
	long long _completionCurve;
	id<UITimingCurveProvider> _timingCurve;
	NSString* __originalFillMode;
	NSUUID* __uuid;

}

@property (setter=_setOriginalFillMode:,nonatomic,retain) NSString * _originalFillMode;                                                  //@synthesize _originalFillMode=__originalFillMode - In the implementation block
@property (setter=_setUuid:,nonatomic,retain) NSUUID * _uuid;                                                                            //@synthesize _uuid=__uuid - In the implementation block
@property (assign,setter=_setTransitionInterrupted:,getter=_isTransitionInterrupted,nonatomic) BOOL _transitionInterrupted;              //@synthesize _transitionInterrupted=__transitionInterrupted - In the implementation block
@property (readonly) double duration; 
@property (readonly) double percentComplete; 
@property (assign,nonatomic) double completionSpeed;                                                                                     //@synthesize completionSpeed=_completionSpeed - In the implementation block
@property (assign,nonatomic) long long completionCurve;                                                                                  //@synthesize completionCurve=_completionCurve - In the implementation block
@property (nonatomic,retain) id<UITimingCurveProvider> timingCurve;                                                                      //@synthesize timingCurve=_timingCurve - In the implementation block
@property (assign,nonatomic) BOOL wantsInteractiveStart;                                                                                 //@synthesize wantsInteractiveStart=_wantsInteractiveStart - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_startInterruptibleTransition:(id)arg1 ;
-(void)_continueInterruptibleTransition:(id)arg1 reverse:(BOOL)arg2 ;
-(id)init;
-(void)cancelInteractiveTransition;
-(id<UITimingCurveProvider>)timingCurve;
-(long long)completionCurve;
-(void)_setTransitionInterrupted:(BOOL)arg1 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)_stopInteractiveTransition;
-(BOOL)_isTransitionInterrupted;
-(void)updateInteractiveTransition:(double)arg1 ;
-(void)setCompletionCurve:(long long)arg1 ;
-(double)percentComplete;
-(void)finishInteractiveTransition;
-(void)_setDuration:(double)arg1 ;
-(void)setWantsInteractiveStart:(BOOL)arg1 ;
-(BOOL)wantsInteractiveStart;
-(void)_setUuid:(id)arg1 ;
-(NSString *)_originalFillMode;
-(void)setCompletionSpeed:(double)arg1 ;
-(void)_updateInteractiveTransition:(id)arg1 percent:(double)arg2 isFinished:(BOOL)arg3 didComplete:(BOOL)arg4 ;
-(void)setTimingCurve:(id<UITimingCurveProvider>)arg1 ;
-(void)_resetInteractionController;
-(void)startInteractiveTransition:(id)arg1 containerViews:(id)arg2 animation:(/*^block*/id)arg3 ;
-(double)completionSpeed;
-(double)duration;
-(void)_setOriginalFillMode:(id)arg1 ;
-(NSUUID *)_uuid;
-(void)_stopInteractiveTransition:(id)arg1 ;
-(void)pauseInteractiveTransition;
-(BOOL)_useAnimatorTrackingToDriveTransition;
@end

