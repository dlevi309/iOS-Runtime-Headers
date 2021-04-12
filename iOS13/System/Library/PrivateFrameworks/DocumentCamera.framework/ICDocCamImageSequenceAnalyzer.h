/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
#import <DocumentCamera/DocumentCamera-Structs.h>
@class NSMutableArray, NSObject, NSDictionary, VNSequenceRequestHandler;

@interface ICDocCamImageSequenceAnalyzer : NSObject {

	NSMutableArray* _frameArray;
	NSObject*<OS_dispatch_semaphore> _frameArraySem;
	NSObject*<OS_dispatch_queue> _dq;
	NSDictionary* _sessionOptions;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_semaphore> _queueSizeSem;
	VNSequenceRequestHandler* _seqHandler;
	BOOL _bRealTime;
	BOOL _bSynchronous;

}
-(void)dealloc;
-(void)finish;
-(id)initWithOptions:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)addFrame:(CVBufferRef)arg1 metaData:(id)arg2 frameOptions:(id)arg3 rectangleRequest:(id)arg4 pixelFocalLength:(float)arg5 cameraIntrinsicData:(const CFDataRef)arg6 ;
@end

