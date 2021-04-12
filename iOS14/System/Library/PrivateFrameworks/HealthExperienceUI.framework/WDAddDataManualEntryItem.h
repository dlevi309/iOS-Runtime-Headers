/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/


@protocol WDAddDataManualEntryItemDelegate;
@class NSNumber, NSString;

@interface WDAddDataManualEntryItem : NSObject {

	NSNumber* _identifier;
	NSString* _title;
	NSString* _secondaryLabel;
	id<WDAddDataManualEntryItemDelegate> _delegate;

}

@property (nonatomic,retain) NSNumber * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * secondaryLabel;                                         //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (assign,nonatomic,__weak) id<WDAddDataManualEntryItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)twoPartDateRangeItemWithMaximumEndDate:(id)arg1 ;
+(id)numericItemWithManualEntryType:(unsigned long long)arg1 numberFormatter:(id)arg2 ;
+(id)dateTimeItemWithMaximumDate:(id)arg1 highlightWhenEditing:(BOOL)arg2 ;
+(id)dateItemWithMaximumDate:(id)arg1 ;
+(id)timeItemWithMaximumDate:(id)arg1 ;
+(id)dateTimeItemWithMaximumDate:(id)arg1 ;
+(id)twoPartDateTimeItemWithMaximumDate:(id)arg1 ;
+(id)durationItemWithMaximumDate:(id)arg1 ;
+(id)multiSelectItemWithEntries:(id)arg1 selectedIndex:(long long)arg2 ;
+(id)heightPickerItemWithFeetUnitString:(id)arg1 inchUnitString:(id)arg2 ;
-(id<WDAddDataManualEntryItemDelegate>)delegate;
-(void)setTitle:(NSString *)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)setDelegate:(id<WDAddDataManualEntryItemDelegate>)arg1 ;
-(void)resetItem;
-(id)generateValue;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(id)tableViewCells;
-(NSNumber *)identifier;
-(id)_createUITableViewCell;
-(void)_didUpdateValue;
-(void)_disambiguateDateComponents:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)cellForItemTapped:(id)arg1 ;
-(id)_createWDManualDataEntryTableViewCellWithDisplayName:(id)arg1 unitName:(id)arg2 entryType:(unsigned long long)arg3 highlightWhenEditing:(BOOL)arg4 ;
-(void)setSecondaryLabel:(NSString *)arg1 ;
-(NSString *)secondaryLabel;
-(NSString *)title;
-(void)beginEditing;
@end

