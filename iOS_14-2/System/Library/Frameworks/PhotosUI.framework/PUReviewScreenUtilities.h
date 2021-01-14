/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@interface PUReviewScreenUtilities : NSObject
+(BOOL)useCompactControlBarButtonsForReferenceBounds:(CGRect)arg1 ;
+(unsigned long long)doneButtonStyleForReferenceBounds:(CGRect)arg1 ;
+(UIEdgeInsets)_layoutMarginInsetsForSizeSpec:(SCD_Struct_PU33)arg1 ;
+(double)_cameraTopBarHeightForSizeSpec:(SCD_Struct_PU33)arg1 ;
+(CGRect)cameraTopBarFrameForReferenceBounds:(CGRect)arg1 ;
+(double)_cameraBottomBarHeightForSizeSpec:(SCD_Struct_PU33)arg1 ;
+(double)_cameraBottomBarWidthForSizeSpec:(SCD_Struct_PU33)arg1 ;
+(CGRect)cameraBottomBarFrameForReferenceBounds:(CGRect)arg1 ;
+(CGRect)cameraContentFrameForContentAspectRatio:(double)arg1 referenceBounds:(CGRect)arg2 ;
+(CGRect)cameraContentFrameForContentAspectRatio:(double)arg1 referenceBounds:(CGRect)arg2 shouldShiftPreviewForUtilityBar:(BOOL)arg3 ;
+(SCD_Struct_PU34)cameraBottomBarGeometryForReferenceBounds:(CGRect)arg1 withOrientation:(long long)arg2 ;
+(SCD_Struct_PU34)cameraTopBarGeometryForReferenceBounds:(CGRect)arg1 forContentSize:(CGSize)arg2 withOrientation:(long long)arg3 ;
+(SCD_Struct_PU34)cameraContentGeometryForReferenceBounds:(CGRect)arg1 forContentSize:(CGSize)arg2 withOrientation:(long long)arg3 ;
+(SCD_Struct_PU34)orientedGeometryForFrame:(CGRect)arg1 inBounds:(CGRect)arg2 orientation:(long long)arg3 ;
+(SCD_Struct_PU34)cameraContentGeometryForReferenceBounds:(CGRect)arg1 forContentSize:(CGSize)arg2 withOrientation:(long long)arg3 shouldShiftPreviewForUtilityBar:(BOOL)arg4 ;
+(double)_reviewScreenTopBarHeightForSizeSpec:(SCD_Struct_PU33)arg1 ;
+(CGRect)reviewScreenTopBarFrameForReferenceBounds:(CGRect)arg1 ;
+(double)_reviewScreenControlBarHeightForSizeSpec:(SCD_Struct_PU33)arg1 ;
+(double)_reviewScreenControlBarWidthForSizeSpec:(SCD_Struct_PU33)arg1 ;
+(CGRect)reviewScreenControlBarFrameForReferenceBounds:(CGRect)arg1 ;
+(double)_reviewScreenScrubberBarHeightForSizeClass:(unsigned long long)arg1 ;
+(CGRect)_portraitBoundsForReferenceBounds:(CGRect)arg1 ;
+(CGRect)reviewScreenScrubberBarFrameForReferenceBounds:(CGRect)arg1 ;
+(CGRect)reviewScreenScrubberBarFrameForReferenceBounds:(CGRect)arg1 safeAreaInsets:(UIEdgeInsets)arg2 ;
+(SCD_Struct_PU34)reviewScreenScrubberBarGeometryForReferenceBounds:(CGRect)arg1 withOrientation:(long long)arg2 ;
+(SCD_Struct_PU34)_geometryForBarFrame:(CGRect)arg1 inReferenceBounds:(CGRect)arg2 orientation:(long long)arg3 ;
+(SCD_Struct_PU34)_geometryForCameraTopBarFrame:(CGRect)arg1 inReferenceBounds:(CGRect)arg2 forContentSize:(CGSize)arg3 orientation:(long long)arg4 ;
+(CGAffineTransform)_transformForRotationAboutCenterOfReferenceBounds:(CGRect)arg1 withOrientationTransform:(CGAffineTransform)arg2 ;
+(CGRect)_orientedBoundsForReferenceBounds:(CGRect)arg1 sizeClass:(unsigned long long)arg2 ;
+(SCD_Struct_PU34)reviewScreenTopBarGeometryForReferenceBounds:(CGRect)arg1 withOrientation:(long long)arg2 ;
+(SCD_Struct_PU34)reviewScreenScrubberBarGeometryForReferenceBounds:(CGRect)arg1 withOrientation:(long long)arg2 safeAreaInsets:(UIEdgeInsets)arg3 ;
+(SCD_Struct_PU34)reviewScreenControlBarGeometryForReferenceBounds:(CGRect)arg1 withOrientation:(long long)arg2 ;
+(SCD_Struct_PU34)reviewScreenContentGeometryForReferenceBounds:(CGRect)arg1 forContentSize:(CGSize)arg2 withOrientation:(long long)arg3 ;
@end

