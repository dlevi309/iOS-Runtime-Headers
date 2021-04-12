/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)frequency;
-(id)initWithDate:(id)arg1 ;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(long long)numberOfRows;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(id)arg1 ;
-(BOOL)prohibitsMultipleDaysInMonthlyRecurrence;
-(id)_currentChooser;
-(void)_selectRow:(long long)arg1 ;
-(id)cellForRow:(long long)arg1 ;
-(double)heightForRow:(long long)arg1 ;
-(BOOL)drawBackgroundForRow:(long long)arg1 ;
-(void)rowTapped:(long long)arg1 ;
-(void)setProhibitsMultipleDaysInMonthlyRecurrence:(BOOL)arg1 ;
@end

