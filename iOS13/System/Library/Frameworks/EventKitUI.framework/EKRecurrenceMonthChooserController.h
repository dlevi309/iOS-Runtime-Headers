/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKRecurrenceGridChooserController.h>

@class NSMutableSet, NSArray;

@interface EKRecurrenceMonthChooserController : EKRecurrenceGridChooserController {

	NSMutableSet* _monthsOfTheYearSet;
	BOOL _prohibitsMultipleMonthsInYearlyRecurrence;

}

@property (nonatomic,retain) NSArray * monthsOfTheYear; 
@property (assign,nonatomic) BOOL prohibitsMultipleMonthsInYearlyRecurrence;              //@synthesize prohibitsMultipleMonthsInYearlyRecurrence=_prohibitsMultipleMonthsInYearlyRecurrence - In the implementation block
-(id)initWithDate:(id)arg1 ;
-(void)prepareForDisplay;
-(id)tableViewCell;
-(long long)frequency;
-(BOOL)prohibitsMultipleMonthsInYearlyRecurrence;
-(void)setProhibitsMultipleMonthsInYearlyRecurrence:(BOOL)arg1 ;
-(void)refreshCells;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(id)cellLabels;
-(long long)gridViewType;
-(void)selectCell:(id)arg1 atIndex:(long long)arg2 ;
-(NSArray *)monthsOfTheYear;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
@end

