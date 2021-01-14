/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings;

@interface SBInCallSettings : PTSettings {

	SBFFluidBehaviorSettings* _transientOverlayFadeInSettings;
	SBFFluidBehaviorSettings* _transientOverlayFadeOutSettings;

}

@property (nonatomic,retain) SBFFluidBehaviorSettings * transientOverlayFadeInSettings;               //@synthesize transientOverlayFadeInSettings=_transientOverlayFadeInSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * transientOverlayFadeOutSettings;              //@synthesize transientOverlayFadeOutSettings=_transientOverlayFadeOutSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(SBFFluidBehaviorSettings *)transientOverlayFadeInSettings;
-(void)setTransientOverlayFadeInSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)transientOverlayFadeOutSettings;
-(void)setTransientOverlayFadeOutSettings:(SBFFluidBehaviorSettings *)arg1 ;
@end

