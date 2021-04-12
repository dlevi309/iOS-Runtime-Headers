/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@interface RTInferredMapItemFuserParameters : NSObject {

	double _aoiConsiderThreshold;
	double _aoiUseThreshold;
	double _confidenceEqualityEpsilon;
	double _distanceThreshold;
	double _placeholderMultiplier;

}

@property (nonatomic,readonly) double aoiConsiderThreshold;                   //@synthesize aoiConsiderThreshold=_aoiConsiderThreshold - In the implementation block
@property (nonatomic,readonly) double aoiUseThreshold;                        //@synthesize aoiUseThreshold=_aoiUseThreshold - In the implementation block
@property (nonatomic,readonly) double confidenceEqualityEpsilon;              //@synthesize confidenceEqualityEpsilon=_confidenceEqualityEpsilon - In the implementation block
@property (nonatomic,readonly) double distanceThreshold;                      //@synthesize distanceThreshold=_distanceThreshold - In the implementation block
@property (nonatomic,readonly) double placeholderMultiplier;                  //@synthesize placeholderMultiplier=_placeholderMultiplier - In the implementation block
-(id)init;
-(id)description;
-(double)distanceThreshold;
-(id)initWithDefaultsManager:(id)arg1 ;
-(double)confidenceEqualityEpsilon;
-(id)initWithAoiConsiderThreshold:(double)arg1 aoiUseThreshold:(double)arg2 confidenceEqualityEpsilon:(double)arg3 distanceThreshold:(double)arg4 placeholderMultiplier:(double)arg5 ;
-(double)aoiConsiderThreshold;
-(double)aoiUseThreshold;
-(double)placeholderMultiplier;
@end

