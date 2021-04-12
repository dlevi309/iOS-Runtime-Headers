/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSString;

@interface _TVPlaybackFadeAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _usesCustomEasing;
	BOOL _shouldAnimateHalfwayThenPopIn;
	double _transitionDuration;

}

@property (assign,nonatomic) double transitionDuration;                       //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (assign,nonatomic) BOOL usesCustomEasing;                           //@synthesize usesCustomEasing=_usesCustomEasing - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateHalfwayThenPopIn;              //@synthesize shouldAnimateHalfwayThenPopIn=_shouldAnimateHalfwayThenPopIn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTransitionDuration:(double)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(double)transitionDuration;
-(double)transitionDuration:(id)arg1 ;
-(id)init;
-(void)_beginFadeAnimationFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)usesCustomEasing;
-(void)setUsesCustomEasing:(BOOL)arg1 ;
-(BOOL)shouldAnimateHalfwayThenPopIn;
-(void)setShouldAnimateHalfwayThenPopIn:(BOOL)arg1 ;
@end

