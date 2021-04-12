/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>
#import <UIKitCore/_UIClickInteractionDriving.h>

@protocol _UIClickInteractionDriverDelegate;
@class UIView, UIGestureRecognizer, _UIStateMachine, _UITouchDurationObservingGestureRecognizer, NSString;

@interface _UILongPressClickInteractionDriver : NSObject <UIGestureRecognizerDelegatePrivate, _UIClickInteractionDriving> {

	SCD_Struct_UI46 _delegateImplements;
	unsigned long long _behavior;
	BOOL _cancelsTouchesInView;
	BOOL _reachedClickDownThreshold;
	id<_UIClickInteractionDriverDelegate> _delegate;
	UIView* _view;
	_UIStateMachine* _stateMachine;
	_UITouchDurationObservingGestureRecognizer* _gestureRecognizer;
	double _clickDownDuration;
	double _forceMultiplier;

}

@property (nonatomic,retain) _UIStateMachine * stateMachine;                                              //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) _UITouchDurationObservingGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) double clickDownDuration;                                                    //@synthesize clickDownDuration=_clickDownDuration - In the implementation block
@property (assign,nonatomic) double forceMultiplier;                                                      //@synthesize forceMultiplier=_forceMultiplier - In the implementation block
@property (assign,nonatomic) BOOL reachedClickDownThreshold;                                              //@synthesize reachedClickDownThreshold=_reachedClickDownThreshold - In the implementation block
@property (nonatomic,readonly) double clickTimeoutDuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<_UIClickInteractionDriverDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * view;                                                        //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) double allowableMovement; 
@property (assign,nonatomic) BOOL cancelsTouchesInView;                                                   //@synthesize cancelsTouchesInView=_cancelsTouchesInView - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * primaryGestureRecognizer; 
@property (nonatomic,readonly) double touchDuration; 
@property (nonatomic,readonly) BOOL hasExceededAllowableMovement; 
@property (nonatomic,readonly) BOOL isCurrentlyAcceleratedByForce; 
@property (nonatomic,readonly) BOOL clicksUpAutomaticallyAfterTimeout; 
@property (nonatomic,readonly) double maximumEffectProgress; 
@property (nonatomic,readonly) unsigned long long inputPrecision; 
@property (assign,nonatomic) unsigned long long behavior; 
+(BOOL)requiresForceCapability;
+(BOOL)prefersCancelsTouchesInView;
-(id)init;
-(id<_UIClickInteractionDriverDelegate>)delegate;
-(void)setDelegate:(id<_UIClickInteractionDriverDelegate>)arg1 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)setCancelsTouchesInView:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setAllowableMovement:(double)arg1 ;
-(UIGestureRecognizer *)primaryGestureRecognizer;
-(double)clickDownDuration;
-(void)_handleGestureRecognizer:(id)arg1 ;
-(void)setGestureRecognizer:(_UITouchDurationObservingGestureRecognizer *)arg1 ;
-(_UITouchDurationObservingGestureRecognizer *)gestureRecognizer;
-(double)allowableMovement;
-(BOOL)cancelsTouchesInView;
-(BOOL)reachedClickDownThreshold;
-(_UIStateMachine *)stateMachine;
-(void)setStateMachine:(_UIStateMachine *)arg1 ;
-(double)clickTimeoutDuration;
-(double)touchDuration;
-(BOOL)hasExceededAllowableMovement;
-(void)_prepareStateMachine;
-(void)_asyncGestureBegan;
-(void)cancelInteraction;
-(void)_updateForActiveGestureRecognizer;
-(void)setReachedClickDownThreshold:(BOOL)arg1 ;
-(void)setForceMultiplier:(double)arg1 ;
-(double)forceMultiplier;
-(void)_notifyDelegateOfUpdatedClickDownProgress:(double)arg1 forceAdjustedClickDownDuration:(double)arg2 ;
-(BOOL)clicksUpAutomaticallyAfterTimeout;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(BOOL)isCurrentlyAcceleratedByForce;
-(double)maximumEffectProgress;
-(unsigned long long)inputPrecision;
-(unsigned long long)behavior;
-(void)setBehavior:(unsigned long long)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)setClickDownDuration:(double)arg1 ;
@end

