/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUViewControllerSpec.h>

@interface PUPhotoEditViewControllerSpec : PUViewControllerSpec

@property (nonatomic,readonly) UIEdgeInsets previewViewInsetsPortrait; 
@property (nonatomic,readonly) UIEdgeInsets previewViewInsetsLandscape; 
@property (nonatomic,readonly) double toolbarLongSideMargin; 
@property (nonatomic,readonly) double toolbarLongSideWideMargin; 
@property (nonatomic,readonly) BOOL shouldDisplaySecondaryToolButtonsInMainToolbar; 
@property (nonatomic,readonly) BOOL shouldDisplayExtensionButtonInMainToolbar; 
@property (nonatomic,readonly) BOOL shouldDisplayCompactToolbar; 
@property (nonatomic,readonly) BOOL shouldAnchorLightingAgainstToolbar; 
-(UIEdgeInsets)previewViewInsetsLandscape;
-(UIEdgeInsets)previewViewInsetsPortrait;
-(BOOL)shouldDisplaySecondaryToolButtonsInMainToolbar;
-(double)toolbarLongSideMargin;
-(double)toolbarLongSideWideMargin;
-(BOOL)shouldDisplayExtensionButtonInMainToolbar;
-(BOOL)shouldAnchorLightingAgainstToolbar;
-(BOOL)shouldDisplayCompactToolbar;
@end

