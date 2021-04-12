/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@interface NTKLocationManager : NSObject
+(id)sharedLocationManager;
+(id)fallbackLocation;
-(id)previousLocation;
-(id)currentLocation;
-(id)startLocationUpdatesWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopLocationUpdatesForToken:(id)arg1 ;
-(id)anyLocation;
-(id)startLocationUpdatesWithIdentifier:(id)arg1 wantsGroundElevation:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
@end

