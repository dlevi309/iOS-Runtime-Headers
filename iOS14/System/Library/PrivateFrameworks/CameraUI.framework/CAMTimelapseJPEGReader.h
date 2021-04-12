/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMTimelapseJPEGReader : NSObject
+(id)_decodeOptionsWithMaxPixelSize:(long long)arg1 applyTransform:(BOOL)arg2 useBGRA:(BOOL)arg3 ;
+(BOOL)_hasExifRotation:(id)arg1 ;
+(CVBufferRef)createPixelBufferFromData:(id)arg1 applyTransform:(BOOL)arg2 maxPixelSize:(long long)arg3 useBGRA:(BOOL)arg4 cleanApertureSize:(CGSize)arg5 ;
+(id)newDataFromFilePath:(id)arg1 ;
+(CVBufferRef)createPixelBufferFromData:(id)arg1 applyTransform:(BOOL)arg2 maxPixelSize:(long long)arg3 useBGRA:(BOOL)arg4 ;
+(CGImageRef)createCGImageFromData:(id)arg1 applyTransform:(BOOL)arg2 maxPixelSize:(long long)arg3 useBGRA:(BOOL)arg4 ;
@end

