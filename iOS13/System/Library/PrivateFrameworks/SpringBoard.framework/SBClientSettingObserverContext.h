/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class FBScene, SBDeviceApplicationSceneHandle, FBSSceneClientSettings, FBSSceneTransitionContext;

@interface SBClientSettingObserverContext : NSObject {

	FBScene* _scene;
	SBDeviceApplicationSceneHandle* _sceneHandle;
	FBSSceneClientSettings* _oldClientSettings;
	FBSSceneTransitionContext* _transition;

}

@property (nonatomic,retain) FBScene * scene;                                           //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) SBDeviceApplicationSceneHandle * sceneHandle;              //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (nonatomic,retain) FBSSceneClientSettings * oldClientSettings;                //@synthesize oldClientSettings=_oldClientSettings - In the implementation block
@property (nonatomic,retain) FBSSceneTransitionContext * transition;                    //@synthesize transition=_transition - In the implementation block
-(FBScene *)scene;
-(FBSSceneTransitionContext *)transition;
-(void)setScene:(FBScene *)arg1 ;
-(void)setTransition:(FBSSceneTransitionContext *)arg1 ;
-(SBDeviceApplicationSceneHandle *)sceneHandle;
-(void)setSceneHandle:(SBDeviceApplicationSceneHandle *)arg1 ;
-(void)setOldClientSettings:(FBSSceneClientSettings *)arg1 ;
-(FBSSceneClientSettings *)oldClientSettings;
@end

