/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/WDAddDataViewController.h>
#import <libobjc.A.dylib/WDAddDataManualEntryItemDelegate.h>

@class WDAddDataManualEntryItem, NSString;

@interface WDDisplayTypeAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate> {

	WDAddDataManualEntryItem* _dateTimeEntryItem;
	WDAddDataManualEntryItem* _valueFieldManualEntryItem;

}

@property (nonatomic,retain) WDAddDataManualEntryItem * valueFieldManualEntryItem;              //@synthesize valueFieldManualEntryItem=_valueFieldManualEntryItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WDAddDataManualEntryItem *)valueFieldManualEntryItem;
-(long long)numberOfSections;
-(void)_setDefaultValuesIfNecessary;
-(void)_updateManualEntryItemWithCurrentBMI:(id)arg1 ;
-(void)setValueFieldManualEntryItem:(WDAddDataManualEntryItem *)arg1 ;
-(void)viewDidLoad;
-(id)manualEntryItemsForSection:(long long)arg1 ;
-(void)manualEntryItemDidUpdate:(id)arg1 ;
-(void)validateDataWithCompletion:(/*^block*/id)arg1 ;
-(id)createValueFieldManualEntryItem;
-(id)defaultEditingItem;
-(id)generateHKObjects;
@end

