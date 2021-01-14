/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriGeo.framework/SiriGeo
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@interface SiriGeo.LocationController : NSObject <CLLocationManagerDelegate> {

	 locationManager;
	 completion;
	 logObject;

}
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)init;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
@end

