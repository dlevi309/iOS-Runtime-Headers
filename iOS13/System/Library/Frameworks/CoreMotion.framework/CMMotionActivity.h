/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class NSDate;

@interface CMMotionActivity : CMLogItem {

	CLMotionActivity fState;

}

@property (getter=isVehicleConnected,nonatomic,readonly) BOOL vehicleConnected; 
@property (getter=isVehicleWifiHint,nonatomic,readonly) BOOL vehicleWifiHint; 
@property (getter=isVehicleGpsHint,nonatomic,readonly) BOOL vehicleGpsHint; 
@property (getter=isVehicleBasebandHint,nonatomic,readonly) BOOL vehicleBasebandHint; 
@property (getter=isVehicleMotionHint,nonatomic,readonly) BOOL vehicleMotionHint; 
@property (getter=isVehicleBTHint,nonatomic,readonly) BOOL vehicleBTHint; 
@property (nonatomic,readonly) long long confidence; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) BOOL unknown; 
@property (nonatomic,readonly) BOOL stationary; 
@property (nonatomic,readonly) BOOL walking; 
@property (nonatomic,readonly) BOOL running; 
@property (nonatomic,readonly) BOOL automotive; 
@property (nonatomic,readonly) BOOL cycling; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(long long)confidence;
-(BOOL)walking;
-(BOOL)unknown;
-(BOOL)stationary;
-(BOOL)running;
-(BOOL)cycling;
-(BOOL)automotive;
-(id)initWithMotionActivity:(CLMotionActivity)arg1 ;
-(BOOL)isVehicleConnected;
-(BOOL)isVehicleWifiHint;
-(BOOL)isVehicleGpsHint;
-(BOOL)isVehicleBasebandHint;
-(BOOL)isVehicleMotionHint;
-(BOOL)isVehicleBTHint;
-(CLMotionActivity*)motionActivity;
@end

