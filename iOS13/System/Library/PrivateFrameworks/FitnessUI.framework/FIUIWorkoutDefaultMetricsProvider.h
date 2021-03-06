/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@class FIUIWorkoutActivityType, NSArray;

@interface FIUIWorkoutDefaultMetricsProvider : NSObject {

	FIUIWorkoutActivityType* _activityType;
	BOOL _supportsElevationMetrics;
	BOOL _supportsGroundElevationMetrics;
	long long _metricsVersion;
	NSArray* _defaultEnabledMetrics;
	NSArray* _supportedMetrics;

}

@property (nonatomic,readonly) long long metricsVersion;                          //@synthesize metricsVersion=_metricsVersion - In the implementation block
@property (nonatomic,copy,readonly) NSArray * defaultEnabledMetrics;              //@synthesize defaultEnabledMetrics=_defaultEnabledMetrics - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedMetrics;                   //@synthesize supportedMetrics=_supportedMetrics - In the implementation block
-(long long)metricsVersion;
-(id)initWithMetricsVersion:(long long)arg1 activityType:(id)arg2 deviceSupportsElevationMetrics:(BOOL)arg3 deviceSupportsGroundElevationMetrics:(BOOL)arg4 ;
-(NSArray *)defaultEnabledMetrics;
-(NSArray *)supportedMetrics;
-(id)_defaultEnabledMetricsForActivityType:(id)arg1 metricsVersion:(long long)arg2 ;
-(id)_supportedMetricsForActivityType:(id)arg1 metricsVersion:(long long)arg2 ;
-(id)_defaultEnabledMetricsForSwimmingWithLocationType:(long long)arg1 metricsVersion:(long long)arg2 ;
-(id)_indoorDefaultEnabledMetricsForActivityType:(unsigned long long)arg1 metricsVersion:(long long)arg2 ;
-(id)_defaultOutdoorEnabledMetricsForActivityType:(unsigned long long)arg1 metricsVersion:(long long)arg2 supportsElevationMetrics:(BOOL)arg3 ;
-(id)_defaultGloryIndoorEnabledMetricsForActivityType:(unsigned long long)arg1 ;
-(id)_defaultPreGloryIndoorEnabledMetricsForActivityType:(unsigned long long)arg1 ;
-(id)_defaultGloryOutdoorEnabledMetricsForActivityType:(unsigned long long)arg1 supportsElevationMetrics:(BOOL)arg2 ;
-(id)_defaultPreGloryOutdoorEnabledMetricsForActivityType:(unsigned long long)arg1 ;
-(id)_machineProvidedMetricsForActivityType:(id)arg1 ;
-(id)supportedMetricsWithIsMachineWorkout:(BOOL)arg1 activityType:(id)arg2 ;
-(id)appendMachineMetricsToMetrics:(id)arg1 maxNumMetrics:(long long)arg2 activityType:(id)arg3 ;
-(BOOL)isMetricTypeSupported:(unsigned long long)arg1 isMachineWorkout:(BOOL)arg2 activityType:(id)arg3 ;
@end

