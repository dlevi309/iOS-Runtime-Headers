/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/WDDisplayTypeAddDataViewController.h>
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
-(WDAddDataManualEntryItem *)dateTimeEntryItem;
-(WDAddDataManualEntrySpinner *)deliveryReasonEntryItem;
-(void)setDateTimeEntryItem:(WDAddDataManualEntryItem *)arg1 ;
-(void)setDeliveryReasonEntryItem:(WDAddDataManualEntrySpinner *)arg1 ;
-(long long)numberOfSections;
-(id)defaultMetadata;
-(long long)numberOfRowsInManualEntrySpinner:(id)arg1 ;
-(id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2 ;
-(id)manualEntryItemsForSection:(long long)arg1 ;
-(void)manualEntryItemDidUpdate:(id)arg1 ;
-(void)validateDataWithCompletion:(/*^block*/id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)generateHKObjects;
@end

