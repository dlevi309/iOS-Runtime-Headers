/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class CLGeocoder, CLLocation, CLPlacemark, CLInUseAssertion, NSMutableArray;

@interface NTKGeocoderManager : NSObject {

	CLGeocoder* _geocoder;
	CLLocation* _cachedLocation;
	CLPlacemark* _cachedPlacemark;
	CLInUseAssertion* _locationInUseAssertion;
	NSMutableArray* _handlers;

}
+(id)sharedManager;
-(id)init;
-(id)cachedPlacemarkForLocation:(id)arg1 ;
-(void)_handlePlacemarks:(id)arg1 fromLocation:(id)arg2 error:(id)arg3 ;
-(void)placemarkForLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

