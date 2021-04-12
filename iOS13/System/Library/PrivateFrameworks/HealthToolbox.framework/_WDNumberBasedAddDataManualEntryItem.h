/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDAddDataManualEntryItem.h>
#import <libobjc.A.dylib/WDManualDataEntryTableViewCellDelegate.h>

@class WDManualDataEntryTableViewCell, NSNumberFormatter;

@interface _WDNumberBasedAddDataManualEntryItem : WDAddDataManualEntryItem <WDManualDataEntryTableViewCellDelegate> {

	WDManualDataEntryTableViewCell* _tableViewCell;
	unsigned long long _manualEntryType;
	NSNumberFormatter* _numberFormatter;

}

@property (assign,nonatomic) unsigned long long manualEntryType;               //@synthesize manualEntryType=_manualEntryType - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * numberFormatter;              //@synthesize numberFormatter=_numberFormatter - In the implementation block
-(void)beginEditing;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(void)setValue:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)generateValue;
-(void)setManualEntryType:(unsigned long long)arg1 ;
-(id)tableViewCells;
-(void)manualDataEntryTableViewCell:(id)arg1 valueDidChangeToValue:(id)arg2 ;
-(unsigned long long)manualEntryType;
@end

