/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMFCore.framework/FMFCore
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@interface FMFCore.FMFMyLocationController : NSObject <CLLocationManagerDelegate> {

	 delegate;
	 currentMyLocation;
	 myLocation;
	 accuracyThreshold;
	 distanceThreshold;
	 locationManager;
	 myLocationUpdatingQueue;
	 serverInteractionController;

}
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(id)init;
@end

