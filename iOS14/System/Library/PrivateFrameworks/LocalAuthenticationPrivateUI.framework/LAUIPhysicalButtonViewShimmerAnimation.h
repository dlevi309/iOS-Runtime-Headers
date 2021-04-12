/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
*/

#import <LocalAuthenticationPrivateUI/LAUIPhysicalButtonViewAnimation.h>

@class CAGradientLayer;

@interface LAUIPhysicalButtonViewShimmerAnimation : LAUIPhysicalButtonViewAnimation {

	CAGradientLayer* _shimmerGradient;

}
-(double)duration;
-(void)endImmediately;
-(void)beginWithDelay:(double)arg1 ;
-(BOOL)_isReducedMotionEnabled;
-(void)_beginReducedMotionAnimationWithDelay:(double)arg1 ;
-(void)_beginRegularMotionAnimationWithDelay:(double)arg1 ;
-(void)_endShimmerAnimation;
@end

