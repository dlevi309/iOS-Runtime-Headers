/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <PrototypeTools/PTSettings.h>

@class SBHReducedMotionFadeSettings, SBHUnlockSettings, SBHCenterAppLaunchSettings, SBHCenterAppSuspendSettings, SBHCenterAcceleratedAppSuspendSettings, SBHCrossfadeAppLaunchSettings, SBHCrossfadeAppSuspendSettings, SBHCrossfadeAcceleratedAppSuspendSettings, SBHFolderOpenSettings, SBHFolderCloseSettings;

@interface SBHIconAnimationRootSettings : PTSettings {

	SBHReducedMotionFadeSettings* _reducedMotionSettings;
	SBHUnlockSettings* _unlockSettings;
	SBHCenterAppLaunchSettings* _centerLaunchSettings;
	SBHCenterAppSuspendSettings* _centerSuspendSettings;
	SBHCenterAcceleratedAppSuspendSettings* _centerAcceleratedSuspendSettings;
	SBHCrossfadeAppLaunchSettings* _crossfadeLaunchSettings;
	SBHCrossfadeAppSuspendSettings* _crossfadeSuspendSettings;
	SBHCrossfadeAcceleratedAppSuspendSettings* _crossfadeAcceleratedSuspendSettings;
	double _maxAppSuspendHintProgress;
	double _maxAppLaunchWallpaperScale;
	SBHFolderOpenSettings* _folderOpenSettings;
	SBHFolderCloseSettings* _folderCloseSettings;
	double _maxFolderCloseHintProgress;

}

@property (nonatomic,retain) SBHReducedMotionFadeSettings * reducedMotionSettings;                                         //@synthesize reducedMotionSettings=_reducedMotionSettings - In the implementation block
@property (nonatomic,retain) SBHUnlockSettings * unlockSettings;                                                           //@synthesize unlockSettings=_unlockSettings - In the implementation block
@property (nonatomic,retain) SBHCenterAppLaunchSettings * centerLaunchSettings;                                            //@synthesize centerLaunchSettings=_centerLaunchSettings - In the implementation block
@property (nonatomic,retain) SBHCenterAppSuspendSettings * centerSuspendSettings;                                          //@synthesize centerSuspendSettings=_centerSuspendSettings - In the implementation block
@property (nonatomic,retain) SBHCenterAcceleratedAppSuspendSettings * centerAcceleratedSuspendSettings;                    //@synthesize centerAcceleratedSuspendSettings=_centerAcceleratedSuspendSettings - In the implementation block
@property (nonatomic,retain) SBHCrossfadeAppLaunchSettings * crossfadeLaunchSettings;                                      //@synthesize crossfadeLaunchSettings=_crossfadeLaunchSettings - In the implementation block
@property (nonatomic,retain) SBHCrossfadeAppSuspendSettings * crossfadeSuspendSettings;                                    //@synthesize crossfadeSuspendSettings=_crossfadeSuspendSettings - In the implementation block
@property (nonatomic,retain) SBHCrossfadeAcceleratedAppSuspendSettings * crossfadeAcceleratedSuspendSettings;              //@synthesize crossfadeAcceleratedSuspendSettings=_crossfadeAcceleratedSuspendSettings - In the implementation block
@property (assign,nonatomic) double maxAppSuspendHintProgress;                                                             //@synthesize maxAppSuspendHintProgress=_maxAppSuspendHintProgress - In the implementation block
@property (assign,nonatomic) double maxAppLaunchWallpaperScale;                                                            //@synthesize maxAppLaunchWallpaperScale=_maxAppLaunchWallpaperScale - In the implementation block
@property (nonatomic,retain) SBHFolderOpenSettings * folderOpenSettings;                                                   //@synthesize folderOpenSettings=_folderOpenSettings - In the implementation block
@property (nonatomic,retain) SBHFolderCloseSettings * folderCloseSettings;                                                 //@synthesize folderCloseSettings=_folderCloseSettings - In the implementation block
@property (assign,nonatomic) double maxFolderCloseHintProgress;                                                            //@synthesize maxFolderCloseHintProgress=_maxFolderCloseHintProgress - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(SBHFolderOpenSettings *)folderOpenSettings;
-(SBHFolderCloseSettings *)folderCloseSettings;
-(SBHReducedMotionFadeSettings *)reducedMotionSettings;
-(SBHCenterAppLaunchSettings *)centerLaunchSettings;
-(SBHUnlockSettings *)unlockSettings;
-(void)setMaxAppSuspendHintProgress:(double)arg1 ;
-(void)setMaxAppLaunchWallpaperScale:(double)arg1 ;
-(void)setMaxFolderCloseHintProgress:(double)arg1 ;
-(void)setReducedMotionSettings:(SBHReducedMotionFadeSettings *)arg1 ;
-(void)setUnlockSettings:(SBHUnlockSettings *)arg1 ;
-(void)setCenterLaunchSettings:(SBHCenterAppLaunchSettings *)arg1 ;
-(SBHCenterAppSuspendSettings *)centerSuspendSettings;
-(void)setCenterSuspendSettings:(SBHCenterAppSuspendSettings *)arg1 ;
-(SBHCenterAcceleratedAppSuspendSettings *)centerAcceleratedSuspendSettings;
-(void)setCenterAcceleratedSuspendSettings:(SBHCenterAcceleratedAppSuspendSettings *)arg1 ;
-(SBHCrossfadeAppLaunchSettings *)crossfadeLaunchSettings;
-(void)setCrossfadeLaunchSettings:(SBHCrossfadeAppLaunchSettings *)arg1 ;
-(SBHCrossfadeAppSuspendSettings *)crossfadeSuspendSettings;
-(void)setCrossfadeSuspendSettings:(SBHCrossfadeAppSuspendSettings *)arg1 ;
-(SBHCrossfadeAcceleratedAppSuspendSettings *)crossfadeAcceleratedSuspendSettings;
-(void)setCrossfadeAcceleratedSuspendSettings:(SBHCrossfadeAcceleratedAppSuspendSettings *)arg1 ;
-(double)maxAppSuspendHintProgress;
-(double)maxAppLaunchWallpaperScale;
-(void)setFolderOpenSettings:(SBHFolderOpenSettings *)arg1 ;
-(void)setFolderCloseSettings:(SBHFolderCloseSettings *)arg1 ;
-(double)maxFolderCloseHintProgress;
@end

