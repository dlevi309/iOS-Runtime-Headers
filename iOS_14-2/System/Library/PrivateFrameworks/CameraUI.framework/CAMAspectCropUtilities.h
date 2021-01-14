/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMAspectCropUtilities : NSObject
+(CGRect)cropRectForAspectRatio:(long long)arg1 inImageBounds:(CGRect)arg2 ;
+(CGSize)finalExpectedSizeWithCaptureDimensions:(SCD_Struct_CA15)arg1 orientation:(int)arg2 aspectRatio:(long long)arg3 ;
+(CGSize)finalExpectedSizeWithPhotoMetadata:(id)arg1 aspectRatio:(long long)arg2 ;
+(id)cropFilterForAspectRatio:(long long)arg1 imageSize:(CGSize)arg2 ;
@end

