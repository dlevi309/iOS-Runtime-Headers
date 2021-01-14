/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)confidence;
-(CLMotionActivity*)motionActivity;
-(BOOL)running;
-(BOOL)unknown;
-(BOOL)stationary;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMotionActivity:(CLMotionActivity)arg1 ;
-(BOOL)isVehicleBTHint;
-(BOOL)isVehicleConnected;
-(BOOL)isVehicleWifiHint;
-(BOOL)isVehicleGpsHint;
-(BOOL)isVehicleBasebandHint;
-(BOOL)isVehicleMotionHint;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)cycling;
-(BOOL)walking;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)automotive;
@end

