/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARImageBasedTechnique.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject, ARFaceTrackingManager;

@interface ARFaceTrackingInternalTechnique : ARImageBasedTechnique {

	NSObject*<OS_dispatch_semaphore> _detectionSemaphore;
	ARFaceTrackingManager* _faceTrackingManger;
	NSObject*<OS_dispatch_queue> _processDataQueue;
	long long _maximumNumberOfTrackedFaces;

}

@property (nonatomic,readonly) long long maximumNumberOfTrackedFaces;              //@synthesize maximumNumberOfTrackedFaces=_maximumNumberOfTrackedFaces - In the implementation block
+(BOOL)isSupported;
-(id)initWithOptions:(id)arg1 ;
-(id)processData:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(double)requiredTimeInterval;
-(id)resultDataClasses;
-(unsigned long long)requiredSensorDataTypes;
-(long long)captureBehavior;
-(long long)maximumNumberOfTrackedFaces;
-(id)initWithMaximumNumberOfTrackedFaces:(long long)arg1 options:(id)arg2 ;
-(void)_enqueueImageForFaceTrackingNonBlocking:(id)arg1 ;
@end

