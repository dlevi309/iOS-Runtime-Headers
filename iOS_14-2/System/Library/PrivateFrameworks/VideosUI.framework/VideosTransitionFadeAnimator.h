/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSString;

@interface VideosTransitionFadeAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	long long _transitionType;
	double _animationDuration;

}

@property (assign,nonatomic) long long transitionType;              //@synthesize transitionType=_transitionType - In the implementation block
@property (assign,nonatomic) double animationDuration;              //@synthesize animationDuration=_animationDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 ;
-(long long)transitionType;
-(double)animationDuration;
-(void)setTransitionType:(long long)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(id)initWithTransitionType:(long long)arg1 andDuration:(double)arg2 ;
@end

