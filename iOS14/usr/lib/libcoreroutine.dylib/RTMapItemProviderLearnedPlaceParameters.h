/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@interface RTMapItemProviderLearnedPlaceParameters : NSObject {

	double _maxDistanceThreshold;
	double _minDistanceThreshold;
	double _softDistanceThreshold;
	double _homeConfidence;
	double _workConfidence;
	double _schoolConfidence;
	double _gymConfidence;
	double _nonRevGeoConfidence;
	double _revGeoConfidence;
	unsigned long long _revGeoSourceMask;
	unsigned long long _removeSourceMask;

}

@property (nonatomic,readonly) double maxDistanceThreshold;                      //@synthesize maxDistanceThreshold=_maxDistanceThreshold - In the implementation block
@property (nonatomic,readonly) double minDistanceThreshold;                      //@synthesize minDistanceThreshold=_minDistanceThreshold - In the implementation block
@property (nonatomic,readonly) double softDistanceThreshold;                     //@synthesize softDistanceThreshold=_softDistanceThreshold - In the implementation block
@property (nonatomic,readonly) double homeConfidence;                            //@synthesize homeConfidence=_homeConfidence - In the implementation block
@property (nonatomic,readonly) double workConfidence;                            //@synthesize workConfidence=_workConfidence - In the implementation block
@property (nonatomic,readonly) double schoolConfidence;                          //@synthesize schoolConfidence=_schoolConfidence - In the implementation block
@property (nonatomic,readonly) double gymConfidence;                             //@synthesize gymConfidence=_gymConfidence - In the implementation block
@property (nonatomic,readonly) double nonRevGeoConfidence;                       //@synthesize nonRevGeoConfidence=_nonRevGeoConfidence - In the implementation block
@property (nonatomic,readonly) double revGeoConfidence;                          //@synthesize revGeoConfidence=_revGeoConfidence - In the implementation block
@property (nonatomic,readonly) unsigned long long revGeoSourceMask;              //@synthesize revGeoSourceMask=_revGeoSourceMask - In the implementation block
@property (nonatomic,readonly) unsigned long long removeSourceMask;              //@synthesize removeSourceMask=_removeSourceMask - In the implementation block
-(id)init;
-(id)description;
-(id)initWithDefaultsManager:(id)arg1 ;
-(double)revGeoConfidence;
-(double)maxDistanceThreshold;
-(double)minDistanceThreshold;
-(double)softDistanceThreshold;
-(unsigned long long)revGeoSourceMask;
-(double)nonRevGeoConfidence;
-(unsigned long long)removeSourceMask;
-(double)homeConfidence;
-(double)workConfidence;
-(double)schoolConfidence;
-(double)gymConfidence;
-(id)initWithMaxDistanceThreshold:(double)arg1 minDistanceThreshold:(double)arg2 softDistanceThreshold:(double)arg3 homeConfidence:(double)arg4 workConfidence:(double)arg5 schoolConfidence:(double)arg6 gymConfidence:(double)arg7 nonRevGeoConfidence:(double)arg8 revGeoConfidence:(double)arg9 revGeoSourceMask:(unsigned long long)arg10 removeSourceMask:(unsigned long long)arg11 ;
@end

