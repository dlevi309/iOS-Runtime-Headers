/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARTechnique.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject;

@interface ARPersonOcclusionTechnique : ARTechnique {

	CVPixelBufferPoolRef _bgraPixelBufferPool;
	CVPixelBufferPoolRef _depthPixelBufferPool;
	shared_ptr<arkit::RobustExpFilter<float> >* _varExpFilter;
	long long _lastDeviceOrientation;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_semaphore> _processingSemaphore;
	vector<int, std::__1::allocator<int> >* _localPixelDepthDict;
	unsigned long long _minFilterIntermediateBufferSize;
	char* _minFilterIntermediatePooledBuffer;

}
+(float)_confidenceForDepthData:(id)arg1 ;
-(BOOL)isBusy;
-(id)init;
-(void)dealloc;
-(id)_fullDescription;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(int)_minFilterDepthMap:(CVBufferRef)arg1 kernelSize:(unsigned long long)arg2 pResultBuffer:(_CVBuffer*)arg3 ;
-(int)postProcessSegmentation:(CVBufferRef)arg1 depthData:(id)arg2 depthDataSource:(long long)arg3 detectionData:(id)arg4 pResultingDepthBuffer:(_CVBuffer*)arg5 ;
@end

