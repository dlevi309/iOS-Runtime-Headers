/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/WDAddDataManualEntryItem.h>
#import <libobjc.A.dylib/WDManualDataEntryTableViewCellDelegate.h>

@class WDManualDataEntryTableViewCell, NSNumberFormatter;

@interface _WDNumberBasedAddDataManualEntryItem : WDAddDataManualEntryItem <WDManualDataEntryTableViewCellDelegate> {

	WDManualDataEntryTableViewCell* _tableViewCell;
	unsigned long long _manualEntryType;
	NSNumberFormatter* _numberFormatter;

}

@property (assign,nonatomic) unsigned long long manualEntryType;               //@synthesize manualEntryType=_manualEntryType - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * numberFormatter;              //@synthesize numberFormatter=_numberFormatter - In the implementation block
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(void)setTitle:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)generateValue;
-(id)tableViewCells;
-(void)setManualEntryType:(unsigned long long)arg1 ;
-(unsigned long long)manualEntryType;
-(void)manualDataEntryTableViewCell:(id)arg1 valueDidChangeToValue:(id)arg2 ;
-(void)beginEditing;
@end

