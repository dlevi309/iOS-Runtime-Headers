/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)friction;
-(void)setFriction:(double)arg1 ;
-(void)setDefaultValues;
-(double)tension;
-(void)setTension:(double)arg1 ;
-(void)setSameWallpaperInitialTransitionSettings:(CSCoverSheetTransitionSettings *)arg1 ;
-(void)setDifferentWallpaperInitialTransitionSettings:(CSCoverSheetTransitionSettings *)arg1 ;
-(void)setSameWallpaperSubsequentTransitionSettings:(CSCoverSheetTransitionSettings *)arg1 ;
-(void)setDifferentWallpaperSubsequentTransitionSettings:(CSCoverSheetTransitionSettings *)arg1 ;
-(void)setOverAppTransitionSettings:(CSCoverSheetTransitionSettings *)arg1 ;
-(void)setFlyInSettings:(CSCoverSheetFlyInSettings *)arg1 ;
-(void)setDefaultValuesForParallaxAndBlur;
-(void)setDefaultValuesForParallaxOnly;
-(void)setDefaultValuesForBlurOnly;
-(CSCoverSheetFlyInSettings *)flyInSettings;
-(CSCoverSheetTransitionSettings *)sameWallpaperInitialTransitionSettings;
-(CSCoverSheetTransitionSettings *)differentWallpaperInitialTransitionSettings;
-(CSCoverSheetTransitionSettings *)sameWallpaperSubsequentTransitionSettings;
-(CSCoverSheetTransitionSettings *)differentWallpaperSubsequentTransitionSettings;
-(CSCoverSheetTransitionSettings *)overAppTransitionSettings;
@end

