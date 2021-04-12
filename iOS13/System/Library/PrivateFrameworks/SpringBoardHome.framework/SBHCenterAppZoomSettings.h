/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SBHCenterZoomSettings.h>

@class SBFAnimationSettings;

@interface SBHCenterAppZoomSettings : SBHCenterZoomSettings {

	double _appHeadStart;
	SBFAnimationSettings* _appZoomSettings;
	SBFAnimationSettings* _appFadeSettings;

}

@property (assign,nonatomic) double appHeadStart;                                 //@synthesize appHeadStart=_appHeadStart - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * appZoomSettings;              //@synthesize appZoomSettings=_appZoomSettings - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * appFadeSettings;              //@synthesize appFadeSettings=_appFadeSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)appHeadStart;
-(void)setAppHeadStart:(double)arg1 ;
-(SBFAnimationSettings *)appZoomSettings;
-(void)setAppZoomSettings:(SBFAnimationSettings *)arg1 ;
-(SBFAnimationSettings *)appFadeSettings;
-(void)setAppFadeSettings:(SBFAnimationSettings *)arg1 ;
@end

