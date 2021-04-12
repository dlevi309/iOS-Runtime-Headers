/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIScene;

@interface _UISceneLifecycleMonitor : NSObject {

	UIScene* __scene;

}

@property (assign,nonatomic,__weak) UIScene * _scene;                         //@synthesize _scene=__scene - In the implementation block
@property (nonatomic,readonly) long long currentActivationState; 
-(id)initWithScene:(id)arg1 ;
-(UIScene *)_scene;
-(long long)currentActivationState;
-(void)transitionToTargetState:(id)arg1 fromState:(id)arg2 withTransitionContext:(id)arg3 preparations:(/*^block*/id)arg4 ;
-(void)willConnect;
-(void)didConnect;
-(void)willBecomeActive;
-(void)didBecomeActive;
-(void)willResignActive;
-(void)didResignActive;
-(void)willEnterForeground;
-(void)didEnterForeground;
-(void)willEnterBackground;
-(void)didEnterBackground;
-(void)willDisonnect;
-(void)didDisonnect;
-(void)set_scene:(UIScene *)arg1 ;
@end

