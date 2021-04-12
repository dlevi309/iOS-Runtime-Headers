/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>

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
-(id)init;
-(void)dealloc;
-(id)processData:(id)arg1 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(unsigned long long)requiredSensorDataTypes;
@end

