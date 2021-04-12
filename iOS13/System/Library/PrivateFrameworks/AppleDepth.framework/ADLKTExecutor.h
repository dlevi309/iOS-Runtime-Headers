/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


@protocol MTLDevice, MTLCommandQueue;
#import <AppleDepth/AppleDepth-Structs.h>
@class ADLKTOpticalFlow, NSMutableArray;

@interface ADLKTExecutor : NSObject {

	id<MTLDevice> _device;
	ADLKTOpticalFlow* _lkt;
	BOOL _isFirstTime;
	CGSize _inputSize;
	id<MTLCommandQueue> _commandQueue;
	unsigned _currentFrameIndex;
	NSMutableArray* _pyramids[2];
	NSMutableArray* _features[2];
	NSMutableArray* _derivitives[2];

}
-(id)initWithSize:(CGSize)arg1 ;
-(id)initWithDescriptor:(id)arg1 forLayout:(unsigned long long)arg2 ;
-(long long)executeWithFrame:(CVBufferRef)arg1 intoOpticalFlowBuffer:(CVBufferRef)arg2 ;
-(CVBufferRef)createPixelBufferForOpticalFlow;
-(long long)executeWithFrame:(CVBufferRef)arg1 createOpticalFlowBuffer:(_CVBuffer*)arg2 ;
@end

