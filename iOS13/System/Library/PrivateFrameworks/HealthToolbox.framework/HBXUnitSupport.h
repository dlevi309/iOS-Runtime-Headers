/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class HKUnitPreferenceController, HKDisplayTypeController;

@interface HBXUnitSupport : NSObject {

	HKUnitPreferenceController* _unitPreferenceController;
	HKDisplayTypeController* _displayTypeController;

}

@property (nonatomic,readonly) HKUnitPreferenceController * unitPreferenceController;              //@synthesize unitPreferenceController=_unitPreferenceController - In the implementation block
@property (nonatomic,readonly) HKDisplayTypeController * displayTypeController;                    //@synthesize displayTypeController=_displayTypeController - In the implementation block
-(id)localizedPreferredUnitDisplayNameForType:(id)arg1 ;
-(id)localizedDisplayNameForUnit:(id)arg1 ;
-(HKDisplayTypeController *)displayTypeController;
-(id)initWithUnitPreferenceController:(id)arg1 displayTypeController:(id)arg2 ;
-(id)preferredUnitForType:(id)arg1 ;
-(void)updatePreferredUnit:(id)arg1 forType:(id)arg2 ;
-(HKUnitPreferenceController *)unitPreferenceController;
@end

