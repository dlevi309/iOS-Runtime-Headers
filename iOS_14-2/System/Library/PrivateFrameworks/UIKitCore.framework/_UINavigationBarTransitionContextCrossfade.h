/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UINavigationBarTransitionContext.h>

@class UIView;

@interface _UINavigationBarTransitionContextCrossfade : _UINavigationBarTransitionContext {

	UIView* _fromCanvasView;
	UIView* _toCanvasView;

}
-(void)_animateContentView;
-(void)_animateSearchBar;
-(void)_prepareLargeTitleView;
-(double)contentViewMaxY;
-(void)_animateLargeTitleView;
-(void)_animateCanvasViews;
-(void)_prepareCanvasViews;
-(void)complete;
-(void)_prepareSearchBar;
-(void)_prepareContentView;
-(void)animate;
-(void)_finishWithFinalLayout:(id)arg1 invalidLayout:(id)arg2 ;
-(void)cancel;
-(void)prepare;
-(int)transition;
@end

