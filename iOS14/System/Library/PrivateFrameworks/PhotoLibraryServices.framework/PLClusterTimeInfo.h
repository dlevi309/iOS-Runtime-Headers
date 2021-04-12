/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSCalendar, NSDate;

@interface PLClusterTimeInfo : NSObject {

	NSCalendar* _calendar;
	double _endOfSameDayTimestamp;
	double _maximumNextDayTimestamp;
	NSDate* _latestUTCDate;

}

@property (nonatomic,readonly) NSCalendar * calendar;                       //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) double endOfSameDayTimestamp;                //@synthesize endOfSameDayTimestamp=_endOfSameDayTimestamp - In the implementation block
@property (nonatomic,readonly) double maximumNextDayTimestamp;              //@synthesize maximumNextDayTimestamp=_maximumNextDayTimestamp - In the implementation block
@property (nonatomic,retain,readonly) NSDate * latestUTCDate;               //@synthesize latestUTCDate=_latestUTCDate - In the implementation block
-(void)updateWithUTCDate:(id)arg1 localDate:(id)arg2 ;
-(NSCalendar *)calendar;
-(NSDate *)latestUTCDate;
-(void)_updateTimestampsWithUTCDate:(id)arg1 localDate:(id)arg2 ;
-(double)endOfSameDayTimestamp;
-(void)reset;
-(BOOL)utcDateBelongsInCluster:(id)arg1 ;
-(id)initWithCalendar:(id)arg1 ;
-(double)maximumNextDayTimestamp;
@end

