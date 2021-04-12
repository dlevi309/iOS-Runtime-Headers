/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SBHScaleZoomSettings.h>

@class SBFAnimationSettings;

@interface SBHFolderZoomSettings : SBHScaleZoomSettings {

	SBFAnimationSettings* _innerFolderFadeSettings;

}

@property (nonatomic,retain) SBFAnimationSettings * innerFolderFadeSettings;              //@synthesize innerFolderFadeSettings=_innerFolderFadeSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(SBFAnimationSettings *)innerFolderFadeSettings;
-(void)setInnerFolderFadeSettings:(SBFAnimationSettings *)arg1 ;
@end

