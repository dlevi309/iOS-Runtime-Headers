/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARImageBasedTechnique.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject, NSUUID;

@interface ARFaceTrackingInternalTechnique : ARImageBasedTechnique {

	NSObject*<OS_dispatch_semaphore> _detectionSemaphore;
	NSObject*<OS_dispatch_queue> _processDataQueue;
	NSUUID* _singleUserAnchorIdentifier;
	long long _maximumNumberOfTrackedFaces;

}

@property (nonatomic,readonly) long long maximumNumberOfTrackedFaces;              //@synthesize maximumNumberOfTrackedFaces=_maximumNumberOfTrackedFaces - In the implementation block
+(void)initialize;
+(BOOL)isSupported;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(id)processData:(id)arg1 ;
-(unsigned long long)requiredSensorDataTypes;
-(double)requiredTimeInterval;
-(id)resultDataClasses;
-(long long)captureBehavior;
-(long long)maximumNumberOfTrackedFaces;
-(id)initWithMaximumNumberOfTrackedFaces:(long long)arg1 options:(id)arg2 ;
-(void)_enqueueImageForFaceTrackingNonBlocking:(id)arg1 ;
-(id)faceTrackingOptionsFromImageData:(id)arg1 withCallback:(/*^block*/id)arg2 ;
@end

