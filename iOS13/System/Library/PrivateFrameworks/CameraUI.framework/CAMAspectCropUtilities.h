/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMAspectCropUtilities : NSObject
+(CGSize)finalExpectedSizeWithPhotoMetadata:(id)arg1 aspectRatio:(long long)arg2 ;
+(CGRect)cropRectForAspectRatio:(long long)arg1 inImageBounds:(CGRect)arg2 ;
+(CGSize)finalExpectedSizeWithCaptureDimensions:(SCD_Struct_CA15)arg1 orientation:(int)arg2 aspectRatio:(long long)arg3 ;
+(id)cropFilterForAspectRatio:(long long)arg1 imageSize:(CGSize)arg2 ;
@end

