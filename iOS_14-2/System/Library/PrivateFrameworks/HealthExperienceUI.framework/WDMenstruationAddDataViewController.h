/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/WDCategoryAddDataViewController.h>
#import <libobjc.A.dylib/WDAddDataManualEntrySpinnerDataSource.h>

@class WDAddDataManualEntrySpinner, NSString;

@interface WDMenstruationAddDataViewController : WDCategoryAddDataViewController <WDAddDataManualEntrySpinnerDataSource> {

	WDAddDataManualEntrySpinner* _isStartOfCycleEntryItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(long long)numberOfSections;
-(id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 dateCache:(id)arg5 ;
-(id)defaultMetadata;
-(long long)numberOfRowsInManualEntrySpinner:(id)arg1 ;
-(id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2 ;
-(id)manualEntryItemsForSection:(long long)arg1 ;
-(BOOL)useSingleStartAndEndDate;
@end

