/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKLocationManager.h>

@interface NTKSimulatedLocationManager : NTKLocationManager
-(id)currentLocation;
-(id)init;
-(id)previousLocation;
-(id)startLocationUpdatesWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopLocationUpdatesForToken:(id)arg1 ;
-(id)companionLocation;
-(id)startLocationUpdatesWithIdentifier:(id)arg1 wantsGroundElevation:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
@end

