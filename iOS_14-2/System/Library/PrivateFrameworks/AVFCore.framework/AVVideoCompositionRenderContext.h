/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVVideoCompositionRenderContextInternal, AVVideoComposition;

@interface AVVideoCompositionRenderContext : NSObject {

	AVVideoCompositionRenderContextInternal* _internal;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGAffineTransform renderTransform; 
@property (nonatomic,readonly) float renderScale; 
@property (nonatomic,readonly) SCD_Struct_AV73 pixelAspectRatio; 
@property (nonatomic,readonly) NSEdgeInsets edgeWidths; 
@property (nonatomic,readonly) BOOL highQualityRendering; 
@property (nonatomic,readonly) AVVideoComposition * videoComposition; 
+(id)renderContextPropertiesFromFigCompositor:(OpaqueFigVideoCompositorRef)arg1 ;
-(CGSize)size;
-(NSEdgeInsets)edgeWidths;
-(SCD_Struct_AV73)pixelAspectRatio;
-(CGAffineTransform)renderTransform;
-(BOOL)hasEqualPropertiesToFigVideoCompositor:(OpaqueFigVideoCompositorRef)arg1 ;
-(id)initWithFigVideoCompositor:(OpaqueFigVideoCompositorRef)arg1 clientRequiredPixelBufferAttributes:(id)arg2 videoComposition:(id)arg3 pixelBufferPool:(CVPixelBufferPoolRef)arg4 ;
-(BOOL)isBufferYCbCr:(CVBufferRef)arg1 ;
-(BOOL)highQualityRendering;
-(float)renderScale;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(AVVideoComposition *)videoComposition;
-(void)_willDeallocOrFinalize;
-(CVBufferRef)newPixelBuffer;
-(void)dealloc;
@end

