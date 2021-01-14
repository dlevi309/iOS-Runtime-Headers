/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKQuantity, HKQuantityType, NSDateComponents, NSDate;

@interface HKQuantityTypeDataSourceValue : NSObject {

	HKQuantity* _sumQuantity;
	HKQuantity* _minQuantity;
	HKQuantity* _maxQuantity;
	HKQuantity* _averageQuantity;
	HKQuantity* _durationQuantity;
	HKQuantity* _mostRecentQuantity;
	HKQuantityType* _quantityType;
	long long _recordCount;
	NSDateComponents* _statisticsInterval;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) HKQuantity * sumQuantity;                           //@synthesize sumQuantity=_sumQuantity - In the implementation block
@property (nonatomic,retain) HKQuantity * minQuantity;                           //@synthesize minQuantity=_minQuantity - In the implementation block
@property (nonatomic,retain) HKQuantity * maxQuantity;                           //@synthesize maxQuantity=_maxQuantity - In the implementation block
@property (nonatomic,retain) HKQuantity * averageQuantity;                       //@synthesize averageQuantity=_averageQuantity - In the implementation block
@property (nonatomic,retain) HKQuantity * durationQuantity;                      //@synthesize durationQuantity=_durationQuantity - In the implementation block
@property (nonatomic,retain) HKQuantity * mostRecentQuantity;                    //@synthesize mostRecentQuantity=_mostRecentQuantity - In the implementation block
@property (nonatomic,retain) HKQuantityType * quantityType;                      //@synthesize quantityType=_quantityType - In the implementation block
@property (assign,nonatomic) long long recordCount;                              //@synthesize recordCount=_recordCount - In the implementation block
@property (nonatomic,retain) NSDateComponents * statisticsInterval;              //@synthesize statisticsInterval=_statisticsInterval - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                   //@synthesize endDate=_endDate - In the implementation block
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(long long)recordCount;
-(NSDate *)startDate;
-(HKQuantity *)mostRecentQuantity;
-(HKQuantity *)averageQuantity;
-(HKQuantityType *)quantityType;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setRecordCount:(long long)arg1 ;
-(void)setAverageQuantity:(HKQuantity *)arg1 ;
-(void)setMostRecentQuantity:(HKQuantity *)arg1 ;
-(void)setSumQuantity:(HKQuantity *)arg1 ;
-(HKQuantity *)sumQuantity;
-(void)setQuantityType:(HKQuantityType *)arg1 ;
-(NSDateComponents *)statisticsInterval;
-(void)setStatisticsInterval:(NSDateComponents *)arg1 ;
-(HKQuantity *)minQuantity;
-(HKQuantity *)maxQuantity;
-(HKQuantity *)durationQuantity;
-(void)setDurationQuantity:(HKQuantity *)arg1 ;
-(void)setMinQuantity:(HKQuantity *)arg1 ;
-(void)setMaxQuantity:(HKQuantity *)arg1 ;
@end

