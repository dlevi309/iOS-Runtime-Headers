/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSArray;

@interface GEOPlaceDailyHours : NSObject {

	NSRange _dayOfWeekRange;
	NSArray* _openIntervals;

}

@property (nonatomic,readonly) NSRange dayOfWeekRange;               //@synthesize dayOfWeekRange=_dayOfWeekRange - In the implementation block
@property (nonatomic,readonly) NSArray * openIntervals;              //@synthesize openIntervals=_openIntervals - In the implementation block
+(id)dailyHours:(id)arg1 forDays:(NSRange)arg2 ;
+(id)getPlaceDailyHoursForWeekday:(long long)arg1 placeDailyHours:(id)arg2 ;
-(id)description;
-(NSRange)dayOfWeekRange;
-(NSArray *)openIntervals;
@end

