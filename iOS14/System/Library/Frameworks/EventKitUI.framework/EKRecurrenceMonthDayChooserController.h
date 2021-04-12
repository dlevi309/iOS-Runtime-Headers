/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKRecurrenceGridChooserController.h>

@class NSMutableSet;

@interface EKRecurrenceMonthDayChooserController : EKRecurrenceGridChooserController {

	NSMutableSet* _daysOfTheMonthSet;
	BOOL _prohibitsMultipleDaysInMonthlyRecurrence;

}

@property (assign,nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence;              //@synthesize prohibitsMultipleDaysInMonthlyRecurrence=_prohibitsMultipleDaysInMonthlyRecurrence - In the implementation block
-(void)prepareForDisplay;
-(long long)frequency;
-(id)initWithDate:(id)arg1 ;
-(void)refreshCells;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(id)cellLabels;
-(long long)gridViewType;
-(void)selectCell:(id)arg1 atIndex:(long long)arg2 ;
-(BOOL)prohibitsMultipleDaysInMonthlyRecurrence;
-(void)setDaysOfTheMonth:(id)arg1 ;
-(id)daysOfTheMonth;
-(void)setProhibitsMultipleDaysInMonthlyRecurrence:(BOOL)arg1 ;
@end

