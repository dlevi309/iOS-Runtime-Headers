/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class FBScene, SBDeviceApplicationSceneHandle, UIApplicationSceneClientSettings, FBSSceneTransitionContext;

@interface SBInternalClientSettingObserverContext : NSObject {

	FBScene* _scene;
	SBDeviceApplicationSceneHandle* _sceneHandle;
	UIApplicationSceneClientSettings* _oldClientSettings;
	UIApplicationSceneClientSettings* _updatedClientSettings;
	FBSSceneTransitionContext* _transition;

}

@property (nonatomic,retain) FBScene * scene;                                                       //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) SBDeviceApplicationSceneHandle * sceneHandle;                          //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (nonatomic,retain) UIApplicationSceneClientSettings * oldClientSettings;                  //@synthesize oldClientSettings=_oldClientSettings - In the implementation block
@property (nonatomic,retain) UIApplicationSceneClientSettings * updatedClientSettings;              //@synthesize updatedClientSettings=_updatedClientSettings - In the implementation block
@property (nonatomic,retain) FBSSceneTransitionContext * transition;                                //@synthesize transition=_transition - In the implementation block
-(FBScene *)scene;
-(void)setScene:(FBScene *)arg1 ;
-(UIApplicationSceneClientSettings *)updatedClientSettings;
-(void)setTransition:(FBSSceneTransitionContext *)arg1 ;
-(void)setUpdatedClientSettings:(UIApplicationSceneClientSettings *)arg1 ;
-(SBDeviceApplicationSceneHandle *)sceneHandle;
-(UIApplicationSceneClientSettings *)oldClientSettings;
-(void)setOldClientSettings:(UIApplicationSceneClientSettings *)arg1 ;
-(FBSSceneTransitionContext *)transition;
-(void)setSceneHandle:(SBDeviceApplicationSceneHandle *)arg1 ;
@end

