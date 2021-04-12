/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKSeriesBuilder.h>

@class NSDate, NSMutableDictionary, NSMutableData;

@interface HKHeartbeatSeriesBuilder : HKSeriesBuilder {

	NSDate* _startDate;
	NSMutableDictionary* _mutableMetadata;
	NSMutableData* _mutableHeartbeats;
	unsigned long long _count;
	double _lastHeartbeatTimeInterval;

}
+(unsigned long long)maximumCount;
-(void)finishSeriesWithCompletion:(/*^block*/id)arg1 ;
-(void)_resourceQueue_addHeartbeatWithTimeIntervalSinceSeriesStartDate:(double)arg1 precededByGap:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_resourceQueue_finishSeriesWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithHealthStore:(id)arg1 device:(id)arg2 startDate:(id)arg3 ;
-(void)addHeartbeatWithTimeIntervalSinceSeriesStartDate:(double)arg1 precededByGap:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)discard;
-(void)_resourceQueue_addMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

