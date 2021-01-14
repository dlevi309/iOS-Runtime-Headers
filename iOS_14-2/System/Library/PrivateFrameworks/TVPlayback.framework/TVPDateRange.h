/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)endDate;
-(BOOL)containsDate:(id)arg1 ;
-(NSDate *)startDate;
-(id)initWithStartDate:(id)arg1 duration:(double)arg2 ;
-(id)description;
-(double)durationInSeconds;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)dateRangeByIntersectingDateRange:(id)arg1 ;
@end

