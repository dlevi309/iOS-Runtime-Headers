/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UITabBarControllerInterruptibleTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class UISpringTimingParameters, UIView, NSString;

@interface _UITabBarTVTransitioner : NSObject <_UITabBarControllerInterruptibleTransitioning> {

	BOOL _fromViewOriginalShouldRasterize;
	double _fromViewLayerOriginalRasterizationScale;
	BOOL _toViewOriginalShouldRasterize;
	double _toViewLayerOriginalRasterizationScale;
	BOOL _transitionFromRight;
	long long _transitionStyle;
	id<UIViewControllerContextTransitioning> _transitionContext;
	UISpringTimingParameters* _slideTimingParameters;
	UIView* _toViewXFlippedScreenShot;

}

@property (nonatomic,retain) UISpringTimingParameters * slideTimingParameters;                        //@synthesize slideTimingParameters=_slideTimingParameters - In the implementation block
@property (nonatomic,retain) UIView * toViewXFlippedScreenShot;                                       //@synthesize toViewXFlippedScreenShot=_toViewXFlippedScreenShot - In the implementation block
@property (assign,nonatomic) long long transitionStyle;                                               //@synthesize transitionStyle=_transitionStyle - In the implementation block
@property (assign,nonatomic) BOOL transitionFromRight;                                                //@synthesize transitionFromRight=_transitionFromRight - In the implementation block
@property (nonatomic,retain) id<UIViewControllerContextTransitioning> transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(void)setTransitionFromRight:(BOOL)arg1 ;
-(void)setTransitionStyle:(long long)arg1 ;
-(void)interruptTabBarControllerTransition;
-(void)finishTransition;
-(UIView *)toViewXFlippedScreenShot;
-(void)setToViewXFlippedScreenShot:(UIView *)arg1 ;
-(UISpringTimingParameters *)slideTimingParameters;
-(BOOL)transitionFromRight;
-(long long)transitionStyle;
-(void)setSlideTimingParameters:(UISpringTimingParameters *)arg1 ;
@end

