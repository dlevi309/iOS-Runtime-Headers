/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKDataMetadataSection.h>

@class HKSample, HKHealthStore, HKDisplayTypeController, HKUnitPreferenceController;

@interface HKDataMetadataBeatToBeatSection : HKDataMetadataSection {

	HKSample* _sample;
	HKHealthStore* _healthStore;
	HKDisplayTypeController* _displayTypeController;
	HKUnitPreferenceController* _unitController;

}
-(id)sectionTitle;
-(id)initWithSample:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 ;
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
@end

