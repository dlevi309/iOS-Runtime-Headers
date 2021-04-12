/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BCSMeasurement.h>

@class NSDate, NSArray;

@interface BCSTimingMeasurement : BCSMeasurement {

	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _realTimeMeasurementHandlers;
	long long _timingMeasurementType;

}

@property (retain) NSDate * startDate;                                             //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                                               //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSArray * realTimeMeasurementHandlers;              //@synthesize realTimeMeasurementHandlers=_realTimeMeasurementHandlers - In the implementation block
@property (nonatomic,readonly) long long timingMeasurementType;                    //@synthesize timingMeasurementType=_timingMeasurementType - In the implementation block
@property (nonatomic,readonly) double duration; 
+(id)newTimingMeasurement:(long long)arg1 withHandlers:(id)arg2 ;
-(NSDate *)endDate;
-(void)end;
-(void)begin;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(double)duration;
-(long long)timingMeasurementType;
-(id)_initWithType:(long long)arg1 handlers:(id)arg2 ;
-(NSArray *)realTimeMeasurementHandlers;
@end

