/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/


@class SUAutoInstallForecast, NSCalendar, NSDate;

@interface _SUAutoInstallForecastDateCache : NSObject {

	long long _scheduleType;
	SUAutoInstallForecast* _weak_forecast;
	NSCalendar* _calendar;
	NSDate* _roundedStartDate;
	NSDate* _roundedEndDate;
	BOOL _parsed;

}

@property (nonatomic,readonly) long long scheduleType; 
@property (nonatomic,readonly) NSDate * roundedStartTime; 
@property (nonatomic,readonly) NSDate * roundedEndTime; 
@property (nonatomic,readonly) NSCalendar * calendar; 
-(NSCalendar *)calendar;
-(id)description;
-(void)dealloc;
-(long long)scheduleType;
-(void)_parseForecast;
-(id)_componentsFromDate:(id)arg1 ;
-(void)_computeTonightRangeRelativeToDate:(id)arg1 extraDayOffset:(long long)arg2 outStart:(id*)arg3 outEnd:(id*)arg4 ;
-(BOOL)_isStart:(id)arg1 end:(id)arg2 withinDateRange:(id)arg3 end:(id)arg4 ;
-(id)initWithForecast:(id)arg1 ;
-(NSDate *)roundedStartTime;
-(NSDate *)roundedEndTime;
@end

