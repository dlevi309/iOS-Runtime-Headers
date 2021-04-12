/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <RelevanceEngine/RELocationManager.h>

@class NTKLocationManager, NSString;

@interface _NTKRelevanceEngineLocationManager : RELocationManager {

	NTKLocationManager* _locationManager;
	NSString* _token;

}
-(id)currentLocation;
-(void)stopLocationUpdates;
-(id)initWithLocationManager:(id)arg1 ;
-(void)startLocationUpdatesWithHandler:(/*^block*/id)arg1 ;
@end

