/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@interface RemindersUICore.TTRGeoLocationService : NSObject <CLLocationManagerDelegate> {

	 delegate;
	 locationAccuraceUpperBound;
	 maximumLocationUpdatingTime;
	 currentlyGeocodingLocation;
	 pendingLocationsToResolve;
	 locationManager;
	 blockToPerformAfterRequestingInUseAuthorization;

}
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(id)init;
@end

