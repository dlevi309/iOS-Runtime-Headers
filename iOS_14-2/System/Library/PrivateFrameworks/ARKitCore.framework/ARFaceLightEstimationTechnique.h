/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARTechnique.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject, ARDirectionalLightEstimate;

@interface ARFaceLightEstimationTechnique : ARTechnique {

	NSObject*<OS_dispatch_semaphore> _resultSemaphore;
	ARDirectionalLightEstimate* _lastLightEstimate;
	float _lightIntensity;
	float _temperature;
	ExponentialSmoother<float> _smoother;
	NSObject*<OS_dispatch_queue> _lightEstimationQueue;
	NSObject*<OS_dispatch_semaphore> _estimatingSemaphore;
	FacialLightEstimation* _faceLightEstimator;
	float _shSmoothingAlpha;

}
+(float)_computeShSmoothingAlpha:(double)arg1 ;
+(shared_ptr<arkit::FaceTrackingData>*)_transformFaceTrackingData:(id)arg1 ;
-(id)processData:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(unsigned long long)requiredSensorDataTypes;
@end

