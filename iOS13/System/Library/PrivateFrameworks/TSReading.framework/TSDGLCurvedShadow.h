/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDGLShadow.h>

@class TSDGLFrameBuffer, TSDGLDataBuffer, TSDGLShader, CIContext;

@interface TSDGLCurvedShadow : TSDGLShadow {

	TSDGLFrameBuffer* mAlphaFrameBuffer;
	TSDGLDataBuffer* mAlphaDataBuffer;
	TSDGLShader* mAlphaShader;
	TSDGLFrameBuffer* mCurvedFrameBuffer;
	TSDGLDataBuffer* mCurvedDataBuffer;
	TSDGLShader* mCurvedShader;
	TSDGLFrameBuffer* mCurveInterpolationFrameBuffer;
	TSDGLDataBuffer* mCurveInterpolationDataBuffer;
	TSDGLShader* mCurveInterpolationShader;
	char* mBuffer;
	CIContext* mCIContext;

}
+(void)applicationDidBecomeActive;
+(void)applicationWillResignActive;
-(void)dealloc;
-(void)drawShadow:(id)arg1 forImage:(CGImageRef)arg2 inContext:(CGContextRef)arg3 forSize:(CGSize)arg4 ;
-(BOOL)p_shrinkImageIfNecessary:(CGImageRef)arg1 originalSize:(CGSize)arg2 newImage:(CGImage*)arg3 newSize:(CGSize*)arg4 ;
-(void)p_bindAlphaShaderForShadow:(id)arg1 framebufferSize:(CGSize)arg2 ;
-(CGImageRef)newCGImageWithTexture:(id)arg1 size:(CGSize)arg2 shader:(id)arg3 framebuffer:(id)arg4 databuffer:(id)arg5 ;
-(void)p_bindCurvedShaderForShadow:(id)arg1 framebufferSize:(CGSize)arg2 ;
-(double)baseBlurRadiusForCurvedShadow:(id)arg1 framebufferSize:(CGSize)arg2 ;
-(void)p_newBlurredImageFromImage:(CGImageRef)arg1 blurRadius:(double)arg2 halfBlurredImage:(CGImage*)arg3 blurredImage:(CGImage*)arg4 framebufferSize:(CGSize)arg5 ;
-(void)p_bindCurvedInterpolationShaderForShadow:(id)arg1 framebufferSize:(CGSize)arg2 ;
-(void)p_newBlurredImageFromImage:(CGImageRef)arg1 blurRadius:(double)arg2 blurredImage:(CGImage*)arg3 framebufferSize:(CGSize)arg4 ;
-(void)p_newTintedImage:(CGImage*)arg1 fromImage:(CGImageRef)arg2 withColor:(SCD_Struct_TS83)arg3 framebufferSize:(CGSize)arg4 ;
-(void)p_deleteFramebuffersWithCurrentGLFramebuffer:(int)arg1 ;
-(void)p_setupCIContextForFramebufferSize:(CGSize)arg1 ;
-(void)p_unbindFramebuffersWithCurrentGLFramebuffer:(int)arg1 ;
-(void)releaseShaders;
@end

