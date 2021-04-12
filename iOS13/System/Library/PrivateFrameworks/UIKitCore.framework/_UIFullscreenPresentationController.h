/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICurrentContextPresentationController.h>

@class UIView;

@interface _UIFullscreenPresentationController : _UICurrentContextPresentationController {

	UIView* _counterRotatedView;
	double _counterRotatedAngle;
	CGRect _counterRotatedOriginalBounds;
	long long _originalOrientation;
	BOOL _presentingViewControllerHandledCounterRotation;
	/*^block*/id finalRotationBlock;

}
-(void)dealloc;
-(long long)presentationStyle;
-(BOOL)shouldPresentInFullscreen;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(CGRect)frameOfPresentedViewInContainerView;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)_setPresentedViewController:(id)arg1 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3 ;
-(BOOL)_inheritsPresentingViewControllerThemeLevel;
-(void)_removeCounterRotation;
-(BOOL)_invokesDelegatesOnOrientationChange;
-(void)_placeCounterRotationViewWithView:(id)arg1 inWindow:(id)arg2 fromOrientation:(long long)arg3 toOrientation:(long long)arg4 force:(BOOL)arg5 ;
@end

