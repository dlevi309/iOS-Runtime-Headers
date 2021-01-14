/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSMutableSet;

@interface CLSCalendarEventsCache : NSObject {

	NSMutableSet* _years;

}

@property (nonatomic,readonly) NSMutableSet * years;              //@synthesize years=_years - In the implementation block
-(id)eventsForStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)init;
-(NSMutableSet *)years;
-(id)debugDescription;
-(void)enumerateEventsFromStartDate:(id)arg1 toEndDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)insertEvent:(id)arg1 ;
-(id)eventsForDate:(id)arg1 ;
-(BOOL)hasEventsFromStartDate:(id)arg1 toEndDate:(id)arg2 ;
-(void)_enumerateDaysFromStartDate:(id)arg1 toEndDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_storeDayForDate:(id)arg1 createIfNeeded:(BOOL)arg2 ;
@end

