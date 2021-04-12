/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWFilterRenderer.h>

@protocol MTLCommandQueue;
@class NSDictionary, FigSDOFBlurMapRendering, BWPixelBufferPool, NSString;

@interface BWStillImageMetalBlurMapRenderer : NSObject <BWFilterRenderer> {

	NSDictionary* _sensorIDDictionary;
	FigSDOFBlurMapRendering* _sdofBlurMapRenderer;
	BWPixelBufferPool* _blurMapPixelBufferPool;
	int _portraitRenderQuality;
	SCD_Struct_BW2 _imageDimensions;
	SCD_Struct_BW2 _depthDataMapDimensions;
	id<MTLCommandQueue> _mtlCommandQueue;

}

@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) BOOL supportsAnimation; 
@property (nonatomic,readonly) BOOL adjustsMetadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(BOOL)supportsAnimation;
-(BOOL)adjustsMetadata;
-(id)bundleOptionsDictionary;
-(int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3 ;
-(void)renderUsingParameters:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 inputSampleBuffer:(opaqueCMSampleBufferRef)arg3 originalPixelBuffer:(CVBufferRef)arg4 processedPixelBuffer:(CVBufferRef)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)adjustMetadataOfSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithSensorIDDictionary:(id)arg1 imageDimensions:(SCD_Struct_BW2)arg2 depthDataMapDimensions:(SCD_Struct_BW2)arg3 portraitRenderQuality:(int)arg4 metalCommandQueue:(id)arg5 ;
-(short)type;
-(int)_loadAndConfigureSDOFBlurMapRenderer;
-(int)_allocateBlurMapPixelBufferPoolForBuffersOfWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(NSString *)displayName;
-(void)dealloc;
@end

