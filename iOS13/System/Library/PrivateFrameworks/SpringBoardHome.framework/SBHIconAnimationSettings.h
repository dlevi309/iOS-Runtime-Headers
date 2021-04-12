/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <PrototypeTools/PTSettings.h>

@class SBFAnimationSettings;

@interface SBHIconAnimationSettings : PTSettings {

	SBFAnimationSettings* _centralAnimationSettings;

}

@property (nonatomic,retain) SBFAnimationSettings * centralAnimationSettings;              //@synthesize centralAnimationSettings=_centralAnimationSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(SBFAnimationSettings *)centralAnimationSettings;
-(void)setCentralAnimationSettings:(SBFAnimationSettings *)arg1 ;
@end

