/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotoEditToolControllerSpec.h>

@class UIColor, PXLabelSpec;

@interface PUCropToolControllerSpec : PUPhotoEditToolControllerSpec

@property (nonatomic,readonly) double cropRectMargin; 
@property (nonatomic,readonly) double minimumCropInset; 
@property (nonatomic,readonly) CGSize minimumCropSize; 
@property (nonatomic,readonly) CGSize minimumCropHandleViewSize; 
@property (nonatomic,readonly) CGSize cropActionButtonSize; 
@property (nonatomic,readonly) double cropHandleViewLineThickness; 
@property (nonatomic,readonly) double cropHandleViewLineMargin; 
@property (nonatomic,readonly) double standardBottomBarWidth; 
@property (nonatomic,readonly) double standardSideBarHeight; 
@property (nonatomic,readonly) double leftInsetForiPad; 
@property (nonatomic,readonly) double cropTopBarHeight; 
@property (nonatomic,readonly) double cropAspectRatioScrollHeight; 
@property (nonatomic,readonly) double cropAspectFlipperWidth; 
@property (nonatomic,readonly) UIEdgeInsets cropAspectRatioScrollContentInset; 
@property (nonatomic,readonly) UIEdgeInsets cropAspectRatioButtonTitleInset; 
@property (nonatomic,readonly) UIColor * cropAspectButtonColor; 
@property (nonatomic,readonly) UIColor * cropAspectButtonSelectedColor; 
@property (nonatomic,readonly) PXLabelSpec * cropHeaderLabelSpec; 
-(double)standardBottomBarHeight;
-(CGSize)minimumCropSize;
-(double)cropTopBarHeight;
-(double)cropAspectFlipperWidth;
-(double)cropAspectRatioScrollHeight;
-(double)standardSideBarWidth;
-(double)minimumCropInset;
-(double)cropRectMargin;
-(CGSize)minimumCropHandleViewSize;
-(CGSize)cropActionButtonSize;
-(double)cropHandleViewLineMargin;
-(double)cropHandleViewLineThickness;
-(double)leftInsetForiPad;
-(double)standardBottomBarWidth;
-(double)standardSideBarHeight;
-(PXLabelSpec *)cropHeaderLabelSpec;
-(UIEdgeInsets)cropAspectRatioButtonTitleInset;
-(UIColor *)cropAspectButtonSelectedColor;
-(UIEdgeInsets)cropAspectRatioScrollContentInset;
-(UIColor *)cropAspectButtonColor;
@end

