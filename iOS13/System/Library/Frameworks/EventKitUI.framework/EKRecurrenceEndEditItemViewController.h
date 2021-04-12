/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/EKCellShortener.h>

@class PreferencesValueCell, NSDate, UITableView, UIDatePicker, UITableViewCell, NSString;

@interface EKRecurrenceEndEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKCellShortener> {

	PreferencesValueCell* _dateCell;
	NSDate* _preNeverEndDate;
	NSDate* _minimumEndDate;
	int _shorteningStatus;
	unsigned _updatingPicker : 1;
	UITableView* _table;
	UIDatePicker* _datePicker;
	UITableViewCell* _datePickerCell;
	NSDate* _repeatEndDate;
	NSDate* _bestInitialDate;

}

@property (nonatomic,copy) NSDate * repeatEndDate;                  //@synthesize repeatEndDate=_repeatEndDate - In the implementation block
@property (nonatomic,copy) NSDate * bestInitialDate;                //@synthesize bestInitialDate=_bestInitialDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_neverLocalizedString;
-(void)dealloc;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)datePickerChanged:(id)arg1 ;
-(void)shortenCell:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)applyMinimumEndDateToPicker;
-(void)updatePicker;
-(void)_localeChanged;
-(id)_stringForEndDate;
-(id)_cellForRow:(long long)arg1 ;
-(void)_updateSelectionForCell:(id)arg1 atRow:(long long)arg2 ;
-(void)setRepeatEndDate:(NSDate *)arg1 ;
-(id)_endDateStringForCurrentShorteningStatus;
-(void)setMinimumEndDate:(id)arg1 ;
-(BOOL)fitsPopoverWhenKeyboardActive;
-(NSDate *)repeatEndDate;
-(NSDate *)bestInitialDate;
-(void)setBestInitialDate:(NSDate *)arg1 ;
@end

