/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class HKUnit, NSDateComponents, NSString;

@interface HKInteractiveChartSinglePointData : NSObject <HKGraphSeriesChartData> {

	BOOL _representsRange;
	double _value;
	HKUnit* _unit;
	long long _recordCount;
	double _minValue;
	double _maxValue;
	NSDateComponents* _statisticsInterval;

}

@property (assign,nonatomic) double value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) HKUnit * unit;                                      //@synthesize unit=_unit - In the implementation block
@property (assign,nonatomic) BOOL representsRange;                               //@synthesize representsRange=_representsRange - In the implementation block
@property (assign,nonatomic) long long recordCount;                              //@synthesize recordCount=_recordCount - In the implementation block
@property (assign,nonatomic) double minValue;                                    //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;                                    //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,retain) NSDateComponents * statisticsInterval;              //@synthesize statisticsInterval=_statisticsInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMaxValue:(double)arg1 ;
-(long long)recordCount;
-(void)setValue:(double)arg1 ;
-(NSString *)description;
-(void)setRecordCount:(long long)arg1 ;
-(HKUnit *)unit;
-(void)setMinValue:(double)arg1 ;
-(void)setUnit:(HKUnit *)arg1 ;
-(double)maxValue;
-(NSDateComponents *)statisticsInterval;
-(BOOL)representsRange;
-(void)setRepresentsRange:(BOOL)arg1 ;
-(double)minValue;
-(double)value;
-(void)setStatisticsInterval:(NSDateComponents *)arg1 ;
@end

