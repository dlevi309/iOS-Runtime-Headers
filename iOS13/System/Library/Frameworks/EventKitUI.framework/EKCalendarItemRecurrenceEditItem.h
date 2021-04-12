/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(void)shortenCell:(id)arg1 ;
-(long long)repeatTypeForRecurrenceRule:(id)arg1 ;
-(BOOL)forceRefreshStartAndEndDatesOnSave;
-(id)stringForDate:(id)arg1 ;
-(id)recurrenceDate;
-(id)recurrenceTimeZone;
-(id)minRecurrenceEndDate;
-(id)_recurrenceTypeVC;
-(BOOL)_validateRecurrenceType:(id)arg1 ;
-(void)_updateRepeatEndDateCell;
-(BOOL)editItemViewControllerSave:(id)arg1 notify:(BOOL)arg2 ;
-(void)_repeatEndDateChanged:(id)arg1 ;
-(void)_neverRepeatButtonTapped:(id)arg1 ;
-(id)_repeatEndPickerCell;
@end

