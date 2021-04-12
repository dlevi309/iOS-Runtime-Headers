/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithCoefficient:(double)arg1 ;
-(double)pitch;
-(double)yaw;
-(double)roll;
-(double)x;
-(double)y;
-(double)z;
-(void)setAccelerometerUpdateInterval:(double)arg1 ;
-(SCD_Struct_SB20)attitude;
-(void)setDeviceMotionUpdateInterval:(double)arg1 ;
-(BOOL)isDeviceMotionAvailable;
-(double)deviceMotionUpdateInterval;
-(void)stopDeviceMotionUpdates;
-(void)startDeviceMotionUpdates;
-(double)accelerometerUpdateInterval;
-(id)initWithCoefficient:(double)arg1 threshold:(double)arg2 ;
-(SBFInfiniteImpulseResponseFilter *)motionFilterX;
-(SBFInfiniteImpulseResponseFilter *)motionFilterY;
-(void)createMotionManager;
-(void)_createFilters;
-(SBFInfiniteImpulseResponseFilter *)motionFilterZ;
-(BOOL)zeroMovementSinceLastFrame;
-(void)startDeviceAccelerometerUpdates;
-(void)pauseDeviceMotionUpdates;
-(void)stopDeviceAccelerometerUpdates;
@end

