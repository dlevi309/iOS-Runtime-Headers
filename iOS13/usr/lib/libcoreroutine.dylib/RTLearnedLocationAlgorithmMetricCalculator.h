/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTDistanceCalculator, RTMetricManager;

@interface RTLearnedLocationAlgorithmMetricCalculator : NSObject {

	RTDistanceCalculator* _distanceCalculator;
	RTMetricManager* _metricManager;

}

@property (nonatomic,readonly) RTDistanceCalculator * distanceCalculator;              //@synthesize distanceCalculator=_distanceCalculator - In the implementation block
@property (nonatomic,readonly) RTMetricManager * metricManager;                        //@synthesize metricManager=_metricManager - In the implementation block
+(id)normalize:(id)arg1 ;
+(void)submitMetricsForInferredPlaces:(id)arg1 existingPlaces:(id)arg2 rottedPlaces:(id)arg3 distanceCalculator:(id)arg4 metricManager:(id)arg5 ;
+(id)collectPlaceVersionsFromInferredPlaces:(id)arg1 existingPlaces:(id)arg2 rottedPlaces:(id)arg3 ;
+(id)newAlgorithmInstanceWithInference:(id)arg1 distanceCalculator:(id)arg2 ;
+(void)updateAlgorithmInstance:(id)arg1 byComparingInferredMapItem:(id)arg2 withTruthfulMapItem:(id)arg3 withDistanceCalculator:(id)arg4 ;
+(unsigned long long)addressComponentMatchesBetweenInferredAddress:(id)arg1 trueAddress:(id)arg2 ;
+(BOOL)inferredAddressComponent:(id)arg1 consistentWithTrueComponent:(id)arg2 ;
-(id)init;
-(RTMetricManager *)metricManager;
-(RTDistanceCalculator *)distanceCalculator;
-(id)initWithDistanceCalculator:(id)arg1 metricManager:(id)arg2 ;
-(void)submitMetricsForInferredPlaces:(id)arg1 existingPlaces:(id)arg2 rottedPlaces:(id)arg3 ;
@end

