/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUICore/PXSidebarDataController.h>

@class UIImage, PUStackView, NSOperationQueue;

@interface PUSidebarDataController : PXSidebarDataController {

	UIImage* _emptyAlbumPlaceholderImage;
	PUStackView* _reusableStackView;

}

@property (nonatomic,readonly) NSOperationQueue * workQueue; 
@property (nonatomic,retain) UIImage * emptyAlbumPlaceholderImage;              //@synthesize emptyAlbumPlaceholderImage=_emptyAlbumPlaceholderImage - In the implementation block
@property (nonatomic,retain) PUStackView * reusableStackView;                   //@synthesize reusableStackView=_reusableStackView - In the implementation block
+(id)_actionManagerWithActionType:(id)arg1 ;
+(id)myAlbumsDataSectionManagerForPhotoLibrary:(id)arg1 withWorkQueue:(id)arg2 ;
+(id)sharedAlbumsDataSectionManagerWithWorkQueue:(id)arg1 ;
+(id)otherAlbumsDataSectionManagerWithWorkQueue:(id)arg1 sectionEnablementProvider:(id)arg2 ;
+(id)fromMyMacAlbumsDataSectionManagerWithWorkQueue:(id)arg1 ;
-(void)requestImageForItem:(id)arg1 parentItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setEmptyAlbumPlaceholderImage:(UIImage *)arg1 ;
-(id)sectionManagersForLibrary:(id)arg1 workQueue:(id)arg2 sectionEnablementProvider:(id)arg3 ;
-(id)_singleItemDataSourceManagerForCollection:(id)arg1 workQueue:(id)arg2 ;
-(id)_imageForGlyphName:(id)arg1 ;
-(void)_requestImageForAsset:(id)arg1 size:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(PUStackView *)reusableStackView;
-(id)_createReusableStackViewWithTargetSize:(CGSize)arg1 ;
-(id)backedPlusButtonImage;
-(id)sidebarCustomSymbolImageWithName:(id)arg1 symbolColor:(id)arg2 scale:(double)arg3 ;
-(void)setReusableStackView:(PUStackView *)arg1 ;
-(UIImage *)emptyAlbumPlaceholderImage;
@end

