/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIScene;

@interface _UISceneLifecycleMonitor : NSObject {

	UIScene* __scene;

}

@property (assign,nonatomic,__weak) UIScene * _scene;                         //@synthesize _scene=__scene - In the implementation block
@property (nonatomic,readonly) long long currentActivationState; 
-(void)willBecomeActive;
-(UIScene *)_scene;
-(id)initWithScene:(id)arg1 ;
-(void)willEnterForeground;
-(void)didEnterBackground;
-(void)willConnect;
-(void)didEnterForeground;
-(void)didBecomeActive;
-(void)didResignActive;
-(void)willResignActive;
-(void)willEnterBackground;
-(void)willDisonnect;
-(void)transitionToTargetState:(id)arg1 fromState:(id)arg2 withTransitionContext:(id)arg3 preparations:(/*^block*/id)arg4 ;
-(void)didDisonnect;
-(long long)currentActivationState;
-(void)set_scene:(UIScene *)arg1 ;
-(void)didConnect;
@end

