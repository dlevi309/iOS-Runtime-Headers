/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
*/


#import <FaceCore/FaceCore-Structs.h>
@interface FCRImageConversionUtils : NSObject
+(char*)convertCGImageToBufferUsingDataProvider:(CGImageRef)arg1 usingGCD:(BOOL)arg2 dispatchQueue:(id)arg3 ;
+(char*)convertCGImageToBufferUsingRGBDevice:(CGImageRef)arg1 usingGCD:(BOOL)arg2 dispatchQueue:(id)arg3 cacheContext:(BOOL)arg4 ;
+(char*)convertCGImageToBufferUsingGrayDevice:(CGImageRef)arg1 ;
+(char*)convertCGImageToGrayscale:(CGImageRef)arg1 usingGCD:(BOOL)arg2 cacheContext:(BOOL)arg3 ;
@end

