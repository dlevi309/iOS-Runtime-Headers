/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class NSNumber, NSMutableArray, NSArray;

@interface _HDClinicalIngestionResponseTimeMetricValue : NSObject {

	NSNumber* _min;
	NSNumber* _max;
	NSNumber* _median;
	NSMutableArray* _mutableResponseTimes;

}

@property (nonatomic,retain) NSMutableArray * mutableResponseTimes;              //@synthesize mutableResponseTimes=_mutableResponseTimes - In the implementation block
@property (nonatomic,readonly) NSArray * responseTimes; 
@property (nonatomic,copy,readonly) NSNumber * min;                              //@synthesize min=_min - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * median;                           //@synthesize median=_median - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * max;                              //@synthesize max=_max - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * analyticsString; 
-(NSNumber *)median;
-(id)init;
-(id)debugDescription;
-(NSNumber *)min;
-(void)_calculate;
-(NSNumber *)analyticsString;
-(NSNumber *)max;
-(NSArray *)responseTimes;
-(id)initWithResponseTime:(unsigned long long)arg1 ;
-(void)addResponseTime:(unsigned long long)arg1 ;
-(void)addResponseTimesFromMetricValue:(id)arg1 ;
-(NSMutableArray *)mutableResponseTimes;
-(void)setMutableResponseTimes:(NSMutableArray *)arg1 ;
@end

