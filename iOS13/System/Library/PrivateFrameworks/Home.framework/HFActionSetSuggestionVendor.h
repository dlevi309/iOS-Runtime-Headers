/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class HFActionSetSuggestionFilter, HMActionSet, HMHome, NSArray;

@interface HFActionSetSuggestionVendor : NSObject {

	HFActionSetSuggestionFilter* _filter;
	HMActionSet* _actionSet;
	HMHome* _home;
	NSArray* _services;

}

@property (nonatomic,readonly) NSArray * services;                                //@synthesize services=_services - In the implementation block
@property (nonatomic,readonly) HFActionSetSuggestionFilter * filter;              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) HMActionSet * actionSet;                           //@synthesize actionSet=_actionSet - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                     //@synthesize home=_home - In the implementation block
+(id)supportedBuiltInActionSetTypes;
-(id)init;
-(HMHome *)home;
-(HFActionSetSuggestionFilter *)filter;
-(id)build;
-(NSArray *)services;
-(HMActionSet *)actionSet;
-(id)initWithHome:(id)arg1 actionSet:(id)arg2 filter:(id)arg3 ;
-(id)buildWithOutDependentServiceTypes:(out id*)arg1 ;
-(id)initWithHome:(id)arg1 actionSet:(id)arg2 ;
-(id)_actionBuildersForCustomActionSet;
-(id)_actionBuildersForBuiltInActionSetWithType:(id)arg1 outDependentServiceTypes:(out id*)arg2 ;
-(id)_actionBuildersToSetPowerState:(BOOL)arg1 forServicesOfTypes:(id)arg2 ;
-(id)_actionBuildersToSetLightbulbBrightness:(double)arg1 ;
-(id)_actionBuildersToSetLightbulbColorWithPaletteColor:(id)arg1 ;
-(id)_actionBuildersToSetTargetBlindsPositionOpen:(BOOL)arg1 ;
-(id)_actionBuildersToSetTargetDoorState:(long long)arg1 forServicesOfTypes:(id)arg2 ;
-(id)_actionBuildersToSetTargetLockState:(long long)arg1 forServicesOfTypes:(id)arg2 ;
-(id)_actionBuildersToSetTargetSecuritySystemState:(long long)arg1 ;
-(id)_controlItemValueSourceForService:(id)arg1 ;
-(id)_actionBuildersForCustomActionSetWithService:(id)arg1 ;
-(id)_deriveActionForPrimaryCharacteristic:(id)arg1 ;
-(id)_deriveActionForSecondaryCharacteristic:(id)arg1 candidateServices:(id)arg2 ;
-(id)_deriveActionForPrimaryCharacteristic:(id)arg1 candidateServices:(id)arg2 targetThreshold:(double)arg3 ;
@end

