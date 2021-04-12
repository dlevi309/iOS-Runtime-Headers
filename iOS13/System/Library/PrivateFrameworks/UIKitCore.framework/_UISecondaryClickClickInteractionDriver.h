/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIClickInteractionDriving.h>

@protocol _UIClickInteractionDriverDelegate;
@class UIView, _UIStateMachine, _UISecondaryClickDriverGestureRecognizer, NSString, UIGestureRecognizer;

@interface _UISecondaryClickClickInteractionDriver : NSObject <UIGestureRecognizerDelegate, _UIClickInteractionDriving> {

	BOOL _cancelsTouchesInView;
	BOOL _clicksUpAutomaticallyAfterTimeout;
	id<_UIClickInteractionDriverDelegate> _delegate;
	UIView* _view;
	double _allowableMovement;
	_UIStateMachine* _stateMachine;
	_UISecondaryClickDriverGestureRecognizer* _gestureRecognizer;

}

@property (nonatomic,retain) _UIStateMachine * stateMachine;                                            //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) _UISecondaryClickDriverGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<_UIClickInteractionDriverDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * view;                                                      //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) double allowableMovement;                                                  //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (assign,nonatomic) BOOL cancelsTouchesInView;                                                 //@synthesize cancelsTouchesInView=_cancelsTouchesInView - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * primaryGestureRecognizer; 
@property (nonatomic,readonly) double touchDuration; 
@property (nonatomic,readonly) BOOL hasExceededAllowableMovement; 
@property (nonatomic,readonly) BOOL isCurrentlyAcceleratedByForce; 
@property (nonatomic,readonly) BOOL clicksUpAutomaticallyAfterTimeout;                                  //@synthesize clicksUpAutomaticallyAfterTimeout=_clicksUpAutomaticallyAfterTimeout - In the implementation block
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
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)setAllowableMovement:(double)arg1 ;
-(UIGestureRecognizer *)primaryGestureRecognizer;
-(void)_handleGestureRecognizer:(id)arg1 ;
-(void)setGestureRecognizer:(_UISecondaryClickDriverGestureRecognizer *)arg1 ;
-(_UISecondaryClickDriverGestureRecognizer *)gestureRecognizer;
-(double)allowableMovement;
-(BOOL)cancelsTouchesInView;
-(_UIStateMachine *)stateMachine;
-(void)setStateMachine:(_UIStateMachine *)arg1 ;
-(double)touchDuration;
-(BOOL)hasExceededAllowableMovement;
-(void)_prepareStateMachine;
-(void)cancelInteraction;
-(BOOL)clicksUpAutomaticallyAfterTimeout;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(BOOL)isCurrentlyAcceleratedByForce;
-(double)maximumEffectProgress;
-(unsigned long long)inputPrecision;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)_attemptSecondaryClick;
@end

