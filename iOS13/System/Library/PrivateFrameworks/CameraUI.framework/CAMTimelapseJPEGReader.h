/*
* Generated on Monday, March 1, 2021 at 2:33:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

