/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSMutableSet;

@interface CLSCalendarEventsCache : NSObject {

	NSMutableSet* _years;

}

@property (nonatomic,readonly) NSMutableSet * years;              //@synthesize years=_years - In the implementation block
-(id)init;
-(id)debugDescription;
-(id)eventsForStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)insertEvent:(id)arg1 ;
-(void)enumerateEventsFromStartDate:(id)arg1 toEndDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)eventsForDate:(id)arg1 ;
-(BOOL)hasEventsFromStartDate:(id)arg1 toEndDate:(id)arg2 ;
-(void)_enumerateDaysFromStartDate:(id)arg1 toEndDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_storeDayForDate:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(NSMutableSet *)years;
@end

