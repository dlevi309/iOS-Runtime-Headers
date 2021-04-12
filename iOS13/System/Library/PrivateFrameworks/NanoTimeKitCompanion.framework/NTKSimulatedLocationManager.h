/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKLocationManager.h>

@interface NTKSimulatedLocationManager : NTKLocationManager
-(id)init;
-(id)previousLocation;
-(id)currentLocation;
-(id)startLocationUpdatesWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopLocationUpdatesForToken:(id)arg1 ;
-(id)companionLocation;
-(id)startLocationUpdatesWithIdentifier:(id)arg1 wantsGroundElevation:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
@end

