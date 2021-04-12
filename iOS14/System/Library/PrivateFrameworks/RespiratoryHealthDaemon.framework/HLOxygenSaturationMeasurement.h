/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealthDaemon.framework/RespiratoryHealthDaemon
*/


@class NSDateInterval, NSNumber, HLHeartRateData;

@interface HLOxygenSaturationMeasurement : NSObject {

	NSDateInterval* _dateInterval;
	NSNumber* _oxygenSaturationPercentage;
	HLHeartRateData* _averageHeartRateData;
	NSNumber* _pressureInKilopascals;

}

@property (nonatomic,retain) NSDateInterval * dateInterval;                       //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,retain) NSNumber * oxygenSaturationPercentage;               //@synthesize oxygenSaturationPercentage=_oxygenSaturationPercentage - In the implementation block
@property (nonatomic,retain) HLHeartRateData * averageHeartRateData;              //@synthesize averageHeartRateData=_averageHeartRateData - In the implementation block
@property (nonatomic,retain) NSNumber * pressureInKilopascals;                    //@synthesize pressureInKilopascals=_pressureInKilopascals - In the implementation block
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(NSNumber *)oxygenSaturationPercentage;
-(void)setOxygenSaturationPercentage:(NSNumber *)arg1 ;
-(HLHeartRateData *)averageHeartRateData;
-(void)setAverageHeartRateData:(HLHeartRateData *)arg1 ;
-(NSNumber *)pressureInKilopascals;
-(void)setPressureInKilopascals:(NSNumber *)arg1 ;
@end

