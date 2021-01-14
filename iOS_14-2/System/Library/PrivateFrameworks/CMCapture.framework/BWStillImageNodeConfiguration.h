/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol MTLCommandQueue;
@class BWInferenceScheduler;

@interface BWStillImageNodeConfiguration : NSObject {

	id<MTLCommandQueue> _metalCommandQueue;
	int _depthDataType;
	BWInferenceScheduler* _inferenceScheduler;

}

@property (nonatomic,retain) id<MTLCommandQueue> metalCommandQueue;                  //@synthesize metalCommandQueue=_metalCommandQueue - In the implementation block
@property (assign,nonatomic) int depthDataType;                                      //@synthesize depthDataType=_depthDataType - In the implementation block
@property (nonatomic,retain) BWInferenceScheduler * inferenceScheduler;              //@synthesize inferenceScheduler=_inferenceScheduler - In the implementation block
-(void)setDepthDataType:(int)arg1 ;
-(id<MTLCommandQueue>)metalCommandQueue;
-(void)setMetalCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(BWInferenceScheduler *)inferenceScheduler;
-(void)setInferenceScheduler:(BWInferenceScheduler *)arg1 ;
-(int)depthDataType;
-(void)dealloc;
@end

