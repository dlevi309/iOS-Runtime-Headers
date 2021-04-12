/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/WDAddDataManualEntryItem.h>
#import <libobjc.A.dylib/WDAddDataManualEntryItemDelegate.h>

@class WDAddDataManualEntryItem, NSDate, NSString;

@interface _WDTwoPartDateRangeManualEntryItem : WDAddDataManualEntryItem <WDAddDataManualEntryItemDelegate> {

	WDAddDataManualEntryItem* _startItem;
	WDAddDataManualEntryItem* _endItem;
	NSDate* _maximumEndDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)generateValue;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)tableViewCells;
-(void)manualEntryItemDidUpdate:(id)arg1 ;
-(id)initWithMaximumEndDate:(id)arg1 ;
-(void)_setupEntryItems;
-(void)_startItemDidChange;
-(void)_endItemDidChange;
-(void)beginEditing;
@end

