/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDAddDataViewController.h>
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
-(void)viewDidLoad;
-(long long)numberOfSections;
-(id)manualEntryItemsForSection:(long long)arg1 ;
-(void)manualEntryItemDidUpdate:(id)arg1 ;
-(WDAddDataManualEntryItem *)valueFieldManualEntryItem;
-(void)validateDataWithCompletion:(/*^block*/id)arg1 ;
-(id)generateHKObjects;
-(id)defaultEditingItem;
-(id)createValueFieldManualEntryItem;
-(void)_setDefaultValuesIfNecessary;
-(void)_updateManualEntryItemWithCurrentBMI:(id)arg1 ;
-(void)setValueFieldManualEntryItem:(WDAddDataManualEntryItem *)arg1 ;
@end

