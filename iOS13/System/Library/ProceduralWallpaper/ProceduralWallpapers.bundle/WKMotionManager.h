/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
*/


#import <ProceduralWallpapers/ProceduralWallpapers-Structs.h>
@class CMMotionManager, WKInfiniteImpulseResponseFilter;

@interface WKMotionManager : NSObject {

	double _x;
	double _y;
	double _z;
	SCD_Struct_WK4 _attitude;
	double _roll;
	double _pitch;
	double _yaw;
	double _coefficient;
	double _threshold;
	unsigned long long _referenceFrame;
	CMMotionManager* _motionManager;
	BOOL _motionManagerPaused;
	WKInfiniteImpulseResponseFilter* _motionFilterX;
	WKInfiniteImpulseResponseFilter* _motionFilterY;
	WKInfiniteImpulseResponseFilter* _motionFilterZ;
	WKInfiniteImpulseResponseFilter* _motionFilterAX;
	WKInfiniteImpulseResponseFilter* _motionFilterAY;
	WKInfiniteImpulseResponseFilter* _motionFilterAZ;
	WKInfiniteImpulseResponseFilter* _motionFilterAW;
	WKInfiniteImpulseResponseFilter* _motionFilterRoll;
	WKInfiniteImpulseResponseFilter* _motionFilterPitch;
	WKInfiniteImpulseResponseFilter* _motionFilterYaw;

}

@property (nonatomic,readonly) double x; 
@property (nonatomic,readonly) double y; 
@property (nonatomic,readonly) double z; 
@property (nonatomic,readonly) SCD_Struct_WK4 attitude; 
@property (nonatomic,readonly) double roll; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double yaw; 
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
-(SCD_Struct_WK4)attitude;
-(void)setDeviceMotionUpdateInterval:(double)arg1 ;
-(BOOL)isDeviceMotionAvailable;
-(double)deviceMotionUpdateInterval;
-(void)stopDeviceMotionUpdates;
-(void)startDeviceMotionUpdates;
-(double)accelerometerUpdateInterval;
-(id)initWithCoefficient:(double)arg1 threshold:(double)arg2 ;
-(void)createMotionManager;
-(void)_createFilters;
-(BOOL)zeroMovementSinceLastFrame;
-(void)startDeviceAccelerometerUpdates;
-(void)pauseDeviceMotionUpdates;
-(void)stopDeviceAccelerometerUpdates;
@end

