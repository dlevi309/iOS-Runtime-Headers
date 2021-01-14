/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKRecurrenceChooserController.h>

@class NSMutableArray, NSArray;

@interface EKRecurrenceWeekdayChooserController : EKRecurrenceChooserController {

	NSMutableArray* _selectedRows;
	NSMutableArray* _cells;
	NSArray* _daysOfTheWeek;

}

@property (nonatomic,retain) NSMutableArray * cells;               //@synthesize cells=_cells - In the implementation block
@property (nonatomic,retain) NSArray * daysOfTheWeek;              //@synthesize daysOfTheWeek=_daysOfTheWeek - In the implementation block
-(NSMutableArray *)cells;
-(long long)frequency;
-(id)initWithDate:(id)arg1 ;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(long long)numberOfRows;
-(id)cellForRow:(long long)arg1 ;
-(double)heightForRow:(long long)arg1 ;
-(void)rowTapped:(long long)arg1 ;
-(void)_setCell:(id)arg1 selected:(BOOL)arg2 ;
-(int)_dayMask;
-(void)setCells:(NSMutableArray *)arg1 ;
-(NSArray *)daysOfTheWeek;
@end

