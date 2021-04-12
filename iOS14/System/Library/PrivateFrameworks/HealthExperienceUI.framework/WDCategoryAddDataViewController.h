/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/WDAddDataViewController.h>
#import <libobjc.A.dylib/WDAddDataManualEntryItemDelegate.h>

@class WDAddDataManualEntryItem, HKValueRange, NSString;

@interface WDCategoryAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate> {

	WDAddDataManualEntryItem* _categoryValueEntryItem;
	WDAddDataManualEntryItem* _dateEntryItem;

}

@property (nonatomic,readonly) WDAddDataManualEntryItem * categoryValueEntryItem;              //@synthesize categoryValueEntryItem=_categoryValueEntryItem - In the implementation block
@property (nonatomic,readonly) WDAddDataManualEntryItem * dateEntryItem;                       //@synthesize dateEntryItem=_dateEntryItem - In the implementation block
@property (nonatomic,readonly) HKValueRange * selectedDateRange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)numberOfSections;
-(void)viewDidLoad;
-(BOOL)useDuration;
-(id)_orderedTitlesForCategoryValuePicker;
-(long long)_defaultSelectedIndex;
-(void)updateSavingEnabled;
-(BOOL)_hasCategoryValueEntryItem;
-(HKValueRange *)selectedDateRange;
-(id)_categoryCells;
-(id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 dateCache:(id)arg5 ;
-(WDAddDataManualEntryItem *)categoryValueEntryItem;
-(WDAddDataManualEntryItem *)dateEntryItem;
-(id)manualEntryItemsForSection:(long long)arg1 ;
-(BOOL)useSingleStartAndEndDate;
-(void)manualEntryItemDidUpdate:(id)arg1 ;
-(void)validateDataWithCompletion:(/*^block*/id)arg1 ;
-(id)defaultEditingItem;
-(id)generateHKObjects;
@end

