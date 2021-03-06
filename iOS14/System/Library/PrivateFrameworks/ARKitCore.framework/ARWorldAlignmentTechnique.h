/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARTechnique.h>

@protocol OS_dispatch_semaphore;
@class ARTimeKeyedList, ARWorldAlignmentData, NSObject, CMMotionManager;

@interface ARWorldAlignmentTechnique : ARTechnique {

	ARTimeKeyedList* _deviceOrientationDataByTime;
	float _deviceOrientationAlignmentAngle;
	float _trackingAlignmentAngle;
	 _trackingAlignmentTranslation;
	BOOL _deviceOrientationReferenced;
	BOOL _trackingReferenced;
	BOOL _imageMirrored;
	long long _lastTrackingStateReason;
	double _lastMajorRelocalizationTimestamp;
	double _lastHeadingUpdateTimestamp;
	BOOL _relocalizing;
	ARWorldAlignmentData* _relocalizedAlignmentData;
	NSObject*<OS_dispatch_semaphore> _dataSemaphore;
	long long _alignment;
	long long _cameraPosition;
	CMMotionManager* _motionManager;

}

@property (nonatomic,readonly) long long alignment;                        //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) long long cameraPosition;                   //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,retain) CMMotionManager * motionManager;              //@synthesize motionManager=_motionManager - In the implementation block
-(BOOL)isBusy;
-(long long)cameraPosition;
-(id)processData:(id)arg1 ;
-(long long)alignment;
-(CMMotionManager *)motionManager;
-(BOOL)isEqual:(id)arg1 ;
-(id)_fullDescription;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(id)resultDataClasses;
-(unsigned long long)requiredSensorDataTypes;
-(id)initWithAlignment:(long long)arg1 cameraPosition:(long long)arg2 ;
-(id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(void)_handleTrackingStateChanges:(id)arg1 initialized:(BOOL*)arg2 relocalized:(BOOL*)arg3 ;
-(void)_referenceDeviceOrientation:(id)arg1 ;
-(id)_referenceTrackingAlignmentWithPoseData:(id)arg1 deviceOrientation:(id)arg2 ;
-(id)_updateHeadingAlignmentWithPoseData:(id)arg1 deviceOrientation:(id)arg2 timestamp:(double)arg3 ;
-(id)_deviceOrientationPoseDataFromDeviceOrientation:(id)arg1 ;
-(float)_trackingAlignmentAngleForPoseData:(id)arg1 deviceOrientation:(id)arg2 ;
-(id)initWithAlignment:(long long)arg1 ;
-(void)setMotionManager:(CMMotionManager *)arg1 ;
@end

