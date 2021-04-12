/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class NSArray, NSDate, NSHashTable;

@interface HUCalendarScrubberDataSource : NSObject {

	NSArray* _dates;
	NSDate* _startDate;
	NSDate* _endDate;
	NSHashTable* _changeObservers;

}

@property (nonatomic,retain) NSArray * dates;                            //@synthesize dates=_dates - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSHashTable * changeObservers;              //@synthesize changeObservers=_changeObservers - In the implementation block
-(id)init;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSArray *)dates;
-(void)setDates:(NSArray *)arg1 ;
-(void)addChangeObserver:(id)arg1 ;
-(void)removeChangeObserver:(id)arg1 ;
-(NSHashTable *)changeObservers;
-(void)setChangeObservers:(NSHashTable *)arg1 ;
-(unsigned long long)totalNumberOfWeeks;
-(long long)dayOfMonthForItemAtIndexPath:(id)arg1 ;
-(id)shortMonthNameForItemAtIndexPath:(id)arg1 ;
-(id)dayOfWeekForItemAtIndexPath:(id)arg1 ;
-(BOOL)eventExistsForItemAtIndexPath:(id)arg1 ;
-(id)initWithDates:(id)arg1 ;
-(id)indexPathForDate:(id)arg1 ;
-(id)dateAtIndexPath:(id)arg1 ;
-(void)reloadWithDates:(id)arg1 ;
-(void)_updateDateBoundariesIfNeeded;
-(BOOL)eventExistsOnDate:(id)arg1 ;
@end

