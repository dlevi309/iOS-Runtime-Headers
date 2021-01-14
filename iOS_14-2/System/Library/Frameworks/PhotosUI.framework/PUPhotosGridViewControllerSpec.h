/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class PUPhotosPickerViewControllerSpec, PUAlbumPickerViewControllerSpec;

@interface PUPhotosGridViewControllerSpec : NSObject {

	BOOL _canDisplayOptionsInPopover;
	BOOL _canDisplaySlideshowButton;
	BOOL _canDisplayEditActionsInNavigationBar;
	BOOL _usesStackPopTransition;
	PUPhotosPickerViewControllerSpec* _photosPickerViewControllerSpec;
	PUAlbumPickerViewControllerSpec* _albumPickerViewControllerSpec;
	long long _sizeSubclass;
	CGSize _baseInterItemSpacing;
	UIEdgeInsets _safeAreaInsets;
	UIEdgeInsets _layoutMargins;

}

@property (assign,nonatomic) UIEdgeInsets safeAreaInsets;                                                      //@synthesize safeAreaInsets=_safeAreaInsets - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets layoutMargins;                                                     //@synthesize layoutMargins=_layoutMargins - In the implementation block
@property (nonatomic,readonly) long long sizeSubclass;                                                         //@synthesize sizeSubclass=_sizeSubclass - In the implementation block
@property (nonatomic,readonly) CGSize contentSizeForViewInPopover; 
@property (nonatomic,readonly) CGSize baseInterItemSpacing;                                                    //@synthesize baseInterItemSpacing=_baseInterItemSpacing - In the implementation block
@property (nonatomic,readonly) unsigned short thumbnailImageFormat; 
@property (nonatomic,readonly) long long cellFillMode; 
@property (nonatomic,readonly) long long cellBannerTextAlignment; 
@property (nonatomic,readonly) BOOL canDisplayOptionsInPopover;                                                //@synthesize canDisplayOptionsInPopover=_canDisplayOptionsInPopover - In the implementation block
@property (nonatomic,readonly) BOOL canDisplaySlideshowButton;                                                 //@synthesize canDisplaySlideshowButton=_canDisplaySlideshowButton - In the implementation block
@property (nonatomic,readonly) BOOL shouldPlaceSelectAllButtonInRightNavigationBar; 
@property (nonatomic,readonly) BOOL shouldPlaceDeleteInCenterToolbarPosition; 
@property (nonatomic,readonly) BOOL canDisplayEditActionsInNavigationBar;                                      //@synthesize canDisplayEditActionsInNavigationBar=_canDisplayEditActionsInNavigationBar - In the implementation block
@property (nonatomic,readonly) BOOL canCommitPreview; 
@property (nonatomic,readonly) BOOL usesStackPopTransition;                                                    //@synthesize usesStackPopTransition=_usesStackPopTransition - In the implementation block
@property (nonatomic,readonly) BOOL displaysAvalancheStacks; 
@property (nonatomic,readonly) BOOL wantsBackButtonTitleForPhotoBrowser; 
@property (nonatomic,readonly) PUPhotosPickerViewControllerSpec * photosPickerViewControllerSpec;              //@synthesize photosPickerViewControllerSpec=_photosPickerViewControllerSpec - In the implementation block
@property (nonatomic,readonly) PUAlbumPickerViewControllerSpec * albumPickerViewControllerSpec;                //@synthesize albumPickerViewControllerSpec=_albumPickerViewControllerSpec - In the implementation block
@property (nonatomic,readonly) BOOL wantsCustomNavigationTransition; 
@property (nonatomic,readonly) long long forceLoadInitialSectionCount; 
@property (nonatomic,readonly) double sectionHeaderHeight; 
@property (nonatomic,readonly) long long sectionHeaderStyle; 
@property (nonatomic,readonly) UIEdgeInsets sectionHeaderInsets; 
@property (nonatomic,readonly) UIEdgeInsets gridContentInsets; 
-(void)setSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)safeAreaInsets;
-(double)sectionHeaderHeight;
-(id)init;
-(CGSize)baseInterItemSpacing;
-(void)configureCollectionViewGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(UIEdgeInsets)arg3 ;
-(BOOL)canDisplayEditActionsInNavigationBar;
-(unsigned short)thumbnailImageFormat;
-(UIEdgeInsets)layoutMargins;
-(unsigned long long)supportedInterfaceOrientations;
-(UIEdgeInsets)sectionHeaderInsets;
-(BOOL)usesStackPopTransition;
-(BOOL)shouldUseAspectItems;
-(long long)sizeSubclass;
-(PUPhotosPickerViewControllerSpec *)photosPickerViewControllerSpec;
-(BOOL)canDisplayOptionsInPopover;
-(long long)forceLoadInitialSectionCount;
-(BOOL)canCommitPreview;
-(BOOL)wantsBackButtonTitleForPhotoBrowser;
-(long long)cellBannerTextAlignment;
-(long long)sectionHeaderStyle;
-(BOOL)displaysAvalancheStacks;
-(BOOL)shouldPlaceSelectAllButtonInRightNavigationBar;
-(BOOL)canDisplaySlideshowButton;
-(long long)cellFillMode;
-(PUAlbumPickerViewControllerSpec *)albumPickerViewControllerSpec;
-(BOOL)wantsCustomNavigationTransition;
-(BOOL)shouldPlaceDeleteInCenterToolbarPosition;
-(UIEdgeInsets)gridContentInsets;
-(CGSize)contentSizeForViewInPopover;
@end

