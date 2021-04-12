/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeriesDataSource.h>
#import <libobjc.A.dylib/HKHistogramAxisDimensionDataSource.h>

@protocol HKHistogramChartDataSourceDataFetchObserver;
@class HKHealthStore, HKUnitPreferenceController, NSString, NSPredicate, HKGraphSeriesDataBlock, NSDate, HKValueRange, HKQuantitySample, NSArray, HKQuantityType, HKUnit;

@interface HKHistogramChartDataSource : HKGraphSeriesDataSource <HKHistogramAxisDimensionDataSource> {

	unsigned char _didExecuteQuery;
	id<HKHistogramChartDataSourceDataFetchObserver> _fetchObserver;
	unsigned long long _binningMode;
	unsigned long long _binCalculation;
	unsigned long long _dateBasedBinModeConfig;
	HKHealthStore* _healthStore;
	HKUnitPreferenceController* _unitPreferenceController;
	NSString* _quantityIdentifier;
	NSPredicate* _predicate;
	HKGraphSeriesDataBlock* _dataBlock;
	NSDate* _samplesStartDate;
	NSDate* _samplesEndDate;
	HKValueRange* _xAxisRange;
	HKValueRange* _yAxisRange;
	unsigned long long _numberOfBins;
	unsigned long long _binWidth;
	/*^block*/id _dataBlockBuilder;
	/*^block*/id _xAxisStringForLocation;
	HKQuantitySample* _minimumSample;
	HKQuantitySample* _maximumSample;
	NSArray* _quantityValueRanges;

}

@property (assign,nonatomic) unsigned long long binningMode;                                                    //@synthesize binningMode=_binningMode - In the implementation block
@property (assign,nonatomic) unsigned long long binCalculation;                                                 //@synthesize binCalculation=_binCalculation - In the implementation block
@property (assign,nonatomic) unsigned long long dateBasedBinModeConfig;                                         //@synthesize dateBasedBinModeConfig=_dateBasedBinModeConfig - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfBins;                                                   //@synthesize numberOfBins=_numberOfBins - In the implementation block
@property (assign,nonatomic) unsigned long long binWidth;                                                       //@synthesize binWidth=_binWidth - In the implementation block
@property (assign,nonatomic) unsigned char didExecuteQuery;                                                     //@synthesize didExecuteQuery=_didExecuteQuery - In the implementation block
@property (nonatomic,retain) HKQuantitySample * minimumSample;                                                  //@synthesize minimumSample=_minimumSample - In the implementation block
@property (nonatomic,retain) HKQuantitySample * maximumSample;                                                  //@synthesize maximumSample=_maximumSample - In the implementation block
@property (nonatomic,retain) NSArray * quantityValueRanges;                                                     //@synthesize quantityValueRanges=_quantityValueRanges - In the implementation block
@property (assign,nonatomic,__weak) id<HKHistogramChartDataSourceDataFetchObserver> fetchObserver;              //@synthesize fetchObserver=_fetchObserver - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                                                     //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKUnitPreferenceController * unitPreferenceController;                           //@synthesize unitPreferenceController=_unitPreferenceController - In the implementation block
@property (nonatomic,readonly) NSString * quantityIdentifier;                                                   //@synthesize quantityIdentifier=_quantityIdentifier - In the implementation block
@property (nonatomic,readonly) HKQuantityType * quantityType; 
@property (nonatomic,readonly) HKUnit * unit; 
@property (nonatomic,readonly) NSPredicate * predicate;                                                         //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) NSArray * sortDescriptors; 
@property (nonatomic,retain) HKGraphSeriesDataBlock * dataBlock;                                                //@synthesize dataBlock=_dataBlock - In the implementation block
@property (nonatomic,retain) NSDate * samplesStartDate;                                                         //@synthesize samplesStartDate=_samplesStartDate - In the implementation block
@property (nonatomic,retain) NSDate * samplesEndDate;                                                           //@synthesize samplesEndDate=_samplesEndDate - In the implementation block
@property (nonatomic,readonly) HKValueRange * xAxisRange;                                                       //@synthesize xAxisRange=_xAxisRange - In the implementation block
@property (nonatomic,readonly) HKValueRange * yAxisRange;                                                       //@synthesize yAxisRange=_yAxisRange - In the implementation block
@property (nonatomic,copy) id dataBlockBuilder;                                                                 //@synthesize dataBlockBuilder=_dataBlockBuilder - In the implementation block
@property (nonatomic,copy) id xAxisStringForLocation;                                                           //@synthesize xAxisStringForLocation=_xAxisStringForLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_daysInWeekXValueRange;
+(id)_hoursInDayXValueRange;
-(id)_query;
-(HKHealthStore *)healthStore;
-(id)_daysOfTheWeek;
-(NSPredicate *)predicate;
-(id)cachedBlockForPath:(SCD_Struct_HK1)arg1 context:(id)arg2 ;
-(HKQuantityType *)quantityType;
-(NSArray *)sortDescriptors;
-(void)fetchData;
-(HKUnit *)unit;
-(id)_dayNameFormatter;
-(id)_displayType;
-(unsigned long long)binWidth;
-(HKUnitPreferenceController *)unitPreferenceController;
-(id)_initWithQuantityTypeIdentifier:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 predicate:(id)arg4 xAxisRange:(id)arg5 yAxisRange:(id)arg6 binMode:(unsigned long long)arg7 binCalculation:(unsigned long long)arg8 binWidth:(double)arg9 numberOfBins:(unsigned long long)arg10 dateBasedBinModeConfig:(unsigned long long)arg11 ;
-(NSString *)quantityIdentifier;
-(id)xAxisStringForLocation;
-(unsigned long long)binningMode;
-(NSArray *)quantityValueRanges;
-(unsigned long long)dateBasedBinModeConfig;
-(id)_dayXAxisStringForLocation:(id)arg1 ;
-(id)_hourXAxisStringForLocation:(id)arg1 ;
-(unsigned char)didExecuteQuery;
-(void)setDidExecuteQuery:(unsigned char)arg1 ;
-(id<HKHistogramChartDataSourceDataFetchObserver>)fetchObserver;
-(id)dataBlockBuilder;
-(id)_samplesSortedByQuantity:(id)arg1 ;
-(id)_buildQuantityValueRangesFromSortedSamples:(id)arg1 ;
-(void)setQuantityValueRanges:(NSArray *)arg1 ;
-(void)setNumberOfBins:(unsigned long long)arg1 ;
-(id)buildBinsWithSamples:(id)arg1 ;
-(id)calculateBinValueForBins:(id)arg1 usingCalculation:(unsigned long long)arg2 ;
-(id)buildGraphSeriesDataBlockWithCalculatedBinValues:(id)arg1 ;
-(id)_dateBasedXValueRangeForConfig:(unsigned long long)arg1 ;
-(unsigned long long)binCalculation;
-(unsigned long long)numberOfBins;
-(unsigned long long)_binIndexForSample:(id)arg1 ;
-(id)xAxisStringForLocation:(id)arg1 ;
-(void)setSamplesStartDate:(NSDate *)arg1 ;
-(void)setSamplesEndDate:(NSDate *)arg1 ;
-(id)buildGraphSeriesDataBlockFromSamples:(id)arg1 ;
-(void)setDataBlock:(HKGraphSeriesDataBlock *)arg1 ;
-(void)didCompleteFetch;
-(unsigned long long)_normalBinIndexForSample:(id)arg1 ;
-(unsigned long long)_dateBasedBinIndexForSample:(id)arg1 ;
-(HKGraphSeriesDataBlock *)dataBlock;
-(unsigned long long)_dayIndexForDayName:(id)arg1 ;
-(id)_hourOfTheDayFormatter;
-(id)_dayNameFromDayIndex:(unsigned long long)arg1 ;
-(id)stringForLocation:(id)arg1 ;
-(id)initWithQuantityTypeIdentifier:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 predicate:(id)arg4 yAxisRange:(id)arg5 binWidth:(double)arg6 ;
-(id)initWithQuantityTypeIdentifier:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 predicate:(id)arg4 yAxisRange:(id)arg5 binCalculation:(unsigned long long)arg6 dateBasedBinModeConfig:(unsigned long long)arg7 ;
-(SCD_Struct_HK1)blockPathForX:(id)arg1 zoom:(long long)arg2 ;
-(void)blocksRequestedFromPath:(SCD_Struct_HK1)arg1 toPath:(SCD_Struct_HK1)arg2 priorityDelegate:(id)arg3 ;
-(id)_hourNameFromHourIndex:(unsigned long long)arg1 ;
-(void)setFetchObserver:(id<HKHistogramChartDataSourceDataFetchObserver>)arg1 ;
-(void)setBinningMode:(unsigned long long)arg1 ;
-(void)setBinCalculation:(unsigned long long)arg1 ;
-(void)setDateBasedBinModeConfig:(unsigned long long)arg1 ;
-(NSDate *)samplesStartDate;
-(NSDate *)samplesEndDate;
-(HKValueRange *)xAxisRange;
-(HKValueRange *)yAxisRange;
-(void)setBinWidth:(unsigned long long)arg1 ;
-(void)setDataBlockBuilder:(id)arg1 ;
-(void)setXAxisStringForLocation:(id)arg1 ;
-(HKQuantitySample *)minimumSample;
-(void)setMinimumSample:(HKQuantitySample *)arg1 ;
-(HKQuantitySample *)maximumSample;
-(void)setMaximumSample:(HKQuantitySample *)arg1 ;
@end
