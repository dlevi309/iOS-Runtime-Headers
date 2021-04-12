/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
#import <DocumentCamera/DocumentCamera-Structs.h>
@class NSMutableArray, NSObject, NSDictionary, VNSequenceRequestHandler, VNRectangleObservation;

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
	VNRectangleObservation* _previousRectangleObservation;

}
-(void)finish;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)addFrame:(CVBufferRef)arg1 metaData:(id)arg2 frameOptions:(id)arg3 rectangleRequest:(id)arg4 pixelFocalLength:(float)arg5 cameraIntrinsicData:(const CFDataRef)arg6 ;
@end

