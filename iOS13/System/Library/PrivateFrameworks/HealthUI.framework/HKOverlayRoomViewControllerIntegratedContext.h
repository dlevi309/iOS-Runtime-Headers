/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKOverlayContext.h>

@class HKInteractiveChartOverlayViewController, HKOverlayRoomApplicationItems, HKSampleType, NSMutableDictionary, HKDisplayTypeContextItem, NSString;

@interface HKOverlayRoomViewControllerIntegratedContext : NSObject <HKOverlayContext> {

	long long _overlayMode;
	HKInteractiveChartOverlayViewController* _overlayChartController;
	HKOverlayRoomApplicationItems* _applicationItems;
	HKSampleType* _monitoringSampleType;
	NSMutableDictionary* _displayTypesForTimeScopes;
	HKDisplayTypeContextItem* _lastUpdatedContextItem;

}

@property (nonatomic,retain) HKInteractiveChartOverlayViewController * overlayChartController;              //@synthesize overlayChartController=_overlayChartController - In the implementation block
@property (nonatomic,retain) HKOverlayRoomApplicationItems * applicationItems;                              //@synthesize applicationItems=_applicationItems - In the implementation block
@property (nonatomic,retain) HKSampleType * monitoringSampleType;                                           //@synthesize monitoringSampleType=_monitoringSampleType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * displayTypesForTimeScopes;                               //@synthesize displayTypesForTimeScopes=_displayTypesForTimeScopes - In the implementation block
@property (nonatomic,retain) HKDisplayTypeContextItem * lastUpdatedContextItem;                             //@synthesize lastUpdatedContextItem=_lastUpdatedContextItem - In the implementation block
@property (assign,nonatomic) long long overlayMode;                                                         //@synthesize overlayMode=_overlayMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)distributionContextWithStyle:(long long)arg1 namedPredicate:(id)arg2 overlayChartController:(id)arg3 applicationItems:(id)arg4 options:(long long)arg5 mode:(long long)arg6 ;
+(id)quantityContextWithIdentifier:(id)arg1 overlayChartController:(id)arg2 applicationItems:(id)arg3 optionalDelegate:(id)arg4 seriesOptions:(long long)arg5 mode:(long long)arg6 ;
-(HKOverlayRoomApplicationItems *)applicationItems;
-(id)contextItemForLastUpdate;
-(void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)sampleTypeForDateRangeUpdates;
-(id)overlayDisplayTypeForTimeScope:(long long)arg1 ;
-(void)setApplicationItems:(HKOverlayRoomApplicationItems *)arg1 ;
-(id)initWithOverlayChartController:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 ;
-(id)representativeDisplayType;
-(long long)overlayMode;
-(HKInteractiveChartOverlayViewController *)overlayChartController;
-(id)buildContextItemWithValue:(id)arg1 valueContext:(id)arg2 forTimeScope:(long long)arg3 ;
-(id)buildOverlayDisplayTypeForTimeScope:(long long)arg1 ;
-(void)fetchCachedDataForTimeScope:(long long)arg1 dateInterval:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3 ;
-(id)valueContextString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3 ;
-(id)_minMaxValueFromChartPoints:(id)arg1 displayType:(id)arg2 unitPreferenceController:(id)arg3 ;
-(HKSampleType *)monitoringSampleType;
-(id)_buildMonitoringSampleType;
-(void)setMonitoringSampleType:(HKSampleType *)arg1 ;
-(NSMutableDictionary *)displayTypesForTimeScopes;
-(BOOL)_obsoleteDateRange:(id)arg1 ;
-(void)setLastUpdatedContextItem:(HKDisplayTypeContextItem *)arg1 ;
-(HKDisplayTypeContextItem *)lastUpdatedContextItem;
-(void)setOverlayMode:(long long)arg1 ;
-(void)setOverlayChartController:(HKInteractiveChartOverlayViewController *)arg1 ;
-(void)setDisplayTypesForTimeScopes:(NSMutableDictionary *)arg1 ;
@end

