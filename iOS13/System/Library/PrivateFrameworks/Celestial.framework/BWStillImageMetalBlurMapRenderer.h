/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWFilterRenderer.h>

@protocol MTLCommandQueue;
@class NSDictionary, FigSDOFBlurMapRendering, BWPixelBufferPool, NSString;

@interface BWStillImageMetalBlurMapRenderer : NSObject <BWFilterRenderer> {

	NSDictionary* _sensorIDDictionary;
	FigSDOFBlurMapRendering* _sdofBlurMapRenderer;
	BWPixelBufferPool* _blurMapPixelBufferPool;
	SCD_Struct_BW19 _imageDimensions;
	SCD_Struct_BW19 _depthDataMapDimensions;
	id<MTLCommandQueue> _mtlCommandQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) BOOL supportsAnimation; 
@property (nonatomic,readonly) BOOL adjustsMetadata; 
+(void)initialize;
-(void)dealloc;
-(short)type;
-(NSString *)displayName;
-(id)bundleOptionsDictionary;
-(int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3 ;
-(void)renderUsingParameters:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 inputSampleBuffer:(opaqueCMSampleBufferRef)arg3 originalPixelBuffer:(CVBufferRef)arg4 processedPixelBuffer:(CVBufferRef)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)adjustMetadataOfSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)supportsAnimation;
-(BOOL)adjustsMetadata;
-(id)initWithSensorIDDictionary:(id)arg1 imageDimensions:(SCD_Struct_BW19)arg2 depthDataMapDimensions:(SCD_Struct_BW19)arg3 metalCommandQueue:(id)arg4 ;
-(int)_loadAndConfigureSDOFBlurMapRenderer;
-(int)_allocateBlurMapPixelBufferPoolForBuffersOfWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
@end

