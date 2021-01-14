/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARTechnique.h>
#import <ARKitCore/ARTechniqueBusyState.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString;

@interface ARExposureLightEstimationTechnique : ARTechnique <ARTechniqueBusyState> {

	NSObject*<OS_dispatch_semaphore> _resultSemaphore;
	float _temperature;
	float _lightIntensity;
	ExponentialSmoother<float> _smoother;

}

@property (nonatomic,readonly) BOOL isBusy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isBusy;
-(id)processData:(id)arg1 ;
-(id)init;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(unsigned long long)requiredSensorDataTypes;
@end

