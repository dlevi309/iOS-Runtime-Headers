/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class HKUnitPreferenceController, HKDisplayTypeController;

@interface HBXUnitSupport : NSObject {

	HKUnitPreferenceController* _unitPreferenceController;
	HKDisplayTypeController* _displayTypeController;

}

@property (nonatomic,readonly) HKUnitPreferenceController * unitPreferenceController;              //@synthesize unitPreferenceController=_unitPreferenceController - In the implementation block
@property (nonatomic,readonly) HKDisplayTypeController * displayTypeController;                    //@synthesize displayTypeController=_displayTypeController - In the implementation block
-(HKDisplayTypeController *)displayTypeController;
-(HKUnitPreferenceController *)unitPreferenceController;
-(id)preferredUnitForType:(id)arg1 ;
-(id)localizedDisplayNameForUnit:(id)arg1 nameContext:(long long)arg2 ;
-(id)initWithUnitPreferenceController:(id)arg1 displayTypeController:(id)arg2 ;
-(id)localizedPreferredUnitDisplayNameForType:(id)arg1 nameContext:(long long)arg2 ;
-(void)updatePreferredUnit:(id)arg1 forType:(id)arg2 ;
@end

