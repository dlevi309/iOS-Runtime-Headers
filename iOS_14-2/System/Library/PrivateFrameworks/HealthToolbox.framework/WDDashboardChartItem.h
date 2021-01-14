/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <libobjc.A.dylib/HKValueDataProviderObserver.h>
#import <libobjc.A.dylib/HKActivitySummaryDataProviderObserver.h>
#import <libobjc.A.dylib/WDDashboardCellPrimaryValueSource.h>
#import <libobjc.A.dylib/WDDashboardCellSecondaryValueSource.h>
#import <libobjc.A.dylib/WDDashboardCellChartSource.h>

@protocol WDDashboardCellPrimaryValueSourceDelegate, WDDashboardCellSecondaryValueSourceDelegate;
@class HKDisplayType, HKDisplayCategory, NSString, NSDate, NSAttributedString, HKActivitySummaryDataProvider, NSDictionary, HKUnitPreferenceController, WDProfile, HKValueDataProvider;

@interface WDDashboardChartItem : NSObject <HKValueDataProviderObserver, HKActivitySummaryDataProviderObserver, WDDashboardCellPrimaryValueSource, WDDashboardCellSecondaryValueSource, WDDashboardCellChartSource> {

	NSDictionary* _dataPoints;
	BOOL _isActive;
	HKUnitPreferenceController* _unitController;
	WDProfile* _profile;
	HKValueDataProvider* _currentValueDataProvider;
	HKValueDataProvider* _secondaryValueDataProvider;
	HKActivitySummaryDataProvider* _activitySummaryProvider;
	BOOL _localeDidChange;
	HKDisplayType* _displayType;
	id<WDDashboardCellPrimaryValueSourceDelegate> _primaryValueSourceDelegate;
	id<WDDashboardCellSecondaryValueSourceDelegate> _secondaryValueSourceDelegate;
	HKDisplayCategory* _displayCategory;
	NSDate* _startDate;
	NSDate* _endDate;
	long long _timeScope;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WDDashboardCellPrimaryValueSourceDelegate> primaryValueSourceDelegate;                  //@synthesize primaryValueSourceDelegate=_primaryValueSourceDelegate - In the implementation block
@property (nonatomic,readonly) HKDisplayType * displayType;                                                                    //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,readonly) HKDisplayCategory * displayCategory;                                                            //@synthesize displayCategory=_displayCategory - In the implementation block
@property (nonatomic,readonly) NSString * primaryValueContextualText; 
@property (nonatomic,readonly) NSDate * lastUpdated; 
@property (assign,nonatomic,__weak) id<WDDashboardCellSecondaryValueSourceDelegate> secondaryValueSourceDelegate;              //@synthesize secondaryValueSourceDelegate=_secondaryValueSourceDelegate - In the implementation block
@property (nonatomic,readonly) NSAttributedString * secondaryValue; 
@property (nonatomic,readonly) long long timeScope;                                                                            //@synthesize timeScope=_timeScope - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                                                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                                                               //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) HKActivitySummaryDataProvider * activitySummaryProvider;                                        //@synthesize activitySummaryProvider=_activitySummaryProvider - In the implementation block
@property (assign,nonatomic) BOOL localeDidChange;                                                                             //@synthesize localeDidChange=_localeDidChange - In the implementation block
-(NSDate *)lastUpdated;
-(NSDate *)endDate;
-(HKDisplayCategory *)displayCategory;
-(id)init;
-(HKDisplayType *)displayType;
-(NSDate *)startDate;
-(long long)timeScope;
-(NSAttributedString *)secondaryValue;
-(BOOL)localeDidChange;
-(void)dealloc;
-(void)dataProviderDidUpdateValues:(id)arg1 ;
-(void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg1 ;
-(id)initWithDisplayType:(id)arg1 useAlternateCurrentValue:(BOOL)arg2 displayCategory:(id)arg3 profile:(id)arg4 healthStore:(id)arg5 ;
-(id<WDDashboardCellPrimaryValueSourceDelegate>)primaryValueSourceDelegate;
-(id<WDDashboardCellSecondaryValueSourceDelegate>)secondaryValueSourceDelegate;
-(id)mostRecentValueWithValueFont:(id)arg1 unitFont:(id)arg2 ;
-(void)setPrimaryValueSourceDelegate:(id<WDDashboardCellPrimaryValueSourceDelegate>)arg1 ;
-(NSString *)primaryValueContextualText;
-(void)setSecondaryValueSourceDelegate:(id<WDDashboardCellSecondaryValueSourceDelegate>)arg1 ;
-(BOOL)shouldHideAverageLineForTimeScope:(long long)arg1 ;
-(BOOL)shouldHideMinMaxOnBackgroundForTimeScope:(long long)arg1 ;
-(void)invalidateChart;
-(HKActivitySummaryDataProvider *)activitySummaryProvider;
-(void)setLocaleDidChange:(BOOL)arg1 ;
-(UIEdgeInsets)_chartInsetsForTimeScope:(long long)arg1 ;
@end

