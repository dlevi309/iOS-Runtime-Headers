/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animateTransition:(id)arg1 ;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(id)init;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(UISpringTimingParameters *)slideTimingParameters;
-(void)setTransitionFromRight:(BOOL)arg1 ;
-(void)interruptTabBarControllerTransition;
-(void)finishTransition;
-(BOOL)transitionFromRight;
-(UIView *)toViewXFlippedScreenShot;
-(void)setToViewXFlippedScreenShot:(UIView *)arg1 ;
-(void)setSlideTimingParameters:(UISpringTimingParameters *)arg1 ;
-(long long)transitionStyle;
-(void)setTransitionStyle:(long long)arg1 ;
@end

