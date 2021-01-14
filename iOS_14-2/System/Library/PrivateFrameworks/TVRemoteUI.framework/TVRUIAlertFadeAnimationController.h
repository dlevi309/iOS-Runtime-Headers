/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animateTransition:(id)arg1 ;
-(id<_TVRemoteAlertVisualStyleProviding>)visualStyle;
-(double)transitionDuration:(id)arg1 ;
-(long long)animationType;
-(void)_runPresentationAnimationWithTransition:(id)arg1 ;
-(void)_runDismissalAnimationWithTransition:(id)arg1 ;
-(id)initWithAnimationType:(long long)arg1 visualStyle:(id)arg2 ;
@end

