/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSString;

@interface _TVNavigationCrossfadeAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _fadeOutFromView;

}

@property (assign,nonatomic) BOOL fadeOutFromView;                  //@synthesize fadeOutFromView=_fadeOutFromView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_beginCrossfadeAnimationFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 delay:(double)arg4 fadeOutFromView:(BOOL)arg5 removeFromView:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)_beginCrossfadeAnimationFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)fadeOutFromView;
-(void)setFadeOutFromView:(BOOL)arg1 ;
@end

