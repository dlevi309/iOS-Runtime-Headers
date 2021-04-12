/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/


@protocol ATXLocationManagerProtocol
@required
+(id)sharedInstance;
+(id)stringForLOIType:(long long)arg1;
-(void)stopMonitoringRegionWithIdentifier:(id)arg1;
-(long long)stateForRegion:(id)arg1 withTimeout:(double)arg2;
-(void)beginMonitoringRegion:(id)arg1;
-(BOOL)isTourist;
-(BOOL)isNearKnownTypeOrFrequentLocationOfInterest;
-(id)cachedLocationOfInterestAtCurrentLocation;
-(id)getCurrentPreciseLocation;
-(void)clearLocationOfInterest;
-(void)locationOfInterestAtCurrentLocationWithCompletionHandler:(/*^block*/id)arg1;
-(id)locationOfInterestAtCurrentLocation;
-(BOOL)isTouristWithCurrentDate:(id)arg1;
-(double)distanceFromHomeOfCurrentLocationInMeters;
-(BOOL)isNearFrequentLocationOfInterest;
-(double)distanceFromSchoolOfCurrentLocationInMeters;
-(double)distanceFromWorkOfCurrentLocationInMeters;
-(void)fetchAllLocationsOfInterest:(/*^block*/id)arg1;
-(double)distanceFromGymOfCurrentLocationInMeters;
-(BOOL)isNearKnownTypeLocationOfInterest;
-(void)invalidateLocationOfInterestCache;
-(id)getCurrentLocation;

@end

