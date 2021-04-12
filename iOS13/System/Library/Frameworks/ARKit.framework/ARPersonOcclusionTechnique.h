/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>

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

}
+(float)_confidenceForDepthData:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isBusy;
-(id)_fullDescription;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(int)_minFilterDepthMap:(CVBufferRef)arg1 kernelSize:(unsigned long long)arg2 pResultBuffer:(_CVBuffer*)arg3 ;
-(int)postProcessSegmentation:(CVBufferRef)arg1 depthData:(id)arg2 depthDataSource:(long long)arg3 detectionData:(id)arg4 pResultingDepthBuffer:(_CVBuffer*)arg5 ;
@end

