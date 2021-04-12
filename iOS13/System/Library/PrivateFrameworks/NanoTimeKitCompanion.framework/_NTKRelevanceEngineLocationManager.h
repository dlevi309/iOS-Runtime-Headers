/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <RelevanceEngine/RELocationManager.h>

@class NTKLocationManager, NSString;

@interface _NTKRelevanceEngineLocationManager : RELocationManager {

	NTKLocationManager* _locationManager;
	NSString* _token;

}
-(id)currentLocation;
-(id)initWithLocationManager:(id)arg1 ;
-(void)stopLocationUpdates;
-(void)startLocationUpdatesWithHandler:(/*^block*/id)arg1 ;
@end

