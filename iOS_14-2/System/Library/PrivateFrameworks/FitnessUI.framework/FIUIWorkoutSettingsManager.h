/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@class FIUIWorkoutActivityType, NSMutableDictionary, NSMutableArray, FIUIWorkoutDefaultMetricsProvider, NPSDomainAccessor, NPSManager;

@interface FIUIWorkoutSettingsManager : NSObject {

	FIUIWorkoutActivityType* _workoutActivityType;
	long long _activityMoveMode;
	NSMutableDictionary* _settingsByActivityType;
	NSMutableDictionary* _settingOverridesByMetric;
	NSMutableArray* _enabledMetrics;
	FIUIWorkoutDefaultMetricsProvider* _defaultMetricsProvider;
	NPSDomainAccessor* _domainAccessor;
	NPSManager* _syncManager;

}

@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;              //@synthesize domainAccessor=_domainAccessor - In the implementation block
@property (nonatomic,retain) NPSManager * syncManager;                        //@synthesize syncManager=_syncManager - In the implementation block
+(long long)readWorkoutMetricsActivityMoveMode;
+(void)obliterateUserConfiguredWorkoutMetrics;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(NPSDomainAccessor *)domainAccessor;
-(id)init;
-(void)setSyncManager:(NPSManager *)arg1 ;
-(NPSManager *)syncManager;
-(BOOL)_useUserConfiguredWorkoutMetricsForMetricsActivityMoveMode:(long long)arg1 activityMoveMode:(long long)arg2 ;
-(void)_clearOldMetricsIfNeeded;
-(void)_readFromDomain;
-(BOOL)_hasUserMadeMetricChangesToWorkoutType:(id)arg1 enabledMetrics:(id)arg2 settingOverridesByMetric:(id)arg3 metricFormatVersion:(id)arg4 ;
-(void)_writeToDomainWithShouldUpdateVersion:(BOOL)arg1 ;
-(id)supportedMetrics;
-(id)orderedDisabledMetrics;
-(BOOL)isMetricEnabled:(unsigned long long)arg1 ;
-(BOOL)_enabledMetricsAreDefaultAfterPaceMigration:(id)arg1 workoutActivityType:(id)arg2 ;
-(void)_migratePaceViewSettingIfNeeded;
-(id)initWithWorkoutActivityType:(id)arg1 activityMoveMode:(long long)arg2 ;
-(id)orderedEnabledMetrics;
-(id)orderedSupportedMetrics;
-(id)orderedEnabledAndSupportedMetrics;
-(void)setEnabled:(BOOL)arg1 forMetricType:(unsigned long long)arg2 didChange:(BOOL*)arg3 ;
-(void)moveMetricType:(unsigned long long)arg1 toEnabledIndex:(long long)arg2 ;
-(void)assignMetricType:(unsigned long long)arg1 toSlotIndex:(long long)arg2 ;
-(long long)disabledIndexForMetricType:(unsigned long long)arg1 ;
-(void)reloadMetrics;
@end

