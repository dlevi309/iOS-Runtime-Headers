/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

