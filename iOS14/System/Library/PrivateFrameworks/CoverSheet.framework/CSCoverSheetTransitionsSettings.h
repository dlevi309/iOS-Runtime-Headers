/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <PrototypeTools/PTSettings.h>

@class CSCoverSheetFlyInSettings, CSCoverSheetTransitionSettings;

@interface CSCoverSheetTransitionsSettings : PTSettings {

	double _tension;
	double _friction;
	CSCoverSheetFlyInSettings* _flyInSettings;
	CSCoverSheetTransitionSettings* _sameWallpaperInitialTransitionSettings;
	CSCoverSheetTransitionSettings* _differentWallpaperInitialTransitionSettings;
	CSCoverSheetTransitionSettings* _sameWallpaperSubsequentTransitionSettings;
	CSCoverSheetTransitionSettings* _differentWallpaperSubsequentTransitionSettings;
	CSCoverSheetTransitionSettings* _overAppTransitionSettings;

}

@property (assign,nonatomic) double tension;                                                                               //@synthesize tension=_tension - In the implementation block
@property (assign,nonatomic) double friction;                                                                              //@synthesize friction=_friction - In the implementation block
@property (nonatomic,retain) CSCoverSheetFlyInSettings * flyInSettings;                                                    //@synthesize flyInSettings=_flyInSettings - In the implementation block
@property (nonatomic,retain) CSCoverSheetTransitionSettings * sameWallpaperInitialTransitionSettings;                      //@synthesize sameWallpaperInitialTransitionSettings=_sameWallpaperInitialTransitionSettings - In the implementation block
@property (nonatomic,retain) CSCoverSheetTransitionSettings * differentWallpaperInitialTransitionSettings;                 //@synthesize differentWallpaperInitialTransitionSettings=_differentWallpaperInitialTransitionSettings - In the implementation block
@property (nonatomic,retain) CSCoverSheetTransitionSettings * sameWallpaperSubsequentTransitionSettings;                   //@synthesize sameWallpaperSubsequentTransitionSettings=_sameWallpaperSubsequentTransitionSettings - In the implementation block
@property (nonatomic,retain) CSCoverSheetTransitionSettings * differentWallpaperSubsequentTransitionSettings;              //@synthesize differentWallpaperSubsequentTransitionSettings=_differentWallpaperSubsequentTransitionSettings - In the implementation block
@property (nonatomic,retain) CSCoverSheetTransitionSettings * overAppTransitionSettings;                                   //@synthesize overAppTransitionSettings=_overAppTransitionSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)friction;
-(void)setFlyInSettings:(CSCoverSheetFlyInSettings *)arg1 ;
-(double)tension;
-(CSCoverSheetFlyInSettings *)flyInSettings;
-(void)setOverAppTransitionSettings:(CSCoverSheetTransitionSettings *)arg1 ;
-(void)setTension:(double)arg1 ;
-(void)setSameWallpaperInitialTransitionSettings:(CSCoverSheetTransitionSettings *)arg1 ;
-(void)setFriction:(double)arg1 ;
-(CSCoverSheetTransitionSettings *)overAppTransitionSettings;
-(void)setDefaultValuesForParallaxAndBlur;
-(CSCoverSheetTransitionSettings *)differentWallpaperInitialTransitionSettings;
-(void)setSameWallpaperSubsequentTransitionSettings:(CSCoverSheetTransitionSettings *)arg1 ;
-(CSCoverSheetTransitionSettings *)sameWallpaperInitialTransitionSettings;
-(CSCoverSheetTransitionSettings *)differentWallpaperSubsequentTransitionSettings;
-(CSCoverSheetTransitionSettings *)sameWallpaperSubsequentTransitionSettings;
-(void)setDifferentWallpaperInitialTransitionSettings:(CSCoverSheetTransitionSettings *)arg1 ;
-(void)setDefaultValuesForBlurOnly;
-(void)setDefaultValuesForParallaxOnly;
-(void)setDifferentWallpaperSubsequentTransitionSettings:(CSCoverSheetTransitionSettings *)arg1 ;
@end

