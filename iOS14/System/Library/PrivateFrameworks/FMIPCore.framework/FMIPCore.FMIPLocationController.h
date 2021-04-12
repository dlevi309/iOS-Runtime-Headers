/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMIPCore.framework/FMIPCore
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@interface FMIPCore.FMIPLocationController : NSObject <CLLocationManagerDelegate> {

	 locationManager;
	 locationShifter;
	 delegate;
	 locationUpdatingQueue;
	 currentLocation;

}
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)init;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
@end

