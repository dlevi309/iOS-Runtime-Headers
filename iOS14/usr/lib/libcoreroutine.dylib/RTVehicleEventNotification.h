/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTVehicleEventNotification : RTNotification {

	NSArray* _vehicleEvents;

}

@property (nonatomic,readonly) NSArray * vehicleEvents;              //@synthesize vehicleEvents=_vehicleEvents - In the implementation block
-(NSArray *)vehicleEvents;
-(id)initWithVehicleEvents:(id)arg1 ;
@end

