/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)prepareForDisplay;
-(long long)frequency;
-(id)initWithDate:(id)arg1 ;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(void)refreshCells;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(id)cellLabels;
-(long long)gridViewType;
-(void)selectCell:(id)arg1 atIndex:(long long)arg2 ;
-(void)setProhibitsMultipleMonthsInYearlyRecurrence:(BOOL)arg1 ;
-(id)tableViewCell;
-(BOOL)prohibitsMultipleMonthsInYearlyRecurrence;
-(NSArray *)monthsOfTheYear;
@end

