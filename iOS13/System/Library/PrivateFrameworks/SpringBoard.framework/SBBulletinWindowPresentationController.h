/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIPresentationController.h>

@class UIView;

@interface SBBulletinWindowPresentationController : UIPresentationController {

	UIView* _counterRotatedView;
	double _counterRotatedAngle;
	CGRect _counterRotatedOriginalBounds;

}

@property (setter=_setCounterRotatedView:,getter=_counterRotatedView,nonatomic,retain) UIView * counterRotatedView;                                          //@synthesize counterRotatedView=_counterRotatedView - In the implementation block
@property (assign,setter=_setCounterRotatedAngle:,getter=_counterRotatedAngle,nonatomic) double counterRotatedAngle;                                         //@synthesize counterRotatedAngle=_counterRotatedAngle - In the implementation block
@property (assign,setter=_setCounterRotatedOriginalBounds:,getter=_counterRotatedOriginalBounds,nonatomic) CGRect counterRotatedOriginalBounds;              //@synthesize counterRotatedOriginalBounds=_counterRotatedOriginalBounds - In the implementation block
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(BOOL)shouldPresentInFullscreen;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(BOOL)shouldRemovePresentersView;
-(void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3 ;
-(id)_counterRotatedView;
-(double)_counterRotatedAngle;
-(CGRect)_counterRotatedOriginalBounds;
-(void)_removeCounterRotationIfNecessary;
-(void)_setCounterRotatedView:(id)arg1 ;
-(void)_setCounterRotatedAngle:(double)arg1 ;
-(void)_setCounterRotatedOriginalBounds:(CGRect)arg1 ;
@end

