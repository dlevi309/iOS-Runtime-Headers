/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SBFWallpaperParallaxSettings *)homeScreenParallaxSettings;
-(SBFWallpaperParallaxSettings *)lockScreenParallaxSettings;
-(id)parallaxSettingsForVariant:(long long)arg1 ;
-(PTOutlet *)resetWallpaperOutlet;
-(void)setResetWallpaperOutlet:(PTOutlet *)arg1 ;
-(void)setHomeScreenParallaxSettings:(SBFWallpaperParallaxSettings *)arg1 ;
-(void)setLockScreenParallaxSettings:(SBFWallpaperParallaxSettings *)arg1 ;
@end

