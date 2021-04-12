/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(BOOL)_inheritsPresentingViewControllerThemeLevel;
-(long long)presentationStyle;
-(void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3 ;
-(void)_placeCounterRotationViewWithView:(id)arg1 inWindow:(id)arg2 fromOrientation:(long long)arg3 toOrientation:(long long)arg4 force:(BOOL)arg5 ;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(BOOL)shouldPresentInFullscreen;
-(void)_removeCounterRotation;
-(BOOL)_invokesDelegatesOnOrientationChange;
-(void)_setPresentedViewController:(id)arg1 ;
-(void)dealloc;
@end

