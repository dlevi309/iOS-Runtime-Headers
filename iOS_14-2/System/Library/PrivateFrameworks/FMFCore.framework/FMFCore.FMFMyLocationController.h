/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMFCore.framework/FMFCore
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@interface FMFCore.FMFMyLocationController : NSObject <CLLocationManagerDelegate> {

	 delegate;
	 unshiftedLocation;
	 currentMyLocation;
	 myLocation;
	 myUnshiftedLocation;
	 locationShifter;
	 accuracyThreshold;
	 distanceThreshold;
	 locationManager;
	 myLocationUpdatingQueue;
	 interactionController;

}
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(id)init;
@end

