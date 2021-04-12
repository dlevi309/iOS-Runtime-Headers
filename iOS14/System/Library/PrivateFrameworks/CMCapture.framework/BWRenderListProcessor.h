/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject, BWPixelBufferPool;

@interface BWRenderListProcessor : NSObject {

	NSObject*<OS_dispatch_queue> _configurationMutexQueue;
	BOOL _configurationQueueAlwaysEmitsOriginalResult;
	BWPixelBufferPool* _renderingPool;
	NSObject*<OS_dispatch_group> _renderingGroup;
	opaqueCMFormatDescriptionRef _mostRecentFormatDescription;

}

@property (nonatomic,readonly) BWPixelBufferPool * renderingPool;              //@synthesize renderingPool=_renderingPool - In the implementation block
@property (assign,nonatomic) BOOL alwaysEmitsOriginalResult; 
+(void)initialize;
-(void)setAlwaysEmitsOriginalResult:(BOOL)arg1 ;
-(id)initWithRenderingPool:(id)arg1 ;
-(void)_finishRenderingUsingRenderList:(id)arg1 result:(unsigned long long)arg2 resultError:(id)arg3 inputSampleBuffer:(opaqueCMSampleBufferRef)arg4 processedPixelBuffer:(CVBufferRef)arg5 finalResultHandler:(/*^block*/id)arg6 ;
-(void)adjustMetadataOfSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingRenderList:(id)arg2 ;
-(BOOL)alwaysEmitsOriginalResult;
-(void)_processRenderList:(id)arg1 parameterListProvider:(id)arg2 inputPixelBuffer:(CVBufferRef)arg3 inputSampleBuffer:(opaqueCMSampleBufferRef)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)_emitProcessedSampleBufferFromRenderList:(id)arg1 result:(unsigned long long)arg2 resultError:(id)arg3 inputSampleBuffer:(opaqueCMSampleBufferRef)arg4 processedPixelBuffer:(CVBufferRef)arg5 finalResultHandler:(/*^block*/id)arg6 ;
-(void)processRenderList:(id)arg1 withParameters:(id)arg2 inputPixelBuffer:(CVBufferRef)arg3 inputSampleBuffer:(opaqueCMSampleBufferRef)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)_continueRenderingUsingRenderList:(id)arg1 result:(unsigned long long)arg2 resultError:(id)arg3 fromRendererNode:(BWRenderListRendererNode*)arg4 parameterNode:(BWRenderListParameterNode*)arg5 inputSampleBuffer:(opaqueCMSampleBufferRef)arg6 inputPixelBuffer:(CVBufferRef)arg7 finalResultHandler:(/*^block*/id)arg8 ;
-(void)processRenderList:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 inputSampleBuffer:(opaqueCMSampleBufferRef)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)waitForAllProcessingToComplete;
-(BWPixelBufferPool *)renderingPool;
-(void)dealloc;
@end

