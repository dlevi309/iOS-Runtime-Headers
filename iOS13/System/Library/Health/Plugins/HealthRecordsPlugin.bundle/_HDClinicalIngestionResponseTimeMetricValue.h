/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)debugDescription;
-(NSNumber *)max;
-(NSNumber *)min;
-(void)_calculate;
-(NSNumber *)median;
-(NSNumber *)analyticsString;
-(NSArray *)responseTimes;
-(id)initWithResponseTime:(unsigned long long)arg1 ;
-(void)addResponseTime:(unsigned long long)arg1 ;
-(void)addResponseTimesFromMetricValue:(id)arg1 ;
-(NSMutableArray *)mutableResponseTimes;
-(void)setMutableResponseTimes:(NSMutableArray *)arg1 ;
@end

