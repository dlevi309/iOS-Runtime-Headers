/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <PrototypeTools/PTSettings.h>

@class PTOutlet, SBFWallpaperParallaxSettings;

@interface SBFWallpaperSettings : PTSettings {

	PTOutlet* _resetWallpaperOutlet;
	SBFWallpaperParallaxSettings* _homeScreenParallaxSettings;
	SBFWallpaperParallaxSettings* _lockScreenParallaxSettings;

}

@property (nonatomic,retain) PTOutlet * resetWallpaperOutlet;                                        //@synthesize resetWallpaperOutlet=_resetWallpaperOutlet - In the implementation block
@property (nonatomic,retain) SBFWallpaperParallaxSettings * homeScreenParallaxSettings;              //@synthesize homeScreenParallaxSettings=_homeScreenParallaxSettings - In the implementation block
@property (nonatomic,retain) SBFWallpaperParallaxSettings * lockScreenParallaxSettings;              //@synthesize lockScreenParallaxSettings=_lockScreenParallaxSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(id)parallaxSettingsForVariant:(long long)arg1 ;
-(void)setHomeScreenParallaxSettings:(SBFWallpaperParallaxSettings *)arg1 ;
-(SBFWallpaperParallaxSettings *)homeScreenParallaxSettings;
-(void)setResetWallpaperOutlet:(PTOutlet *)arg1 ;
-(PTOutlet *)resetWallpaperOutlet;
-(SBFWallpaperParallaxSettings *)lockScreenParallaxSettings;
-(void)setLockScreenParallaxSettings:(SBFWallpaperParallaxSettings *)arg1 ;
@end

