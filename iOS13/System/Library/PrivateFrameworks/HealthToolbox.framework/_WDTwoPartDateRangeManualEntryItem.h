/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDAddDataManualEntryItem.h>
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
-(void)beginEditing;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)generateValue;
-(id)initWithMaximumEndDate:(id)arg1 ;
-(void)manualEntryItemDidUpdate:(id)arg1 ;
-(id)tableViewCells;
-(void)_setupEntryItems;
-(void)_startItemDidChange;
-(void)_endItemDidChange;
@end

