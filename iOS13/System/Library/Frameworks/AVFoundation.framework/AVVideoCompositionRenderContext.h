/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVVideoCompositionRenderContextInternal, AVVideoComposition;

@interface AVVideoCompositionRenderContext : NSObject {

	AVVideoCompositionRenderContextInternal* _internal;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGAffineTransform renderTransform; 
@property (nonatomic,readonly) float renderScale; 
@property (nonatomic,readonly) SCD_Struct_AV87 pixelAspectRatio; 
@property (nonatomic,readonly) SCD_Struct_AV88 edgeWidths; 
@property (nonatomic,readonly) BOOL highQualityRendering; 
@property (nonatomic,readonly) AVVideoComposition * videoComposition; 
+(id)renderContextPropertiesFromFigCompositor:(OpaqueFigVideoCompositorRef)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(SCD_Struct_AV87)pixelAspectRatio;
-(AVVideoComposition *)videoComposition;
-(float)renderScale;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(void)_willDeallocOrFinalize;
-(CGAffineTransform)renderTransform;
-(CVBufferRef)newPixelBuffer;
-(id)initWithFigVideoCompositor:(OpaqueFigVideoCompositorRef)arg1 clientRequiredPixelBufferAttributes:(id)arg2 videoComposition:(id)arg3 pixelBufferPool:(CVPixelBufferPoolRef)arg4 ;
-(BOOL)hasEqualPropertiesToFigVideoCompositor:(OpaqueFigVideoCompositorRef)arg1 ;
-(BOOL)isBufferYCbCr:(CVBufferRef)arg1 ;
-(SCD_Struct_AV88)edgeWidths;
-(BOOL)highQualityRendering;
@end

