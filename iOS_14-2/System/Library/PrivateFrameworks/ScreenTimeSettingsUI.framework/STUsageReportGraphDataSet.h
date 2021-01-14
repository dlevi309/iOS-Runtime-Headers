/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/


@class NSNumber, NSArray;

@interface STUsageReportGraphDataSet : NSObject {

	unsigned long long _timePeriod;
	unsigned long long _itemType;
	NSNumber* _total;
	NSNumber* _max;
	NSNumber* _average;
	double _averageAsPercentageOfMax;
	NSArray* _dataPoints;

}

@property (assign,nonatomic) unsigned long long timePeriod;                //@synthesize timePeriod=_timePeriod - In the implementation block
@property (assign,nonatomic) unsigned long long itemType;                  //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,copy) NSNumber * total;                               //@synthesize total=_total - In the implementation block
@property (nonatomic,copy) NSNumber * max;                                 //@synthesize max=_max - In the implementation block
@property (nonatomic,copy) NSNumber * average;                             //@synthesize average=_average - In the implementation block
@property (assign,nonatomic) double averageAsPercentageOfMax;              //@synthesize averageAsPercentageOfMax=_averageAsPercentageOfMax - In the implementation block
@property (nonatomic,copy) NSArray * dataPoints;                           //@synthesize dataPoints=_dataPoints - In the implementation block
-(NSNumber *)average;
-(void)setTotal:(NSNumber *)arg1 ;
-(NSNumber *)total;
-(void)setAverage:(NSNumber *)arg1 ;
-(void)setItemType:(unsigned long long)arg1 ;
-(unsigned long long)itemType;
-(NSNumber *)max;
-(void)setMax:(NSNumber *)arg1 ;
-(void)setTimePeriod:(unsigned long long)arg1 ;
-(unsigned long long)timePeriod;
-(id)initEmptyDataSetWithTimePeriod:(unsigned long long)arg1 referenceDate:(id)arg2 ;
-(NSArray *)dataPoints;
-(double)averageAsPercentageOfMax;
-(id)initWithTimePeriod:(unsigned long long)arg1 itemType:(unsigned long long)arg2 total:(id)arg3 max:(id)arg4 average:(id)arg5 averageAsPercentageOfMax:(double)arg6 dataPoints:(id)arg7 ;
-(void)setAverageAsPercentageOfMax:(double)arg1 ;
-(void)setDataPoints:(NSArray *)arg1 ;
@end

