/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>
#import <libobjc.A.dylib/EKRecurrenceTypeEditItemViewControllerDelegate.h>
#import <libobjc.A.dylib/EKCellShortener.h>

@class NSDate, NSString, PreferencesValueCell, EKRecurrenceTypeEditItemViewController, EKCalendarItemRecurrenceEndCell;

@interface EKCalendarItemRecurrenceEditItem : EKCalendarItemEditItem <EKRecurrenceTypeEditItemViewControllerDelegate, EKCellShortener> {

	long long _repeatType;
	long long _originalRepeatType;
	NSDate* _repeatEnd;
	NSDate* _originalRepeatEnd;
	NSString* _customRepeatDescription;
	unsigned long long _disclosedSubitem;
	int _shorteningStatus;
	PreferencesValueCell* _repeatEndDateCell;
	EKRecurrenceTypeEditItemViewController* _recurrenceTypeVC;
	EKCalendarItemRecurrenceEndCell* _repeatEndPickerCell;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_neverLocalizedString;
-(unsigned long long)numberOfSubitems;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(id)init;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)forceRefreshStartAndEndDatesOnSave;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(id)stringForDate:(id)arg1 ;
-(id)recurrenceTimeZone;
-(id)minRecurrenceEndDate;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(long long)repeatTypeForRecurrenceRule:(id)arg1 ;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(id)_recurrenceTypeVC;
-(BOOL)_validateRecurrenceType:(id)arg1 ;
-(void)_updateRepeatEndDateCell;
-(BOOL)editItemViewControllerSave:(id)arg1 notify:(BOOL)arg2 ;
-(void)_repeatEndDateChanged:(id)arg1 ;
-(void)_neverRepeatButtonTapped:(id)arg1 ;
-(id)_repeatEndPickerCell;
-(void)reset;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(void)shortenCell:(id)arg1 ;
-(void)dealloc;
-(id)recurrenceDate;
@end

