/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol _TVRemoteAlertVisualStyleProviding;
@class NSString;

@interface TVRUIAlertFadeAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {

	long long _animationType;
	id<_TVRemoteAlertVisualStyleProviding> _visualStyle;

}

@property (nonatomic,readonly) long long animationType;                                         //@synthesize animationType=_animationType - In the implementation block
@property (nonatomic,readonly) id<_TVRemoteAlertVisualStyleProviding> visualStyle;              //@synthesize visualStyle=_visualStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)animationType;
-(id<_TVRemoteAlertVisualStyleProviding>)visualStyle;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)_runPresentationAnimationWithTransition:(id)arg1 ;
-(void)_runDismissalAnimationWithTransition:(id)arg1 ;
-(id)initWithAnimationType:(long long)arg1 visualStyle:(id)arg2 ;
@end

