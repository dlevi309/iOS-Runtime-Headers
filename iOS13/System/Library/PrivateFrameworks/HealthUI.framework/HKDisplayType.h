/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSPredicate, NSDictionary, NSString, UIImage, NSArray, NSAttributedString, HKDisplayTypeChartingRules, HKValueRange, HKObjectType, HKDisplayCategory, NSSet, HKSampleType;

@interface HKDisplayType : NSObject <NSCopying> {

	NSPredicate* _defaultChartingPredicate;
	NSDictionary* _chartingPredicatesByTimeScope;
	unsigned long long _portraitPresentationOptions;
	NSDictionary* _portraitPresentationOptionOverrides;
	NSString* _displayNameKey;
	NSString* _labelDisplayNameKey;
	NSString* _shortenedDisplayNameKey;
	NSString* _embeddedDisplayNameKey;
	NSString* _titleEmbeddedDisplayNameKey;
	NSString* _keywordsNameKey;
	NSString* _summaryNameKey;
	NSString* _summaryPairedWatchNameKey;
	NSString* _cautionaryTextKey;
	NSString* _unitChangeCautionaryTextKey;
	NSString* _healthKitLocalizationTableNameOverride;
	NSString* _listIconImageNameOverride;
	UIImage* _listIconOverride;
	NSString* _detailImageName;
	UIImage* _detailImage;
	BOOL _summaryAttributionHasLink;
	BOOL _showAllDataHierarchically;
	BOOL _shouldDisplayUnitStringOnYAxis;
	BOOL _disallowsSourceReordering;
	BOOL _excludeFromDataTypeSearch;
	BOOL _useSecondsWhenDisplayingDuration;
	BOOL _shouldUseSingleSecondaryValue;
	BOOL __wheelchairUser;
	long long _displayTypeIdentifier;
	long long _categoryIdentifier;
	NSArray* _secondaryCategoryIdentifiers;
	double _scalarValue;
	NSDictionary* _unitNameKeyOverrides;
	NSAttributedString* _attributedSummaryAttribution;
	HKDisplayTypeChartingRules* _chartingRules;
	unsigned long long _statisticsMergeStrategy;
	HKValueRange* _defaultAxisRangeOverride;
	HKObjectType* _objectType;

}

@property (readonly) long long wd_heartRateDisplayTypeContext; 
@property (setter=_setWheelchairUser:,getter=_isWheelchairUser) BOOL _wheelchairUser;              //@synthesize _wheelchairUser=__wheelchairUser - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayNameKey;                                     //@synthesize displayNameKey=_displayNameKey - In the implementation block
@property (nonatomic,readonly) long long displayTypeIdentifier;                                    //@synthesize displayTypeIdentifier=_displayTypeIdentifier - In the implementation block
@property (nonatomic,readonly) long long categoryIdentifier;                                       //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * secondaryCategoryIdentifiers;                             //@synthesize secondaryCategoryIdentifiers=_secondaryCategoryIdentifiers - In the implementation block
@property (nonatomic,readonly) HKDisplayCategory * displayCategory; 
@property (nonatomic,readonly) NSArray * secondaryDisplayCategories; 
@property (nonatomic,readonly) NSString * labelDisplayName; 
@property (nonatomic,readonly) double scalarValue;                                                 //@synthesize scalarValue=_scalarValue - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * shortenedDisplayName; 
@property (nonatomic,readonly) NSString * embeddedDisplayName; 
@property (nonatomic,readonly) NSString * titleEmbeddedDisplayName; 
@property (nonatomic,readonly) NSDictionary * unitNameKeyOverrides;                                //@synthesize unitNameKeyOverrides=_unitNameKeyOverrides - In the implementation block
@property (nonatomic,readonly) NSString * localizationTableNameOverride; 
@property (nonatomic,readonly) UIImage * detailImage; 
@property (nonatomic,readonly) UIImage * unitIcon; 
@property (nonatomic,readonly) UIImage * displayTypeIcon; 
@property (nonatomic,readonly) UIImage * shareIcon; 
@property (nonatomic,readonly) UIImage * listIcon; 
@property (nonatomic,readonly) NSString * listIconImageName; 
@property (nonatomic,readonly) NSSet * keywords; 
@property (nonatomic,readonly) NSString * summary; 
@property (nonatomic,readonly) NSString * summaryForPairedWatch; 
@property (nonatomic,readonly) NSAttributedString * attributedSummaryAttribution;                  //@synthesize attributedSummaryAttribution=_attributedSummaryAttribution - In the implementation block
@property (nonatomic,readonly) BOOL summaryAttributionHasLink;                                     //@synthesize summaryAttributionHasLink=_summaryAttributionHasLink - In the implementation block
@property (nonatomic,readonly) NSString * cautionaryText; 
@property (nonatomic,readonly) BOOL unitPreferencesRequireChangeConfirmation; 
@property (nonatomic,readonly) NSString * unitChangeCautionaryText; 
@property (nonatomic,readonly) BOOL showAllDataHierarchically;                                     //@synthesize showAllDataHierarchically=_showAllDataHierarchically - In the implementation block
@property (nonatomic,readonly) HKDisplayTypeChartingRules * chartingRules;                         //@synthesize chartingRules=_chartingRules - In the implementation block
@property (nonatomic,readonly) BOOL allowsManualEntry; 
@property (assign,nonatomic) BOOL shouldDisplayUnitStringOnYAxis;                                  //@synthesize shouldDisplayUnitStringOnYAxis=_shouldDisplayUnitStringOnYAxis - In the implementation block
@property (nonatomic,readonly) BOOL supportsAssociatedSamples; 
@property (nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) BOOL anyPortraitChartDefinition; 
@property (nonatomic,readonly) BOOL canBecomeFavorite; 
@property (nonatomic,readonly) BOOL disallowsSourceReordering;                                     //@synthesize disallowsSourceReordering=_disallowsSourceReordering - In the implementation block
@property (nonatomic,readonly) unsigned long long statisticsMergeStrategy;                         //@synthesize statisticsMergeStrategy=_statisticsMergeStrategy - In the implementation block
@property (nonatomic,readonly) unsigned long long roundingMode; 
@property (nonatomic,retain) HKValueRange * defaultAxisRangeOverride;                              //@synthesize defaultAxisRangeOverride=_defaultAxisRangeOverride - In the implementation block
@property (nonatomic,readonly) BOOL excludeFromDataTypeSearch;                                     //@synthesize excludeFromDataTypeSearch=_excludeFromDataTypeSearch - In the implementation block
@property (nonatomic,readonly) BOOL useSecondsWhenDisplayingDuration;                              //@synthesize useSecondsWhenDisplayingDuration=_useSecondsWhenDisplayingDuration - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseSingleSecondaryValue;                                 //@synthesize shouldUseSingleSecondaryValue=_shouldUseSingleSecondaryValue - In the implementation block
@property (nonatomic,readonly) HKObjectType * objectType;                                          //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,readonly) HKSampleType * sampleType; 
@property (nonatomic,readonly) HKSampleType * recordSampleType; 
@property (nonatomic,readonly) BOOL isCharacteristic; 
@property (nonatomic,readonly) BOOL isActivitySummary; 
@property (nonatomic,readonly) BOOL isDocument; 
@property (nonatomic,readonly) BOOL isElectrocardiogram; 
-(id)wd_listViewControllerDataProviderWithProfile:(id)arg1 unitController:(id)arg2 isHierarchical:(BOOL)arg3 ;
-(Class)_wd_listViewControllerDataProviderClass:(BOOL)arg1 ;
-(id)wd_dataListViewControllerWithProfile:(id)arg1 unitController:(id)arg2 ;
-(id)wd_listViewControllerDataProviderWithProfile:(id)arg1 unitController:(id)arg2 ;
-(Class)_wd_addDataViewControllerClass;
-(long long)_heartRoomDisplayTypeContext:(long long)arg1 ;
-(id)wd_detailViewControllerWithProfile:(id)arg1 displayDate:(id)arg2 ;
-(id)wd_dataListViewControllerWithProfile:(id)arg1 ;
-(id)wd_addDataViewControllerWithProfile:(id)arg1 unitController:(id)arg2 initialStartDate:(id)arg3 ;
-(id)wd_valueOrderForAddDataViewController;
-(id)wd_defaultValueForAddDataViewController;
-(id)wd_contextDetailViewControllerWithProfile:(id)arg1 displayDate:(id)arg2 ;
-(id)wd_outOfRangeAlertDisplayName;
-(long long)wd_heartRateDisplayTypeContext;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)roundingMode;
-(NSSet *)keywords;
-(NSString *)displayName;
-(HKObjectType *)objectType;
-(long long)categoryIdentifier;
-(BOOL)hidden;
-(BOOL)isDocument;
-(NSString *)summary;
-(id)initFromDictionary:(id)arg1 ;
-(HKSampleType *)sampleType;
-(BOOL)allowsManualEntry;
-(double)scalarValue;
-(HKDisplayCategory *)displayCategory;
-(NSString *)titleEmbeddedDisplayName;
-(NSAttributedString *)attributedSummaryAttribution;
-(BOOL)summaryAttributionHasLink;
-(long long)displayTypeIdentifier;
-(UIImage *)listIcon;
-(NSString *)shortenedDisplayName;
-(BOOL)canBecomeFavorite;
-(void)setDefaultAxisRangeOverride:(HKValueRange *)arg1 ;
-(NSString *)embeddedDisplayName;
-(BOOL)showAllDataHierarchically;
-(id)adjustedValueForDaemonValue:(id)arg1 ;
-(BOOL)isActivitySummary;
-(HKDisplayTypeChartingRules *)chartingRules;
-(id)adjustedValueForClientValue:(id)arg1 ;
-(BOOL)isCharacteristic;
-(BOOL)excludeFromDataTypeSearch;
-(id)hk_enumeratedValueLabels;
-(unsigned long long)hk_interactiveChartOptions;
-(BOOL)unitPreferencesRequireChangeConfirmation;
-(BOOL)supportsAssociatedSamples;
-(id)colorWithDisplayCategoryController:(id)arg1 ;
-(id)hk_interactiveChartsFormatterForTimeScope:(long long)arg1 ;
-(id)unitNameForValue:(id)arg1 unitPreferenceController:(id)arg2 ;
-(NSString *)displayNameKey;
-(BOOL)useSecondsWhenDisplayingDuration;
-(id)hk_valueFormatterForUnit:(id)arg1 ;
-(NSArray *)secondaryDisplayCategories;
-(NSString *)unitChangeCautionaryText;
-(BOOL)_isWheelchairUser;
-(UIImage *)displayTypeIcon;
-(NSString *)summaryForPairedWatch;
-(UIImage *)detailImage;
-(NSString *)cautionaryText;
-(NSString *)labelDisplayName;
-(UIImage *)shareIcon;
-(BOOL)disallowsSourceReordering;
-(HKSampleType *)recordSampleType;
-(/*^block*/id)hk_startOfDayTransform;
-(id)hk_numberFormatterForUnit:(id)arg1 ;
-(NSString *)localizationTableNameOverride;
-(id)unitDisplayNameKeyOverrideForUnit:(id)arg1 ;
-(NSArray *)secondaryCategoryIdentifiers;
-(void)_setWheelchairUser:(BOOL)arg1 ;
-(UIImage *)unitIcon;
-(id)defaultValuePredicate;
-(unsigned long long)hk_chartCalendarUnitForTimeScope:(long long)arg1 ;
-(id)hk_customSeriesPointIntervalComponentsForTimeScope:(long long)arg1 ;
-(long long)hk_stackedChartSectionsCountForTimeScope:(long long)arg1 ;
-(id)hk_standardSeriesForTimeScope:(long long)arg1 displayCategory:(id)arg2 unitController:(id)arg3 dataCacheController:(id)arg4 displayCategoryController:(id)arg5 ;
-(id)defaultDataRange;
-(NSDictionary *)unitNameKeyOverrides;
-(BOOL)hk_isSupportedTimeScope:(long long)arg1 ;
-(id)hk_numberFormatterForUnit:(id)arg1 formattingContext:(long long)arg2 ;
-(unsigned long long)statisticsMergeStrategy;
-(BOOL)hk_interactiveChartsDataSourceDependsOnTimeScope;
-(id)hk_interactiveChartsDataSourceForTimeScope:(long long)arg1 healthStore:(id)arg2 unitController:(id)arg3 ;
-(unsigned long long)presentationOptionsForTimeScope:(long long)arg1 ;
-(id)hk_interactiveChartAxisStringFromValue:(id)arg1 defaultNumberFormatter:(id)arg2 unitController:(id)arg3 ;
-(void)_applyTextualPropertiesWithDictionary:(id)arg1 displayNameKey:(id)arg2 ;
-(void)_applySummaryAndAttributionPropertiesWithDictionary:(id)arg1 ;
-(void)_applyChartingProperties:(id)arg1 ;
-(void)_applyScalarValue:(id)arg1 ;
-(HKValueRange *)defaultAxisRangeOverride;
-(BOOL)_isNikeFuel;
-(BOOL)_isActivitySummary;
-(id)listIconOverride;
-(id)_rawLocalizedStringForKey:(id)arg1 ;
-(id)_localizedStringWithKey:(id)arg1 ;
-(id)chartingPredicateForTimeScope:(long long)arg1 ;
-(BOOL)isElectrocardiogram;
-(NSString *)listIconImageName;
-(BOOL)shouldDisplayUnitStringOnYAxis;
-(BOOL)anyPortraitChartDefinition;
-(void)setShouldDisplayUnitStringOnYAxis:(BOOL)arg1 ;
-(BOOL)shouldUseSingleSecondaryValue;
-(id)_timePeriodDisplayPrefix;
-(id)hk_valueOrderForStackedCharts;
-(/*^block*/id)_bloodPressureUserInfoBlock;
-(/*^block*/id)_singleValueUserInfoBlockWithUnitController:(id)arg1 displayType:(id)arg2 statisticsOption:(unsigned long long)arg3 ;
-(/*^block*/id)_minMaxUserInfoBlockWithUnitController:(id)arg1 displayType:(id)arg2 ;
-(id)_bloodPressureDataSourceWithHealthStore:(id)arg1 ;
-(id)_insulinDataSourceWithHealthStore:(id)arg1 ;
-(id)_heartRateHistogramDataSourceWithHealthStore:(id)arg1 ;
-(id)_audioExposureHistogramDataSourceForAudioExposureTypeIdentifier:(id)arg1 withHealthStore:(id)arg2 ;
-(id)_dataSourceForWorkoutsWithTimeScope:(long long)arg1 healthStore:(id)arg2 ;
-(id)_dataSourceForQuantityType:(id)arg1 timeScope:(long long)arg2 unitController:(id)arg3 healthStore:(id)arg4 ;
-(id)_countDataSourceWithHealthStore:(id)arg1 ;
-(id)_timePeriodDataSourceForSampleType:(id)arg1 timeScope:(long long)arg2 healthStore:(id)arg3 ;
-(id)_dailySleepSeriesDataSourceForSampleType:(id)arg1 timeScope:(long long)arg2 healthStore:(id)arg3 ;
-(id)_stackedDataSourceForCategoryType:(id)arg1 timeScope:(long long)arg2 healthStore:(id)arg3 ;
-(id)_singleCenteredLineDataSourceForCategoryType:(id)arg1 timeScope:(long long)arg2 healthStore:(id)arg3 displayTypeIdentifier:(long long)arg4 ;
-(id)_levelCategoryValuesDataSourceForCategoryType:(id)arg1 timeScope:(long long)arg2 healthStore:(id)arg3 displayIdentifier:(long long)arg4 ;
-(id)_hk_defaultChartAxisBoundStringFromValue:(id)arg1 defaultNumberFormatter:(id)arg2 unitController:(id)arg3 ;
-(id)_hk_numberFormatterForCharting;
-(id)_generateBloodPressureSeriesWithColor:(id)arg1 ;
-(id)_generateInsulinBarSeriesWithDisplayCategory:(id)arg1 ;
-(id)_generateDistributionSeriesWithColor:(id)arg1 ;
-(id)_generateLineSeriesWithColor:(id)arg1 timeScope:(long long)arg2 ;
-(id)_generateBarSeriesWithFillStyle:(id)arg1 ;
-(id)_generateDailySleepSeriesWithColor:(id)arg1 ;
-(id)_generateScatterPlotSeriesWithColor:(id)arg1 ;
-(id)_generateMinMaxSeriesWithColor:(id)arg1 ;
-(id)_generateStackedSeriesWithColor:(id)arg1 ;
-(id)_generateSingleLineSeriesWithColor:(id)arg1 timeScope:(long long)arg2 ;
-(id)_generateLevelCategorySeriesWithColor:(id)arg1 ;
-(id)hk_dimensionForChartAxisWithUnitController:(id)arg1 ;
-(id)_dataSourceForTimeScope:(long long)arg1 dataCacheController:(id)arg2 ;
-(id)_generateGraphSeriesForTimeScope:(long long)arg1 displayCategory:(id)arg2 ;
-(id)hk_dashboardChartBoundStringFromValue:(id)arg1 defaultNumberFormatter:(id)arg2 unitController:(id)arg3 ;
-(id)hk_valueFormatterForUnit:(id)arg1 formattingContext:(long long)arg2 ;
-(id)_statFormatterItemOptionsForQuantityType:(id)arg1 timeScope:(long long)arg2 ;
-(BOOL)_supportsFiveYearTimeScope;
-(BOOL)_supportsYearTimeScope;
-(BOOL)_supportsMonthTimeScope;
-(BOOL)_supportsWeekTimeScope;
-(BOOL)_supportsDayTimeScope;
-(BOOL)_supportsHourTimeScope;
@end

