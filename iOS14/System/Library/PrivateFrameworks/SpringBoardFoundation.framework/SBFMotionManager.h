/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@class CMMotionManager, SBFInfiniteImpulseResponseFilter;

@interface SBFMotionManager : NSObject {

	double _x;
	double _y;
	double _z;
	SCD_Struct_SB20 _attitude;
	double _roll;
	double _pitch;
	double _yaw;
	double _coefficient;
	double _threshold;
	unsigned long long _referenceFrame;
	CMMotionManager* _motionManager;
	BOOL _motionManagerPaused;
	SBFInfiniteImpulseResponseFilter* _motionFilterX;
	SBFInfiniteImpulseResponseFilter* _motionFilterY;
	SBFInfiniteImpulseResponseFilter* _motionFilterZ;
	SBFInfiniteImpulseResponseFilter* _motionFilterAX;
	SBFInfiniteImpulseResponseFilter* _motionFilterAY;
	SBFInfiniteImpulseResponseFilter* _motionFilterAZ;
	SBFInfiniteImpulseResponseFilter* _motionFilterAW;
	SBFInfiniteImpulseResponseFilter* _motionFilterRoll;
	SBFInfiniteImpulseResponseFilter* _motionFilterPitch;
	SBFInfiniteImpulseResponseFilter* _motionFilterYaw;

}

@property (nonatomic,readonly) double x; 
@property (nonatomic,readonly) double y; 
@property (nonatomic,readonly) double z; 
@property (nonatomic,readonly) double roll; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,readonly) SCD_Struct_SB20 attitude; 
@property (nonatomic,readonly) SBFInfiniteImpulseResponseFilter * motionFilterX; 
@property (nonatomic,readonly) SBFInfiniteImpulseResponseFilter * motionFilterY; 
@property (nonatomic,readonly) SBFInfiniteImpulseResponseFilter * motionFilterZ; 
@property (assign,nonatomic) double deviceMotionUpdateInterval; 
@property (assign,nonatomic) double accelerometerUpdateInterval; 
-(double)x;
-(double)roll;
-(double)z;
-(void)_createFilters;
-(double)pitch;
-(void)createMotionManager;
-(double)yaw;
-(id)init;
-(SBFInfiniteImpulseResponseFilter *)motionFilterZ;
-(BOOL)zeroMovementSinceLastFrame;
-(void)startDeviceAccelerometerUpdates;
-(void)pauseDeviceMotionUpdates;
-(void)stopDeviceAccelerometerUpdates;
-(double)y;
-(void)setAccelerometerUpdateInterval:(double)arg1 ;
-(void)stopDeviceMotionUpdates;
-(void)setDeviceMotionUpdateInterval:(double)arg1 ;
-(id)initWithCoefficient:(double)arg1 ;
-(double)deviceMotionUpdateInterval;
-(BOOL)isDeviceMotionAvailable;
-(double)accelerometerUpdateInterval;
-(id)initWithCoefficient:(double)arg1 threshold:(double)arg2 ;
-(SBFInfiniteImpulseResponseFilter *)motionFilterX;
-(SBFInfiniteImpulseResponseFilter *)motionFilterY;
-(SCD_Struct_SB20)attitude;
-(void)startDeviceMotionUpdates;
@end

