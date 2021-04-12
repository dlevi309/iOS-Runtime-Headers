/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class NSString, NSDateComponents;

@interface HKInteractiveChartTimePeriodData : NSObject <HKGraphSeriesChartData> {

	double _timePeriod;
	NSString* _timePeriodPrefix;
	NSDateComponents* _statisticsInterval;
	long long _recordCount;

}

@property (assign,nonatomic) double timePeriod;                                  //@synthesize timePeriod=_timePeriod - In the implementation block
@property (nonatomic,retain) NSString * timePeriodPrefix;                        //@synthesize timePeriodPrefix=_timePeriodPrefix - In the implementation block
@property (nonatomic,retain) NSDateComponents * statisticsInterval;              //@synthesize statisticsInterval=_statisticsInterval - In the implementation block
@property (assign,nonatomic) long long recordCount;                              //@synthesize recordCount=_recordCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStatisticsInterval:(NSDateComponents *)arg1 ;
-(NSDateComponents *)statisticsInterval;
-(double)timePeriod;
-(void)setTimePeriod:(double)arg1 ;
-(void)setRecordCount:(long long)arg1 ;
-(long long)recordCount;
-(NSString *)timePeriodPrefix;
-(void)setTimePeriodPrefix:(NSString *)arg1 ;
@end

