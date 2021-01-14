/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNTracePlayerTimelineStreamObjectType.h>

@class NSString;

@interface MNTraceVehicleHeadingRow : NSObject <MNTracePlayerTimelineStreamObjectType> {

	double _timestamp;
	double _vehicleHeading;

}

@property (nonatomic,readonly) double position; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double vehicleHeading;                 //@synthesize vehicleHeading=_vehicleHeading - In the implementation block
-(double)position;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(double)vehicleHeading;
-(void)setVehicleHeading:(double)arg1 ;
@end

