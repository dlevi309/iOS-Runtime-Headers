/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <PrototypeTools/PTSettings.h>

@class SBPIPInteractionSettings, SBPIPFluidTransitionsSettings;

@interface SBPIPSettings : PTSettings {

	SBPIPInteractionSettings* _interactionSettings;
	SBPIPFluidTransitionsSettings* _fluidTransitionsSettings;

}

@property (nonatomic,retain) SBPIPInteractionSettings * interactionSettings;                        //@synthesize interactionSettings=_interactionSettings - In the implementation block
@property (nonatomic,retain) SBPIPFluidTransitionsSettings * fluidTransitionsSettings;              //@synthesize fluidTransitionsSettings=_fluidTransitionsSettings - In the implementation block
+(id)settingsControllerModule;
-(SBPIPInteractionSettings *)interactionSettings;
-(SBPIPFluidTransitionsSettings *)fluidTransitionsSettings;
-(void)setInteractionSettings:(SBPIPInteractionSettings *)arg1 ;
-(void)setFluidTransitionsSettings:(SBPIPFluidTransitionsSettings *)arg1 ;
@end

