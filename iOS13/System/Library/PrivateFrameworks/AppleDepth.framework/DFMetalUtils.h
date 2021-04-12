/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@interface DFMetalUtils : NSObject
+(unsigned long long)bytesPerPixelForTextureFormat:(unsigned long long)arg1 ;
+(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 plane:(unsigned long long)arg2 metalDevice:(id)arg3 error:(id*)arg4 ;
+(id)bindIOSurfaceToMTL2DTexture:(IOSurfaceRef)arg1 pixelFormat:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 plane:(unsigned long long)arg5 metalDevice:(id)arg6 error:(id*)arg7 ;
+(id)textureForSize:(CGSize)arg1 pixelFormat:(unsigned)arg2 metalDevice:(id)arg3 ;
+(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 metalDevice:(id)arg2 ;
+(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 textureSize:(CGSize)arg3 plane:(unsigned long long)arg4 metalDevice:(id)arg5 error:(id*)arg6 ;
+(CVBufferRef)createPixelBufferWithSize:(CGSize)arg1 pixelFormat:(unsigned)arg2 ;
@end

