/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SBHIconZoomSettings.h>

@class SBFAnimationSettings;

@interface SBHScaleZoomSettings : SBHIconZoomSettings {

	BOOL _crossfadeWithZoom;
	BOOL _fadesIconGrid;
	SBFAnimationSettings* _outerFolderFadeSettings;
	SBFAnimationSettings* _crossfadeSettings;
	SBFAnimationSettings* _iconGridFadeSettings;

}

@property (nonatomic,retain) SBFAnimationSettings * outerFolderFadeSettings;              //@synthesize outerFolderFadeSettings=_outerFolderFadeSettings - In the implementation block
@property (assign,nonatomic) BOOL crossfadeWithZoom;                                      //@synthesize crossfadeWithZoom=_crossfadeWithZoom - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * crossfadeSettings;                    //@synthesize crossfadeSettings=_crossfadeSettings - In the implementation block
@property (assign,nonatomic) BOOL fadesIconGrid;                                          //@synthesize fadesIconGrid=_fadesIconGrid - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * iconGridFadeSettings;                 //@synthesize iconGridFadeSettings=_iconGridFadeSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(SBFAnimationSettings *)crossfadeSettings;
-(id)effectiveCrossfadeAnimationSettings;
-(SBFAnimationSettings *)iconGridFadeSettings;
-(BOOL)fadesIconGrid;
-(SBFAnimationSettings *)outerFolderFadeSettings;
-(void)setCrossfadeWithZoom:(BOOL)arg1 ;
-(void)setFadesIconGrid:(BOOL)arg1 ;
-(BOOL)crossfadeWithZoom;
-(void)setOuterFolderFadeSettings:(SBFAnimationSettings *)arg1 ;
-(void)setCrossfadeSettings:(SBFAnimationSettings *)arg1 ;
-(void)setIconGridFadeSettings:(SBFAnimationSettings *)arg1 ;
@end

