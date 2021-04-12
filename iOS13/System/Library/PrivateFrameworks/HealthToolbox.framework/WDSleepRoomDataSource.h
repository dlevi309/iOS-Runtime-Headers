/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <libobjc.A.dylib/HKSampleTypeUpdateControllerObserver.h>

@class HKUnitPreferenceController, WDProfile, HKSleepAnalysisDataSource, HKChartCache, HKSleepAnalysis, NSString;

@interface WDSleepRoomDataSource : NSObject <HKSampleTypeUpdateControllerObserver> {

	HKUnitPreferenceController* _unitController;
	WDProfile* _profile;
	unsigned long long _selectedContext;
	HKSleepAnalysisDataSource* _sleepAnalysisDataSource;
	HKChartCache* _chartCache;
	HKSleepAnalysis* _sleepAnalysis;

}

@property (nonatomic,retain) HKUnitPreferenceController * unitController;                      //@synthesize unitController=_unitController - In the implementation block
@property (nonatomic,retain) WDProfile * profile;                                              //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic) unsigned long long selectedContext;                               //@synthesize selectedContext=_selectedContext - In the implementation block
@property (nonatomic,retain) HKSleepAnalysisDataSource * sleepAnalysisDataSource;              //@synthesize sleepAnalysisDataSource=_sleepAnalysisDataSource - In the implementation block
@property (nonatomic,retain) HKChartCache * chartCache;                                        //@synthesize chartCache=_chartCache - In the implementation block
@property (nonatomic,retain) HKSleepAnalysis * sleepAnalysis;                                  //@synthesize sleepAnalysis=_sleepAnalysis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)availableContextTypes;
+(id)sleepContextItemForContextType:(unsigned long long)arg1 timeScope:(long long)arg2 sleepAnalysis:(id)arg3 ;
+(id)valueLabelFont;
+(id)unitLabelFont;
+(id)contextItemsForTimeScope:(long long)arg1 sleepAnalysis:(id)arg2 ;
+(id)detailViewForContextType:(unsigned long long)arg1 valueRange:(id)arg2 sleepAnalysis:(id)arg3 ;
-(WDProfile *)profile;
-(void)setProfile:(WDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(id)_durationFormatter;
-(unsigned long long)selectedContext;
-(void)setSelectedContext:(unsigned long long)arg1 ;
-(HKUnitPreferenceController *)unitController;
-(void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 ;
-(void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2 ;
-(id)durationDisplayType;
-(id)efficiencyDisplayType;
-(id)consistencyDisplayType;
-(id)displayTypesForContext:(unsigned long long)arg1 ;
-(void)_titlesAndValuesWithSleepDay:(id)arg1 sleepPeriod:(id)arg2 context:(id)arg3 result:(/*^block*/id)arg4 ;
-(HKSleepAnalysisDataSource *)sleepAnalysisDataSource;
-(id)_generateDurationSeries;
-(HKChartCache *)chartCache;
-(void)setChartCache:(HKChartCache *)arg1 ;
-(id)_goalLineStrokeStyle;
-(id)_genericAsleepInbedLegends;
-(id)_generateDailyTimePeriodSeriesWithLegendEntries:(id)arg1 ;
-(id)_inBedColor;
-(id)_asleepColor;
-(id)_lessSaturatedColorWithColor:(id)arg1 ;
-(id)_asleepGradientColors;
-(id)_inbedGradientColors;
-(void)startObservingHealthStore;
-(id)displayTypesForSelectedContext;
-(unsigned long long)selectContextAtIndex:(long long)arg1 ;
-(id)_countFormatter;
-(void)setUnitController:(HKUnitPreferenceController *)arg1 ;
-(void)setSleepAnalysisDataSource:(HKSleepAnalysisDataSource *)arg1 ;
-(HKSleepAnalysis *)sleepAnalysis;
-(void)setSleepAnalysis:(HKSleepAnalysis *)arg1 ;
@end

