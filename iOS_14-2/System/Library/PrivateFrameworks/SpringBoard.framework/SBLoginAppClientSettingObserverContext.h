/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class UIApplicationSceneSettings, SBSUILoginUISceneClientSettings;

@interface SBLoginAppClientSettingObserverContext : NSObject {

	UIApplicationSceneSettings* _settings;
	SBSUILoginUISceneClientSettings* _updatedClientSettings;

}

@property (nonatomic,retain) UIApplicationSceneSettings * settings;                                //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) SBSUILoginUISceneClientSettings * updatedClientSettings;              //@synthesize updatedClientSettings=_updatedClientSettings - In the implementation block
-(void)setSettings:(UIApplicationSceneSettings *)arg1 ;
-(UIApplicationSceneSettings *)settings;
-(SBSUILoginUISceneClientSettings *)updatedClientSettings;
-(void)setUpdatedClientSettings:(SBSUILoginUISceneClientSettings *)arg1 ;
@end

