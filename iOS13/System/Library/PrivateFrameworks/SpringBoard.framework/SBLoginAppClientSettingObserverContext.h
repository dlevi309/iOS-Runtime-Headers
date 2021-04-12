/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class UIApplicationSceneSettings, SBSUILoginUISceneClientSettings;

@interface SBLoginAppClientSettingObserverContext : NSObject {

	UIApplicationSceneSettings* _settings;
	SBSUILoginUISceneClientSettings* _updatedClientSettings;

}

@property (nonatomic,retain) UIApplicationSceneSettings * settings;                                //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) SBSUILoginUISceneClientSettings * updatedClientSettings;              //@synthesize updatedClientSettings=_updatedClientSettings - In the implementation block
-(UIApplicationSceneSettings *)settings;
-(void)setSettings:(UIApplicationSceneSettings *)arg1 ;
-(SBSUILoginUISceneClientSettings *)updatedClientSettings;
-(void)setUpdatedClientSettings:(SBSUILoginUISceneClientSettings *)arg1 ;
@end

