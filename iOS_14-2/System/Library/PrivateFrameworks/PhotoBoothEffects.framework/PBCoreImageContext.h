/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
*/

#import <PhotoBoothEffects/PhotoBoothEffects-Structs.h>
#import <PhotoBoothEffects/PBContext.h>

@class EAGLContext, CIContext;

@interface PBCoreImageContext : PBContext {

	EAGLContext* _glesContext;
	CVOpenGLESTextureCacheRef _textureCache;
	CVBufferRef _inputTexture;
	CVBufferRef _outputTexture;
	CVPixelBufferPoolRef _smallPool;
	CVPixelBufferPoolRef _largePool;
	CGSize _smallPoolSize;
	CGSize _largePoolSize;
	CAImageQueueRef _outputImageQueue;
	CIContext* _ciContext;
	CVBufferRef _inputPixelBuffer;
	CVBufferRef _outputPixelBuffer;
	BOOL _render9Up;
	BOOL _renderForSave;
	CGSize _outputSize;

}
-(id)initWithOptions:(id)arg1 ;
-(unsigned)outputTexture;
-(void)setOutputSize:(CGSize)arg1 ;
-(void)setInputPixelBuffer:(CVBufferRef)arg1 ;
-(void)setOutputPixelBuffer:(CVBufferRef)arg1 ;
-(unsigned)inputTexture;
-(void)dealloc;
-(CGSize)outputSize;
-(CVBufferRef)inputPixelBuffer;
-(BOOL)renderForSave;
-(id)ciContext;
-(CVBufferRef)outputPixelBuffer;
-(BOOL)render9Up;
-(CVBufferRef)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 mirrored:(BOOL)arg3 ;
-(void)renderFilter:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 ;
-(void)renderFilter:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 mirrored:(BOOL)arg3 ;
-(void)renderNineUp:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 ;
-(void)renderNineUp:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 mirrored:(BOOL)arg3 ;
-(CAImageQueueRef)outputImageQueue;
-(void)setOutputImageQueue:(CAImageQueueRef)arg1 ;
-(CVPixelBufferPoolRef)largePool;
-(void)setLargePool:(CVPixelBufferPoolRef)arg1 ;
-(CVPixelBufferPoolRef)smallPool;
-(void)setSmallPool:(CVPixelBufferPoolRef)arg1 ;
-(void)setInputPixelBuffer:(CVBufferRef)arg1 mapTexture:(BOOL)arg2 ;
-(void)setOutputPixelBuffer:(CVBufferRef)arg1 mapTexture:(BOOL)arg2 ;
-(void)setRender9Up:(BOOL)arg1 ;
-(void)setRenderForSave:(BOOL)arg1 ;
-(void)_createPixelBuffer:(_CVBuffer*)arg1 withSize:(CGSize)arg2 ;
@end

