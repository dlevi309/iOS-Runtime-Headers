/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings;

@interface SBPIPFluidTransitionsSettings : PTSettings {

	SBFFluidBehaviorSettings* _sourceClippingFluidBehavior;
	SBFFluidBehaviorSettings* _targetClippingFluidBehavior;

}

@property (nonatomic,retain) SBFFluidBehaviorSettings * sourceClippingFluidBehavior;              //@synthesize sourceClippingFluidBehavior=_sourceClippingFluidBehavior - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * targetClippingFluidBehavior;              //@synthesize targetClippingFluidBehavior=_targetClippingFluidBehavior - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(SBFFluidBehaviorSettings *)sourceClippingFluidBehavior;
-(SBFFluidBehaviorSettings *)targetClippingFluidBehavior;
-(void)setSourceClippingFluidBehavior:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setTargetClippingFluidBehavior:(SBFFluidBehaviorSettings *)arg1 ;
@end

