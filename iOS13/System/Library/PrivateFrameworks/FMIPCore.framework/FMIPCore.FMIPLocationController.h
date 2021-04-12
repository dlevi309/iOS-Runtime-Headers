/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMIPCore.framework/FMIPCore
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@interface FMIPCore.FMIPLocationController : NSObject <CLLocationManagerDelegate> {

	 locationManager;
	 delegate;
	 locationUpdatingQueue;
	 currentLocation;

}
-(id)init;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
@end

