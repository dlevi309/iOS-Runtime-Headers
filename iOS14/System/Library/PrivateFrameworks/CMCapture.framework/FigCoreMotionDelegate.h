/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class CMMotionManager;

@interface FigCoreMotionDelegate : NSObject {

	opaque_pthread_mutex_t ringMutex;
	CMMotionManager* motionManager;
	BOOL manageFusedMotion;
	BOOL manageAccel;
	BOOL manageGravity;
	int accelRingIndex;
	float accelRingX[256];
	float accelRingY[256];
	float accelRingZ[256];
	double accelRingTime[256];
	int fusedRingIndex;
	double fusedRingTime[256];
	BOOL fusedRingDoingBiasEstimation[256];
	SCD_Struct_Fi129 fusedRingAccel[256];
	SCD_Struct_BW94 fusedRingQuaternion[256];
	SCD_Struct_Fi129 fusedRingPosition[256];
	OpaqueFigSemaphoreRef dataSemaphore;
	double latestMotionDataTime;
	double latestGravityDataTime;
	BOOL copyingAllData;
	double dLatestFusedMotionCopied;
	double dLatestTimestamp;
	double dGyroUpdateInterval;
	double timestampLatency;
	double dStartOfLogging;
	BOOL gettingAttitudeChange;
	SCD_Struct_BW94 previousQuaternion;
	SCD_Struct_BW94 currentQuaternion;
	BOOL computingPosition;
	SCD_Struct_Fi141 position;
	SCD_Struct_Fi141 velocity;

}
-(int)getVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
-(void)didUpdateAcceleration:(SCD_Struct_Fi129)arg1 time:(double)arg2 ;
-(id)init;
-(id)initWithAccelerometer:(BOOL)arg1 gravityZ:(BOOL)arg2 fusedMotion:(BOOL)arg3 accelUpdateInterval:(float)arg4 fusedMotionUpdateInterval:(float)arg5 motionCallbackThreadPriority:(id)arg6 ;
-(id)copyAllFusedMotionData;
-(int)updateCurrentQuaternionForTimeStamps:(double)arg1 withEnd:(double)arg2 ;
-(void)updateDeviceCallback:(BOOL)arg1 fusedMotionUpdateInterval:(float)arg2 ;
-(void)didUpdatePositionWithAcceleration:(SCD_Struct_Fi129*)arg1 forTimeStamp:(double)arg2 ;
-(int)getLatestMotionDataTime:(double*)arg1 ;
-(void)didUpdatePositionWithTimeStamp:(double)arg1 ;
-(void)getCurrentQuaternion:(SCD_Struct_BW94*)arg1 ;
-(int)getGravityX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
-(void)getPositionX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
-(int)getFusedVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
-(id)copyFusedMotionData:(double)arg1 endTime:(double)arg2 timeoutValue:(double)arg3 errOut:(int*)arg4 ;
-(id)copyNewFusedMotionData;
-(BOOL)managingAccel;
-(void)getCurrentDeltaAttitudeRoll:(double*)arg1 pitch:(double*)arg2 yaw:(double*)arg3 ;
-(void)didUpdateGravity:(SCD_Struct_Fi129)arg1 time:(double)arg2 ;
-(void)didUpdateFusedMotionWithDeviceMotion:(SCD_Struct_Fi142)arg1 time:(double)arg2 ifsync:(BOOL)arg3 ;
-(BOOL)managingGravity;
-(BOOL)isCopyingAllData;
-(void)getCurrentDeltaQuaternion:(SCD_Struct_BW94*)arg1 ;
-(void)getCurrentAttitudeRoll:(double*)arg1 pitch:(double*)arg2 yaw:(double*)arg3 ;
-(BOOL)managingFusedMotion;
-(int)updateCurrentQuaternionForTimeStamp:(double)arg1 ;
-(void)didUpdateVelocityWithAcceleration:(SCD_Struct_Fi129*)arg1 forTimeStamp:(double)arg2 ;
-(void)updateGyroInterval:(float)arg1 ;
-(void)dealloc;
@end

