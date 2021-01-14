/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@interface RTRelabelerParameters : NSObject {

	double _baseCount;
	double _clippingRadius;
	double _confidenceEqualityEpsilon;
	double _confidenceThreshold;
	unsigned long long _contextCandidateAmountThreshold;
	double _contextDistanceThreshold;
	double _minimumConfidenceRatio;
	unsigned long long _minimumNumberPOIs;
	double _passthroughThreshold;
	double _placeholderWeight;
	double _revGeoConfidence;
	double _sigma;
	unsigned long long _weekThreshold;

}

@property (nonatomic,readonly) double baseCount;                                                //@synthesize baseCount=_baseCount - In the implementation block
@property (nonatomic,readonly) double clippingRadius;                                           //@synthesize clippingRadius=_clippingRadius - In the implementation block
@property (nonatomic,readonly) double confidenceEqualityEpsilon;                                //@synthesize confidenceEqualityEpsilon=_confidenceEqualityEpsilon - In the implementation block
@property (nonatomic,readonly) double confidenceThreshold;                                      //@synthesize confidenceThreshold=_confidenceThreshold - In the implementation block
@property (nonatomic,readonly) unsigned long long contextCandidateAmountThreshold;              //@synthesize contextCandidateAmountThreshold=_contextCandidateAmountThreshold - In the implementation block
@property (nonatomic,readonly) double contextDistanceThreshold;                                 //@synthesize contextDistanceThreshold=_contextDistanceThreshold - In the implementation block
@property (nonatomic,readonly) double minimumConfidenceRatio;                                   //@synthesize minimumConfidenceRatio=_minimumConfidenceRatio - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumNumberPOIs;                            //@synthesize minimumNumberPOIs=_minimumNumberPOIs - In the implementation block
@property (nonatomic,readonly) double passthroughThreshold;                                     //@synthesize passthroughThreshold=_passthroughThreshold - In the implementation block
@property (nonatomic,readonly) double placeholderWeight;                                        //@synthesize placeholderWeight=_placeholderWeight - In the implementation block
@property (nonatomic,readonly) double revGeoConfidence;                                         //@synthesize revGeoConfidence=_revGeoConfidence - In the implementation block
@property (nonatomic,readonly) double sigma;                                                    //@synthesize sigma=_sigma - In the implementation block
@property (nonatomic,readonly) unsigned long long weekThreshold;                                //@synthesize weekThreshold=_weekThreshold - In the implementation block
-(id)init;
-(double)sigma;
-(double)confidenceThreshold;
-(id)description;
-(id)initWithDefaultsManager:(id)arg1 ;
-(id)initWithBaseCount:(double)arg1 clippingRadius:(double)arg2 confidenceEqualityEpsilon:(double)arg3 confidenceThreshold:(double)arg4 contextCandidateAmountThreshold:(unsigned long long)arg5 contextDistanceThreshold:(double)arg6 minimumConfidenceRatio:(double)arg7 minimumNumberPOIs:(unsigned long long)arg8 passthroughThreshold:(double)arg9 placeholderWeight:(double)arg10 revGeoConfidence:(double)arg11 sigma:(double)arg12 weekThreshold:(unsigned long long)arg13 ;
-(double)baseCount;
-(double)clippingRadius;
-(double)confidenceEqualityEpsilon;
-(unsigned long long)contextCandidateAmountThreshold;
-(double)contextDistanceThreshold;
-(double)minimumConfidenceRatio;
-(unsigned long long)minimumNumberPOIs;
-(double)passthroughThreshold;
-(double)placeholderWeight;
-(double)revGeoConfidence;
-(unsigned long long)weekThreshold;
@end

