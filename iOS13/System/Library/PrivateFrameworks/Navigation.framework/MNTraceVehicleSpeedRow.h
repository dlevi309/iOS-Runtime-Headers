/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNTracePlayerTimelineStreamObjectType.h>

@class NSString;

@interface MNTraceVehicleSpeedRow : NSObject <MNTracePlayerTimelineStreamObjectType> {

	double _timestamp;
	double _vehicleSpeed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double position; 
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double vehicleSpeed;                   //@synthesize vehicleSpeed=_vehicleSpeed - In the implementation block
-(double)timestamp;
-(double)position;
-(void)setTimestamp:(double)arg1 ;
-(double)vehicleSpeed;
-(void)setVehicleSpeed:(double)arg1 ;
@end

