/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
*/


#import <TextureIO/TextureIO-Structs.h>
@interface TXRDataConverter : NSObject
+(id)newImageFromSourceImage:(id)arg1 newPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 gammaDegamma:(BOOL)arg4 error:(id*)arg5 ;
+(id)newPixelFormatSetForCGImage:(CGImageRef)arg1 displayGamut:(unsigned long long)arg2 options:(id)arg3 ;
+(id)newImageFromSourceImage:(id)arg1 newPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 multiplyAlpha:(BOOL)arg4 gammaDegamma:(BOOL)arg5 error:(id*)arg6 ;
@end

