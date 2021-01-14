/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@interface DFMetalUtils : NSObject
+(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 plane:(unsigned long long)arg2 metalDevice:(id)arg3 error:(id*)arg4 ;
+(id)bindIOSurfaceToMTL2DTexture:(IOSurfaceRef)arg1 pixelFormat:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 plane:(unsigned long long)arg5 metalDevice:(id)arg6 error:(id*)arg7 ;
+(id)textureForSize:(CGSize)arg1 pixelFormat:(unsigned)arg2 metalDevice:(id)arg3 ;
+(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 metalDevice:(id)arg2 ;
+(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 textureSize:(CGSize)arg3 plane:(unsigned long long)arg4 metalDevice:(id)arg5 error:(id*)arg6 ;
+(unsigned long long)bytesPerPixelForTextureFormat:(unsigned long long)arg1 ;
@end

