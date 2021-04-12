/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class FBScene, SBApplication, SBDeviceApplicationSceneHandle, UIApplicationSceneSettings, UIApplicationSceneClientSettings, FBSSceneTransitionContext;

@interface SBAppClientSettingObserverContext : NSObject {

	FBScene* _scene;
	SBApplication* _app;
	SBDeviceApplicationSceneHandle* _sceneHandle;
	UIApplicationSceneSettings* _settings;
	UIApplicationSceneClientSettings* _oldClientSettings;
	UIApplicationSceneClientSettings* _updatedClientSettings;
	FBSSceneTransitionContext* _transition;

}

@property (nonatomic,retain) FBScene * scene;                                                       //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) SBApplication * app;                                                   //@synthesize app=_app - In the implementation block
@property (nonatomic,retain) SBDeviceApplicationSceneHandle * sceneHandle;                          //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (nonatomic,retain) UIApplicationSceneSettings * settings;                                 //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) UIApplicationSceneClientSettings * oldClientSettings;                  //@synthesize oldClientSettings=_oldClientSettings - In the implementation block
@property (nonatomic,retain) UIApplicationSceneClientSettings * updatedClientSettings;              //@synthesize updatedClientSettings=_updatedClientSettings - In the implementation block
@property (nonatomic,retain) FBSSceneTransitionContext * transition;                                //@synthesize transition=_transition - In the implementation block
-(UIApplicationSceneSettings *)settings;
-(void)setSettings:(UIApplicationSceneSettings *)arg1 ;
-(FBScene *)scene;
-(FBSSceneTransitionContext *)transition;
-(void)setScene:(FBScene *)arg1 ;
-(void)setTransition:(FBSSceneTransitionContext *)arg1 ;
-(SBApplication *)app;
-(void)setApp:(SBApplication *)arg1 ;
-(SBDeviceApplicationSceneHandle *)sceneHandle;
-(UIApplicationSceneClientSettings *)updatedClientSettings;
-(void)setUpdatedClientSettings:(UIApplicationSceneClientSettings *)arg1 ;
-(void)setSceneHandle:(SBDeviceApplicationSceneHandle *)arg1 ;
-(void)setOldClientSettings:(UIApplicationSceneClientSettings *)arg1 ;
-(UIApplicationSceneClientSettings *)oldClientSettings;
@end

