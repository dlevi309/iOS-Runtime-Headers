/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneLifecycleMonitor.h>

@class NSNumber;

@interface _UIWindowSceneFBSSceneLifecycleMonitor : _UISceneLifecycleMonitor {

	NSNumber* _transitioningState;
	BOOL _transitioning;
	BOOL _connected;

}
-(id)initWithScene:(id)arg1 ;
-(long long)currentActivationState;
-(void)transitionToTargetState:(id)arg1 fromState:(id)arg2 withTransitionContext:(id)arg3 preparations:(/*^block*/id)arg4 ;
-(void)willBecomeActive;
-(void)didEnterBackground;
-(id)_windowScene;
@end

