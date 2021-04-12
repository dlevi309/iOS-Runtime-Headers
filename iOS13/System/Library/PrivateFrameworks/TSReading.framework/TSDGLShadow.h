/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDGLShadow : NSObject
+(id)sharedContext;
+(id)renderQueue;
-(void)setupGLTextureParameters;
-(CGImageRef)newCGImageFromGLBuffer:(char**)arg1 ;
-(void)createOffscreenRenderBuffer:(CGSize)arg1 framebuffer:(id)arg2 requiresDepth:(BOOL)arg3 colorRenderBuffer:(unsigned*)arg4 depthRenderBuffer:(unsigned*)arg5 ;
@end

