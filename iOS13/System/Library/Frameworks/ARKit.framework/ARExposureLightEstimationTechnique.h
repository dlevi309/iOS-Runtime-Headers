/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>
#import <ARKit/ARTechniqueBusyState.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString;

@interface ARExposureLightEstimationTechnique : ARTechnique <ARTechniqueBusyState> {

	NSObject*<OS_dispatch_semaphore> _resultSemaphore;
	float _temperature;
	float _lightIntensity;
	ExponentialSmoother<float> _smoother;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isBusy; 
-(id)init;
-(BOOL)isBusy;
-(id)processData:(id)arg1 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(unsigned long long)requiredSensorDataTypes;
@end

