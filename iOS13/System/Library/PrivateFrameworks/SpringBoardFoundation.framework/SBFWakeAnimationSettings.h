/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <PrototypeTools/PTSettings.h>

@class SBFAnimationSettings;

@interface SBFWakeAnimationSettings : PTSettings {

	double _backlightFadeDuration;
	double _speedMultiplierForWake;
	double _speedMultiplierForLiftToWake;
	SBFAnimationSettings* _dateWakeSettings;
	SBFAnimationSettings* _contentWakeSettings;
	double _awakeColorBrightness;
	double _awakeDateAlpha;
	SBFAnimationSettings* _awakeWallpaperFilterSettings;
	SBFAnimationSettings* _dateSleepSettings;
	double _sleepColorBrightness;
	SBFAnimationSettings* _sleepWallpaperFilterSettings;

}

@property (assign,nonatomic) double backlightFadeDuration;                                     //@synthesize backlightFadeDuration=_backlightFadeDuration - In the implementation block
@property (assign,nonatomic) double speedMultiplierForWake;                                    //@synthesize speedMultiplierForWake=_speedMultiplierForWake - In the implementation block
@property (assign,nonatomic) double speedMultiplierForLiftToWake;                              //@synthesize speedMultiplierForLiftToWake=_speedMultiplierForLiftToWake - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * dateWakeSettings;                          //@synthesize dateWakeSettings=_dateWakeSettings - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * contentWakeSettings;                       //@synthesize contentWakeSettings=_contentWakeSettings - In the implementation block
@property (assign,nonatomic) double awakeColorBrightness;                                      //@synthesize awakeColorBrightness=_awakeColorBrightness - In the implementation block
@property (assign,nonatomic) double awakeDateAlpha;                                            //@synthesize awakeDateAlpha=_awakeDateAlpha - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * awakeWallpaperFilterSettings;              //@synthesize awakeWallpaperFilterSettings=_awakeWallpaperFilterSettings - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * dateSleepSettings;                         //@synthesize dateSleepSettings=_dateSleepSettings - In the implementation block
@property (assign,nonatomic) double sleepColorBrightness;                                      //@synthesize sleepColorBrightness=_sleepColorBrightness - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * sleepWallpaperFilterSettings;              //@synthesize sleepWallpaperFilterSettings=_sleepWallpaperFilterSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(SBFAnimationSettings *)dateWakeSettings;
-(SBFAnimationSettings *)contentWakeSettings;
-(SBFAnimationSettings *)awakeWallpaperFilterSettings;
-(SBFAnimationSettings *)dateSleepSettings;
-(SBFAnimationSettings *)sleepWallpaperFilterSettings;
-(double)backlightFadeDuration;
-(void)setBacklightFadeDuration:(double)arg1 ;
-(double)speedMultiplierForWake;
-(void)setSpeedMultiplierForWake:(double)arg1 ;
-(double)speedMultiplierForLiftToWake;
-(void)setSpeedMultiplierForLiftToWake:(double)arg1 ;
-(void)setDateWakeSettings:(SBFAnimationSettings *)arg1 ;
-(void)setContentWakeSettings:(SBFAnimationSettings *)arg1 ;
-(double)awakeColorBrightness;
-(void)setAwakeColorBrightness:(double)arg1 ;
-(double)awakeDateAlpha;
-(void)setAwakeDateAlpha:(double)arg1 ;
-(void)setAwakeWallpaperFilterSettings:(SBFAnimationSettings *)arg1 ;
-(void)setDateSleepSettings:(SBFAnimationSettings *)arg1 ;
-(double)sleepColorBrightness;
-(void)setSleepColorBrightness:(double)arg1 ;
-(void)setSleepWallpaperFilterSettings:(SBFAnimationSettings *)arg1 ;
@end

