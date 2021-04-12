/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setMax:(NSNumber *)arg1 ;
-(NSNumber *)max;
-(unsigned long long)itemType;
-(void)setItemType:(unsigned long long)arg1 ;
-(NSNumber *)total;
-(NSNumber *)average;
-(void)setTotal:(NSNumber *)arg1 ;
-(unsigned long long)timePeriod;
-(void)setTimePeriod:(unsigned long long)arg1 ;
-(void)setAverage:(NSNumber *)arg1 ;
-(id)initEmptyDataSetWithTimePeriod:(unsigned long long)arg1 referenceDate:(id)arg2 ;
-(NSArray *)dataPoints;
-(double)averageAsPercentageOfMax;
-(id)initWithTimePeriod:(unsigned long long)arg1 itemType:(unsigned long long)arg2 total:(id)arg3 max:(id)arg4 average:(id)arg5 averageAsPercentageOfMax:(double)arg6 dataPoints:(id)arg7 ;
-(void)setAverageAsPercentageOfMax:(double)arg1 ;
-(void)setDataPoints:(NSArray *)arg1 ;
@end

