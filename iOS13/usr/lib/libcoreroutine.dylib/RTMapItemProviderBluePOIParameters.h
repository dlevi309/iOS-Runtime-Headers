/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSString;

@interface RTMapItemProviderBluePOIParameters : NSObject {

	double _baseDuration;
	NSString* _injectedPlistPath;
	double _locationLookupWindowMaxMinutes;
	double _locationLookupWindowMinMinutes;
	unsigned long long _maxLocationsPerFingerprint;
	double _locationUncertaintyThreshold;
	double _aoiDistanceThreshold;
	double _poiDistanceThreshold;
	unsigned long long _harvestMask;

}

@property (nonatomic,readonly) double baseDuration;                                        //@synthesize baseDuration=_baseDuration - In the implementation block
@property (nonatomic,readonly) NSString * injectedPlistPath;                               //@synthesize injectedPlistPath=_injectedPlistPath - In the implementation block
@property (nonatomic,readonly) double locationLookupWindowMaxMinutes;                      //@synthesize locationLookupWindowMaxMinutes=_locationLookupWindowMaxMinutes - In the implementation block
@property (nonatomic,readonly) double locationLookupWindowMinMinutes;                      //@synthesize locationLookupWindowMinMinutes=_locationLookupWindowMinMinutes - In the implementation block
@property (nonatomic,readonly) unsigned long long maxLocationsPerFingerprint;              //@synthesize maxLocationsPerFingerprint=_maxLocationsPerFingerprint - In the implementation block
@property (nonatomic,readonly) double locationUncertaintyThreshold;                        //@synthesize locationUncertaintyThreshold=_locationUncertaintyThreshold - In the implementation block
@property (nonatomic,readonly) double aoiDistanceThreshold;                                //@synthesize aoiDistanceThreshold=_aoiDistanceThreshold - In the implementation block
@property (nonatomic,readonly) double poiDistanceThreshold;                                //@synthesize poiDistanceThreshold=_poiDistanceThreshold - In the implementation block
@property (nonatomic,readonly) unsigned long long harvestMask;                             //@synthesize harvestMask=_harvestMask - In the implementation block
-(id)init;
-(double)baseDuration;
-(id)initWithDefaultsManager:(id)arg1 ;
-(double)locationLookupWindowMinMinutes;
-(double)locationLookupWindowMaxMinutes;
-(double)locationUncertaintyThreshold;
-(unsigned long long)maxLocationsPerFingerprint;
-(NSString *)injectedPlistPath;
-(double)aoiDistanceThreshold;
-(double)poiDistanceThreshold;
-(unsigned long long)harvestMask;
-(id)initWithBaseDuration:(double)arg1 injectedPlistPath:(id)arg2 locationLookupWindowMaxMinutes:(double)arg3 locationLookupWindowMinMinutes:(double)arg4 maxLocationsPerFingerprint:(unsigned long long)arg5 locationUncertaintyThreshold:(double)arg6 aoiDistanceThreshold:(double)arg7 poiDistanceThreshold:(double)arg8 harvestMask:(unsigned long long)arg9 ;
@end

