/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


#import <CoreImage/CoreImage-Structs.h>
@class CIBlendKernel;

@interface CIRenderDestination : NSObject {

	void* _priv;

}

@property (readonly) unsigned long long width; 
@property (readonly) unsigned long long height; 
@property (assign) unsigned long long alphaMode; 
@property (getter=isFlipped) BOOL flipped; 
@property (getter=isDithered) BOOL dithered; 
@property (getter=isClamped) BOOL clamped; 
@property (assign,nonatomic) CGColorSpaceRef colorSpace; 
@property (nonatomic,retain) CIBlendKernel * blendKernel; 
@property (assign) BOOL blendsInDestinationColorSpace; 
+(int)_crashed_because_nonaddressable_memory_was_passed_to_initWithBitmapData:(void*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 format:(int)arg5 ;
-(BOOL)isClamped;
-(CIRenderDestinationInternal*)_internalRepresentation;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(int)format;
-(unsigned long long)width;
-(void)setDithered:(BOOL)arg1 ;
-(id)init;
-(id)imageRepresentation;
-(BOOL)isFlipped;
-(void)setBlendKernel:(CIBlendKernel *)arg1 ;
-(id)initWithBitmapData:(void*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 format:(int)arg5 ;
-(void)_set_YCC_matrix:(int)arg1 fullRange:(BOOL)arg2 deep:(BOOL)arg3 isFloat:(float)arg4 ;
-(RenderDestination*)_internalRenderDestination;
-(void)setFlipped:(BOOL)arg1 ;
-(id)debugDescription;
-(void)setBlendsInDestinationColorSpace:(BOOL)arg1 ;
-(unsigned long long)height;
-(id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned)arg3 colorSpace:(CGColorSpaceRef)arg4 pixelBufferProvider:(/*^block*/id)arg5 ;
-(id)description;
-(id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned)arg3 colorSpace:(CGColorSpaceRef)arg4 surfaceProvider:(/*^block*/id)arg5 ;
-(BOOL)blendsInDestinationColorSpace;
-(id)surface;
-(id)_initWithInternalRenderDestination:(RenderDestination*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(int)arg4 colorspace:(CGColorSpaceRef)arg5 ;
-(void)setCompressed:(BOOL)arg1 ;
-(void)setClamped:(BOOL)arg1 ;
-(void)setAlphaMode:(unsigned long long)arg1 ;
-(CIBlendKernel *)blendKernel;
-(id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 commandBuffer:(id)arg4 mtlTextureProvider:(/*^block*/id)arg5 ;
-(id)initWithIOSurface:(id)arg1 ;
-(void)setLabel:(id)arg1 ;
-(id)initWithMTLTexture:(id)arg1 commandBuffer:(id)arg2 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 ;
-(RenderTask*)_render:(Image*)arg1 withContext:(Context*)arg2 ;
-(BOOL)isCompressed;
-(int)ditherDepth;
-(id)label;
-(BOOL)isDithered;
-(unsigned long long)alphaMode;
-(void)dealloc;
-(id)initWithGLTexture:(unsigned)arg1 target:(unsigned)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 ;
@end

