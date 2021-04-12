/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKCalendarEditItem.h>

@class NSMutableArray;

@interface EKCalendarColorEditItem : EKCalendarEditItem {

	NSMutableArray* _cells;
	unsigned long long _checkedRow;

}

@property (nonatomic,readonly) NSMutableArray * cells;              //@synthesize cells=_cells - In the implementation block
-(void)reset;
-(NSMutableArray *)cells;
-(id)headerTitle;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(void)setCalendar:(id)arg1 store:(id)arg2 ;
-(BOOL)saveStateToCalendar:(id)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 ;
-(void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(id)_cellWithText:(id)arg1 ;
-(id)_cellForSymbolicColor:(id)arg1 ;
-(id)_cellForColor:(id)arg1 ;
@end

