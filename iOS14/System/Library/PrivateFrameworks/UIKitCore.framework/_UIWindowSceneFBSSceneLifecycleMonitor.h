/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneLifecycleMonitor.h>

@class NSNumber;

@interface _UIWindowSceneFBSSceneLifecycleMonitor : _UISceneLifecycleMonitor {

	NSNumber* _transitioningState;
	BOOL _transitioning;
	BOOL _connected;

}
-(void)willBecomeActive;
-(id)initWithScene:(id)arg1 ;
-(id)_windowScene;
-(void)didEnterBackground;
-(void)transitionToTargetState:(id)arg1 fromState:(id)arg2 withTransitionContext:(id)arg3 preparations:(/*^block*/id)arg4 ;
-(long long)currentActivationState;
@end

