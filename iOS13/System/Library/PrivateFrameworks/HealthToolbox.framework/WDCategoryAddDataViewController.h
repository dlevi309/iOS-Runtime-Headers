/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDAddDataViewController.h>
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
-(long long)_defaultSelectedIndex;
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 ;
-(WDAddDataManualEntryItem *)categoryValueEntryItem;
-(WDAddDataManualEntryItem *)dateEntryItem;
-(id)manualEntryItemsForSection:(long long)arg1 ;
-(BOOL)useSingleStartAndEndDate;
-(void)manualEntryItemDidUpdate:(id)arg1 ;
-(void)validateDataWithCompletion:(/*^block*/id)arg1 ;
-(id)generateHKObjects;
-(id)_orderedTitlesForCategoryValuePicker;
-(BOOL)_hasCategoryValueEntryItem;
-(HKValueRange *)selectedDateRange;
-(id)_categoryCells;
@end

