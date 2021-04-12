/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class NSDate;

@interface TVPDateRange : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	double _durationInSeconds;

}

@property (nonatomic,readonly) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                      //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) double durationInSeconds;              //@synthesize durationInSeconds=_durationInSeconds - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithStartDate:(id)arg1 duration:(double)arg2 ;
-(BOOL)containsDate:(id)arg1 ;
-(double)durationInSeconds;
-(id)dateRangeByIntersectingDateRange:(id)arg1 ;
@end

