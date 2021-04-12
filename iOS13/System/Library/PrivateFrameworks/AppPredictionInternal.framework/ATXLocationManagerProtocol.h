/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol ATXLocationManagerProtocol
@required
+(id)sharedInstance;
+(id)stringForLOIType:(long long)arg1;
-(BOOL)isTourist;
-(id)getCurrentLocation;
-(id)locationOfInterestAtCurrentLocation;
-(double)distanceFromHomeOfCurrentLocationInMeters;
-(double)distanceFromWorkOfCurrentLocationInMeters;
-(double)distanceFromSchoolOfCurrentLocationInMeters;
-(double)distanceFromGymOfCurrentLocationInMeters;
-(void)fetchAllLocationsOfInterest:(/*^block*/id)arg1;
-(void)clearLocationOfInterest;
-(BOOL)isNearKnownTypeLocationOfInterest;

@end

