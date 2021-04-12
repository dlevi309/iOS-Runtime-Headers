/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDDisplayTypeAddDataViewController.h>
#import <libobjc.A.dylib/WDAddDataManualEntrySpinnerDataSource.h>
#import <libobjc.A.dylib/WDAddDataManualEntryItemDelegate.h>

@class WDAddDataManualEntryItem, WDAddDataManualEntrySpinner, NSString;

@interface WDInsulinDeliveryAddDataViewController : WDDisplayTypeAddDataViewController <WDAddDataManualEntrySpinnerDataSource, WDAddDataManualEntryItemDelegate> {

	WDAddDataManualEntryItem* _dateTimeEntryItem;
	WDAddDataManualEntrySpinner* _deliveryReasonEntryItem;

}

@property (nonatomic,retain) WDAddDataManualEntryItem * dateTimeEntryItem;                       //@synthesize dateTimeEntryItem=_dateTimeEntryItem - In the implementation block
@property (nonatomic,retain) WDAddDataManualEntrySpinner * deliveryReasonEntryItem;              //@synthesize deliveryReasonEntryItem=_deliveryReasonEntryItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)numberOfSections;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)defaultMetadata;
-(long long)numberOfRowsInManualEntrySpinner:(id)arg1 ;
-(id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2 ;
-(id)manualEntryItemsForSection:(long long)arg1 ;
-(void)manualEntryItemDidUpdate:(id)arg1 ;
-(WDAddDataManualEntrySpinner *)deliveryReasonEntryItem;
-(WDAddDataManualEntryItem *)dateTimeEntryItem;
-(void)validateDataWithCompletion:(/*^block*/id)arg1 ;
-(id)generateHKObjects;
-(void)setDateTimeEntryItem:(WDAddDataManualEntryItem *)arg1 ;
-(void)setDeliveryReasonEntryItem:(WDAddDataManualEntrySpinner *)arg1 ;
@end

