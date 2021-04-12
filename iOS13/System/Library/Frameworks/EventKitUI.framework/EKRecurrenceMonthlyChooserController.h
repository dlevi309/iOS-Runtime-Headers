/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKRecurrenceChooserController.h>

@protocol EKRecurrenceChooserControllerDelegate;
@class EKRecurrenceMonthDayChooserController, EKRecurrenceOrdinalChooserController, UITableViewCell;

@interface EKRecurrenceMonthlyChooserController : EKRecurrenceChooserController {

	EKRecurrenceMonthDayChooserController* _monthDayChooser;
	EKRecurrenceOrdinalChooserController* _ordinalChooser;
	id<EKRecurrenceChooserControllerDelegate> _delegate;
	long long _selectedRow;
	UITableViewCell* _onEachCell;
	UITableViewCell* _onTheCell;

}

@property (assign,nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence; 
-(void)setDelegate:(id)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(id)backgroundColor;
-(void)setBackgroundColor:(id)arg1 ;
-(long long)numberOfRows;
-(long long)frequency;
-(BOOL)prohibitsMultipleDaysInMonthlyRecurrence;
-(void)setProhibitsMultipleDaysInMonthlyRecurrence:(BOOL)arg1 ;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(id)_currentChooser;
-(void)_selectRow:(long long)arg1 ;
-(id)cellForRow:(long long)arg1 ;
-(double)heightForRow:(long long)arg1 ;
-(BOOL)drawBackgroundForRow:(long long)arg1 ;
-(void)rowTapped:(long long)arg1 ;
@end

