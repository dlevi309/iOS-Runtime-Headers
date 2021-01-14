/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>
#import <UIKitCore/_UIClickInteractionDriving.h>

@protocol _UIClickInteractionDriverDelegate;
@class UIView, UIGestureRecognizer, _UITouchDurationObservingGestureRecognizer, NSString;

@interface _UILongPressClickInteractionDriver : NSObject <UIGestureRecognizerDelegatePrivate, _UIClickInteractionDriving> {

	unsigned long long _currentState;
	SCD_Struct_UI40 _delegateImplements;
	unsigned long long _behavior;
	BOOL _cancelsTouchesInView;
	BOOL _reachedClickDownThreshold;
	id<_UIClickInteractionDriverDelegate> _delegate;
	UIView* _view;
	_UITouchDurationObservingGestureRecognizer* _gestureRecognizer;
	double _clickDownDuration;
	double _forceMultiplier;

}

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
-(void)_asyncGestureBegan;
-(BOOL)cancelsTouchesInView;
-(void)setClickDownDuration:(double)arg1 ;
-(BOOL)isCurrentlyAcceleratedByForce;
-(double)forceMultiplier;
-(void)setCancelsTouchesInView:(BOOL)arg1 ;
-(UIGestureRecognizer *)primaryGestureRecognizer;
-(BOOL)reachedClickDownThreshold;
-(double)clickTimeoutDuration;
-(double)clickDownDuration;
-(BOOL)clicksUpAutomaticallyAfterTimeout;
-(void)setAllowableMovement:(double)arg1 ;
-(void)_handleGestureRecognizer:(id)arg1 ;
-(_UITouchDurationObservingGestureRecognizer *)gestureRecognizer;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)setBehavior:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id<_UIClickInteractionDriverDelegate>)delegate;
-(unsigned long long)behavior;
-(double)touchDuration;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(double)allowableMovement;
-(unsigned long long)inputPrecision;
-(void)setView:(UIView *)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)setForceMultiplier:(double)arg1 ;
-(void)setDelegate:(id<_UIClickInteractionDriverDelegate>)arg1 ;
-(void)_updateForActiveGestureRecognizer;
-(UIView *)view;
-(void)cancelInteraction;
-(void)_notifyDelegateOfUpdatedClickDownProgress:(double)arg1 forceAdjustedClickDownDuration:(double)arg2 ;
-(double)maximumEffectProgress;
-(void)setGestureRecognizer:(_UITouchDurationObservingGestureRecognizer *)arg1 ;
-(BOOL)hasExceededAllowableMovement;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setReachedClickDownThreshold:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
@end

