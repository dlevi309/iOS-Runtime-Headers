/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKRecurrenceGridChooserController.h>

@class NSMutableSet;

@interface EKRecurrenceMonthDayChooserController : EKRecurrenceGridChooserController {

	NSMutableSet* _daysOfTheMonthSet;
	BOOL _prohibitsMultipleDaysInMonthlyRecurrence;

}

@property (assign,nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence;              //@synthesize prohibitsMultipleDaysInMonthlyRecurrence=_prohibitsMultipleDaysInMonthlyRecurrence - In the implementation block
-(id)initWithDate:(id)arg1 ;
-(void)prepareForDisplay;
-(long long)frequency;
-(BOOL)prohibitsMultipleDaysInMonthlyRecurrence;
-(void)setProhibitsMultipleDaysInMonthlyRecurrence:(BOOL)arg1 ;
-(id)daysOfTheMonth;
-(void)setDaysOfTheMonth:(id)arg1 ;
-(void)refreshCells;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(id)cellLabels;
-(long long)gridViewType;
-(void)selectCell:(id)arg1 atIndex:(long long)arg2 ;
@end

