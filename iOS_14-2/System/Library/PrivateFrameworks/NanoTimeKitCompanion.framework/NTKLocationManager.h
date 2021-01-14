/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@interface NTKLocationManager : NSObject
+(id)sharedLocationManager;
+(id)fallbackLocation;
-(id)currentLocation;
-(id)previousLocation;
-(id)startLocationUpdatesWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopLocationUpdatesForToken:(id)arg1 ;
-(id)anyLocation;
-(id)startLocationUpdatesWithIdentifier:(id)arg1 wantsGroundElevation:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
@end

