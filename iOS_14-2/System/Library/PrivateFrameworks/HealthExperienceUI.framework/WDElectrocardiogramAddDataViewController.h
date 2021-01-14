/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/WDAddDataViewController.h>
#import <libobjc.A.dylib/WDAddDataManualEntryItemDelegate.h>

@class WDAddDataManualEntryItem, NSString;

@interface WDElectrocardiogramAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate> {

	WDAddDataManualEntryItem* _dateEntryItem;
	WDAddDataManualEntryItem* _electrocardiogramClassificationEntryItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)numberOfSections;
-(id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 dateCache:(id)arg5 ;
-(id)manualEntryItemsForSection:(long long)arg1 ;
-(void)manualEntryItemDidUpdate:(id)arg1 ;
-(void)saveHKObjectWithCompletion:(/*^block*/id)arg1 ;
-(id)builderFromDataFile:(id)arg1 startDate:(id)arg2 ;
-(id)symptomSamplesForElectrocardiogram:(id)arg1 ;
@end

