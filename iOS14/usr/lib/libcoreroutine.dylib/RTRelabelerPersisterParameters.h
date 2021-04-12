/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@interface RTRelabelerPersisterParameters : NSObject {

	unsigned long long _maxCollapseIterations;
	double _placeholderCollapseDistanceThreshold;
	double _reverseGeocodeLeewayDistance;
	double _reverseGeocodePlaceFetchDistanceThreshold;
	double _unconcreteLOICollapseDistanceThreshold;
	double _visitAdjacencyMergeThreshold;

}

@property (nonatomic,readonly) unsigned long long maxCollapseIterations;                      //@synthesize maxCollapseIterations=_maxCollapseIterations - In the implementation block
@property (nonatomic,readonly) double placeholderCollapseDistanceThreshold;                   //@synthesize placeholderCollapseDistanceThreshold=_placeholderCollapseDistanceThreshold - In the implementation block
@property (nonatomic,readonly) double reverseGeocodeLeewayDistance;                           //@synthesize reverseGeocodeLeewayDistance=_reverseGeocodeLeewayDistance - In the implementation block
@property (nonatomic,readonly) double reverseGeocodePlaceFetchDistanceThreshold;              //@synthesize reverseGeocodePlaceFetchDistanceThreshold=_reverseGeocodePlaceFetchDistanceThreshold - In the implementation block
@property (nonatomic,readonly) double unconcreteLOICollapseDistanceThreshold;                 //@synthesize unconcreteLOICollapseDistanceThreshold=_unconcreteLOICollapseDistanceThreshold - In the implementation block
@property (nonatomic,readonly) double visitAdjacencyMergeThreshold;                           //@synthesize visitAdjacencyMergeThreshold=_visitAdjacencyMergeThreshold - In the implementation block
-(id)init;
-(id)description;
-(id)initWithDefaultsManager:(id)arg1 ;
-(id)initWithMaxCollapseIterations:(unsigned long long)arg1 placeholderCollapseDistanceThreshold:(double)arg2 reverseGeocodeLeewayDistance:(double)arg3 reverseGeocodePlaceFetchDistanceThreshold:(double)arg4 unconcreteLOICollapseDistanceThreshold:(double)arg5 visitAdjacencyMergeThreshold:(double)arg6 ;
-(unsigned long long)maxCollapseIterations;
-(double)placeholderCollapseDistanceThreshold;
-(double)reverseGeocodeLeewayDistance;
-(double)reverseGeocodePlaceFetchDistanceThreshold;
-(double)unconcreteLOICollapseDistanceThreshold;
-(double)visitAdjacencyMergeThreshold;
@end

