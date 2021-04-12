/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/


#import <MOVStreamIO/MOVStreamIO-Structs.h>
@interface PixelBufferUtility : NSObject
+(BOOL)isPixelBufferRawBayer:(CVBufferRef)arg1 ;
+(BOOL)isPixelBufferCompandedRawBayer:(CVBufferRef)arg1 ;
+(CFDictionaryRef)createPixelBufferAttributesWithWidth:(unsigned)arg1 height:(unsigned)arg2 extendedPixelsPerRow:(unsigned)arg3 pixelFormat:(int)arg4 bytesPerRowAlignment:(unsigned)arg5 planeAlignment:(unsigned)arg6 ;
+(CFDictionaryRef)createPixelBufferAttributesWithWidth:(unsigned)arg1 height:(unsigned)arg2 pixelFormat:(int)arg3 bytesPerRow:(unsigned)arg4 ;
+(BOOL)splitBayerBuffer:(CVBufferRef)arg1 intoWarholPixelBuffer:(CVBufferRef)arg2 shiftBitsLeftBy:(int)arg3 ;
+(BOOL)splitCompandedBayerBuffer:(CVBufferRef)arg1 intoCompandedWarholPixelBuffer:(CVBufferRef)arg2 ;
+(CVBufferRef)createRawPixelBufferWithWidth:(unsigned)arg1 height:(unsigned)arg2 extendedRows:(unsigned)arg3 extendedPixelsPerRow:(unsigned)arg4 pixelFormat:(int)arg5 bytesPerRowAlignment:(unsigned)arg6 planeAlignment:(unsigned)arg7 bufferCacheMode:(unsigned)arg8 ;
+(BOOL)isPixelFormatRawBayer:(unsigned)arg1 ;
+(BOOL)isPixelFormatCompandedRawBayer:(unsigned)arg1 ;
+(CVBufferRef)createRawPixelBufferWithWidth:(unsigned)arg1 height:(unsigned)arg2 pixelFormat:(int)arg3 bytesPerRow:(unsigned)arg4 ;
+(CVBufferRef)newPixelBufferRefCopy:(CVBufferRef)arg1 ;
+(BOOL)copyFromPixelBuffer:(CVBufferRef)arg1 toPixelBuffer:(CVBufferRef)arg2 andShiftBits:(int)arg3 ;
+(CVPixelBufferPoolRef)createNewL010PixelBufferPoolWithReferencePixelBuffer:(CVBufferRef)arg1 minimumBufferCount:(unsigned long long)arg2 ;
+(CVPixelBufferPoolRef)createNewL008PixelBufferPoolWithReferencePixelBuffer:(CVBufferRef)arg1 minimumBufferCount:(unsigned long long)arg2 ;
+(CVBufferRef)newWarholBufferFromRawBayerPixelBuffer:(CVBufferRef)arg1 withPixelBufferPool:(CVPixelBufferPoolRef)arg2 ;
+(CVBufferRef)newWarholBufferFromCompandedRawBayerPixelBuffer:(CVBufferRef)arg1 withPixelBufferPool:(CVPixelBufferPoolRef)arg2 ;
+(CVBufferRef)newWarholBufferFromRawBayerPixelBuffer:(CVBufferRef)arg1 ;
+(BOOL)fillPlaneOfPixelBuffer:(CVBufferRef)arg1 planeIndex:(int)arg2 withValue:(unsigned short)arg3 ;
+(void)writeBuffer:(const char*)arg1 ofSize:(unsigned long long)arg2 toFile:(id)arg3 ;
+(BOOL)joinWarholBuffer:(CVBufferRef)arg1 intoBayerBuffer:(CVBufferRef)arg2 shiftBitsRightBy:(int)arg3 msbReplication:(BOOL)arg4 ;
+(BOOL)joinCompandedWarholBuffer:(CVBufferRef)arg1 intoCompandedBayerBuffer:(CVBufferRef)arg2 ;
+(BOOL)verticallySplitPixelBuffer:(CVBufferRef)arg1 intoTopPixelBuffer:(CVBufferRef)arg2 bottomPixelBuffer:(CVBufferRef)arg3 ;
+(BOOL)concatPixelBuffer:(CVBufferRef)arg1 withPixelBuffer:(CVBufferRef)arg2 targetPixelBuffer:(CVBufferRef)arg3 ;
+(unsigned long long)extendedPixelsPerRowOfPixelBuffer:(CVBufferRef)arg1 ;
+(CVPixelBufferPoolRef)createPixelBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned)arg3 extendedPixelsPerRow:(unsigned long long)arg4 minBufferCount:(unsigned long long)arg5 ;
+(CVPixelBufferPoolRef)createPixelBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned)arg3 bytesPerRow:(unsigned long long)arg4 minBufferCount:(unsigned long long)arg5 ;
+(CVBufferRef)pixelBufferFromPool:(CVPixelBufferPoolRef)arg1 ;
+(BOOL)copyPixelBuffer:(CVBufferRef)arg1 toPixelBuffer:(CVBufferRef)arg2 bytesPerPixel:(unsigned long long)arg3 ;
+(BOOL)copyData:(id)arg1 toNonPlanarPixelBuffer:(CVBufferRef)arg2 ;
+(id)copyNonPlanarPixelBufferData:(CVBufferRef)arg1 ;
@end

