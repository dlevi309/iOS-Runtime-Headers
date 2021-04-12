/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIClickInteractionDriving.h>

@protocol _UIClickInteractionDriverDelegate;
@class UIView, _UISecondaryClickDriverGestureRecognizer, NSString, UIGestureRecognizer;

@interface _UISecondaryClickClickInteractionDriver : NSObject <UIGestureRecognizerDelegate, _UIClickInteractionDriving> {

	unsigned long long _currentState;
	BOOL _cancelsTouchesInView;
	BOOL _clicksUpAutomaticallyAfterTimeout;
	id<_UIClickInteractionDriverDelegate> _delegate;
	UIView* _view;
	double _allowableMovement;
	_UISecondaryClickDriverGestureRecognizer* _gestureRecognizer;

}

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
-(BOOL)cancelsTouchesInView;
-(BOOL)isCurrentlyAcceleratedByForce;
-(void)setCancelsTouchesInView:(BOOL)arg1 ;
-(UIGestureRecognizer *)primaryGestureRecognizer;
-(BOOL)clicksUpAutomaticallyAfterTimeout;
-(void)setAllowableMovement:(double)arg1 ;
-(void)_handleGestureRecognizer:(id)arg1 ;
-(_UISecondaryClickDriverGestureRecognizer *)gestureRecognizer;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(id)init;
-(id<_UIClickInteractionDriverDelegate>)delegate;
-(double)touchDuration;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(double)allowableMovement;
-(unsigned long long)inputPrecision;
-(void)setView:(UIView *)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)setDelegate:(id<_UIClickInteractionDriverDelegate>)arg1 ;
-(UIView *)view;
-(void)cancelInteraction;
-(double)maximumEffectProgress;
-(void)setGestureRecognizer:(_UISecondaryClickDriverGestureRecognizer *)arg1 ;
-(BOOL)hasExceededAllowableMovement;
-(void)_attemptSecondaryClick;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
@end

