/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(HKQuantityType *)quantityType;
-(void)setQuantityType:(HKQuantityType *)arg1 ;
-(void)setStatisticsInterval:(NSDateComponents *)arg1 ;
-(NSDateComponents *)statisticsInterval;
-(HKQuantity *)sumQuantity;
-(HKQuantity *)averageQuantity;
-(HKQuantity *)mostRecentQuantity;
-(void)setAverageQuantity:(HKQuantity *)arg1 ;
-(void)setMostRecentQuantity:(HKQuantity *)arg1 ;
-(void)setSumQuantity:(HKQuantity *)arg1 ;
-(void)setRecordCount:(long long)arg1 ;
-(long long)recordCount;
-(void)setDurationQuantity:(HKQuantity *)arg1 ;
-(void)setMinQuantity:(HKQuantity *)arg1 ;
-(void)setMaxQuantity:(HKQuantity *)arg1 ;
-(HKQuantity *)durationQuantity;
-(HKQuantity *)minQuantity;
-(HKQuantity *)maxQuantity;
@end

