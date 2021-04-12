/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SBHScaleZoomSettings.h>

@class SBFAnimationSettings;

@interface SBHCrossfadeZoomSettings : SBHScaleZoomSettings {

	BOOL _morphWithZoom;
	SBFAnimationSettings* _morphSettings;

}

@property (assign,nonatomic) BOOL morphWithZoom;                                //@synthesize morphWithZoom=_morphWithZoom - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * morphSettings;              //@synthesize morphSettings=_morphSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(id)effectiveMorphAnimationSettings;
-(void)setMorphWithZoom:(BOOL)arg1 ;
-(BOOL)morphWithZoom;
-(SBFAnimationSettings *)morphSettings;
-(void)setMorphSettings:(SBFAnimationSettings *)arg1 ;
@end

