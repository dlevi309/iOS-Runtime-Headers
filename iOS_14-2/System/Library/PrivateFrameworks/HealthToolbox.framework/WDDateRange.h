/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class NSDate;

@interface WDDateRange : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
+(id)dateRangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)dateRangeWithTimePeriod:(long long)arg1 anchorDate:(id)arg2 ;
-(NSDate *)endDate;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)startDate;
-(id)description;
-(BOOL)dateInRange:(id)arg1 ;
-(id)initWithTimePeriod:(long long)arg1 anchorDate:(id)arg2 ;
-(id)_getStartDateFromAnchorDate:(id)arg1 timePeriod:(long long)arg2 ;
-(id)_getEndDateFromStartDate:(id)arg1 timePeriod:(long long)arg2 ;
@end

