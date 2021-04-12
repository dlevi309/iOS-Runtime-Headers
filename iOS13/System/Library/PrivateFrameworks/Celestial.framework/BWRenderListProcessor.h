/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <Celestial/Celestial-Structs.h>
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
-(void)dealloc;
-(void)_processRenderList:(id)arg1 parameterListProvider:(id)arg2 inputPixelBuffer:(CVBufferRef)arg3 inputSampleBuffer:(opaqueCMSampleBufferRef)arg4 resultHandler:(/*^block*/id)arg5 ;
-(BOOL)alwaysEmitsOriginalResult;
-(void)_continueRenderingUsingRenderList:(id)arg1 result:(unsigned long long)arg2 resultError:(id)arg3 fromRendererNode:(BWRenderListRendererNode*)arg4 parameterNode:(BWRenderListParameterNode*)arg5 inputSampleBuffer:(opaqueCMSampleBufferRef)arg6 inputPixelBuffer:(CVBufferRef)arg7 finalResultHandler:(/*^block*/id)arg8 ;
-(void)_finishRenderingUsingRenderList:(id)arg1 result:(unsigned long long)arg2 resultError:(id)arg3 inputSampleBuffer:(opaqueCMSampleBufferRef)arg4 processedPixelBuffer:(CVBufferRef)arg5 finalResultHandler:(/*^block*/id)arg6 ;
-(void)_emitProcessedSampleBufferFromRenderList:(id)arg1 result:(unsigned long long)arg2 resultError:(id)arg3 inputSampleBuffer:(opaqueCMSampleBufferRef)arg4 processedPixelBuffer:(CVBufferRef)arg5 finalResultHandler:(/*^block*/id)arg6 ;
-(id)initWithRenderingPool:(id)arg1 ;
-(void)setAlwaysEmitsOriginalResult:(BOOL)arg1 ;
-(void)processRenderList:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 inputSampleBuffer:(opaqueCMSampleBufferRef)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)processRenderList:(id)arg1 withParameters:(id)arg2 inputPixelBuffer:(CVBufferRef)arg3 inputSampleBuffer:(opaqueCMSampleBufferRef)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)waitForAllProcessingToComplete;
-(void)adjustMetadataOfSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingRenderList:(id)arg2 ;
-(BWPixelBufferPool *)renderingPool;
@end

