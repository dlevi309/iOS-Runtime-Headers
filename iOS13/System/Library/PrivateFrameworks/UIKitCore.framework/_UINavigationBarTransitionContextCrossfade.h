/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UINavigationBarTransitionContext.h>

@class UIView;

@interface _UINavigationBarTransitionContextCrossfade : _UINavigationBarTransitionContext {

	UIView* _fromCanvasView;
	UIView* _toCanvasView;

}
-(void)cancel;
-(void)complete;
-(void)animate;
-(void)_prepareContentView;
-(void)prepare;
-(int)transition;
-(double)contentViewMaxY;
-(void)_prepareLargeTitleView;
-(void)_prepareSearchBar;
-(void)_animateContentView;
-(void)_animateLargeTitleView;
-(void)_animateSearchBar;
-(void)_finishWithFinalLayout:(id)arg1 invalidLayout:(id)arg2 ;
-(void)_prepareCanvasViews;
-(void)_animateCanvasViews;
@end

