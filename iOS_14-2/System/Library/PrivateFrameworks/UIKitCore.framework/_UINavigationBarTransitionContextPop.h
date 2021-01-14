/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)viewUsingEaseInCurve;
-(void)_prepareScaleTransition;
-(void)_animateContentView;
-(void)_animateSearchBar;
-(void)_prepareLargeTitleView;
-(void)_animateLargeTitleView;
-(void)_animateScaleTransition;
-(void)complete;
-(void)_prepareSearchBar;
-(void)_prepareContentView;
-(void)animate;
-(void)_finishWithFinalLayout:(id)arg1 invalidLayout:(id)arg2 ;
-(void)_prepareBackgroundView;
-(void)_animateBackgroundView;
-(void)cancel;
-(void)prepare;
-(int)transition;
@end

