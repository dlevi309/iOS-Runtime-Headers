/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(NSCalendar *)calendar;
-(void)_parseForecast;
-(id)_componentsFromDate:(id)arg1 ;
-(void)_computeTonightRangeRelativeToDate:(id)arg1 extraDayOffset:(long long)arg2 outStart:(id*)arg3 outEnd:(id*)arg4 ;
-(BOOL)_isStart:(id)arg1 end:(id)arg2 withinDateRange:(id)arg3 end:(id)arg4 ;
-(id)initWithForecast:(id)arg1 ;
-(long long)scheduleType;
-(NSDate *)roundedStartTime;
-(NSDate *)roundedEndTime;
@end

