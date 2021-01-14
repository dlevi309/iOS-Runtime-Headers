/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWFilterRenderer.h>

@protocol OS_dispatch_queue, MTLCommandQueue;
@class NSObject, CIContext, NSString;

@interface BWCoreImageFilterRenderer : NSObject <BWFilterRenderer> {

	BOOL _usingDepth;
	int _portraitRenderQuality;
	float _inputRenderQuality;
	NSObject*<OS_dispatch_queue> _renderingQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	CIContext* _renderingQueueContext;
	id<MTLCommandQueue> _metalCommandQueue;

}

@property (nonatomic,readonly) BOOL usingDepth;                              //@synthesize usingDepth=_usingDepth - In the implementation block
@property (nonatomic,retain) CIContext * renderingQueueContext;              //@synthesize renderingQueueContext=_renderingQueueContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) BOOL supportsAnimation; 
@property (nonatomic,readonly) BOOL adjustsMetadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)prewarmVersion:(unsigned)arg1 ;
+(id)context:(BOOL)arg1 err:(int*)arg2 ;
+(void)_prewarmCoreImagePortraitFilterV1;
-(BOOL)supportsAnimation;
-(id)init;
-(BOOL)adjustsMetadata;
-(int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3 ;
-(void)renderUsingParameters:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 inputSampleBuffer:(opaqueCMSampleBufferRef)arg3 originalPixelBuffer:(CVBufferRef)arg4 processedPixelBuffer:(CVBufferRef)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)adjustMetadataOfSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(short)type;
-(void)_renderUsingParameters:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 inputSampleBuffer:(opaqueCMSampleBufferRef)arg3 originalPixelBuffer:(CVBufferRef)arg4 processedPixelBuffer:(CVBufferRef)arg5 prewarming:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)setRenderingQueueContext:(CIContext *)arg1 ;
-(CIContext *)renderingQueueContext;
-(id)_visionKitFaceObservationToCoreImageDictionary:(id)arg1 orientation:(id)arg2 ;
-(id)coreImageArrayRepresentationForRegion:(id)arg1 ;
-(BOOL)usingDepth;
-(id)initForRenderingWithDepth:(BOOL)arg1 context:(id)arg2 portraitRenderQuality:(int)arg3 metalCommandQueue:(id)arg4 ;
-(NSString *)displayName;
-(void)dealloc;
@end

