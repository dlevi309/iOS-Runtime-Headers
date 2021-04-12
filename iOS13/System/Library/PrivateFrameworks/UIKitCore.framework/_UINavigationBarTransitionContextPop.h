/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UINavigationBarTransitionContext.h>

@interface _UINavigationBarTransitionContextPop : _UINavigationBarTransitionContext {

	CGRect _endingNewTitleViewFrame;
	CGRect _endingNewBackButtonFrame;
	CGSize _titleTransitionDistance;
	double _titleTransitionAdjustment;

}
-(void)cancel;
-(void)complete;
-(void)animate;
-(void)_prepareContentView;
-(void)prepare;
-(int)transition;
-(void)_animateBackgroundView;
-(id)viewUsingEaseInCurve;
-(void)_prepareScaleTransition;
-(void)_prepareLargeTitleView;
-(void)_prepareBackgroundView;
-(void)_prepareSearchBar;
-(void)_animateContentView;
-(void)_animateScaleTransition;
-(void)_animateLargeTitleView;
-(void)_animateSearchBar;
-(void)_finishWithFinalLayout:(id)arg1 invalidLayout:(id)arg2 ;
@end

