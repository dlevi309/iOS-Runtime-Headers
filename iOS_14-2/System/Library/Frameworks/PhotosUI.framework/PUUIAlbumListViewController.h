/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAlbumListViewController.h>
#import <libobjc.A.dylib/PUPhotoPickerServicesConsumer.h>

@protocol PUPhotoPicker;
@class UIBarButtonItem, PUUIImagePickerControllerHelper, NSArray, NSString;

@interface PUUIAlbumListViewController : PUAlbumListViewController <PUPhotoPickerServicesConsumer> {

	UIBarButtonItem* _imagePickerCancelButton;
	BOOL _collectionsFetchResultIsValid;
	PUUIImagePickerControllerHelper* __imagePickerControllerHelper;
	id<PUPhotoPicker> _photoPicker;
	NSArray* __imagePickerMediaTypes;
	unsigned long long __imagePickerAssetTypes;

}

@property (setter=_setImagePickerMediaTypes:,nonatomic,copy) NSArray * _imagePickerMediaTypes;                         //@synthesize _imagePickerMediaTypes=__imagePickerMediaTypes - In the implementation block
@property (assign,setter=_setImagePickerAssetTypes:,nonatomic) unsigned long long _imagePickerAssetTypes;              //@synthesize _imagePickerAssetTypes=__imagePickerAssetTypes - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoPicker> photoPicker;                                                     //@synthesize photoPicker=_photoPicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)pu_wantsNavigationBarVisible;
-(void)updateNavigationBarAnimated:(BOOL)arg1 ;
-(id)assetsFilterPredicate;
-(unsigned long long)filteringAssetTypes;
-(BOOL)shouldAllowEmailInAlbumSubtitle;
-(BOOL)shouldShowAllPhotosItem;
-(BOOL)shouldHideEmptyCollections;
-(BOOL)canShowAvatarViews;
-(id)newGridViewControllerForFolder:(id)arg1 ;
-(id)newGridViewControllerForAssetCollection:(id)arg1 ;
-(void)viewDidLoad;
-(id)newGridViewControllerForAllPhotos;
-(id<PUPhotoPicker>)photoPicker;
-(void)setPhotoPicker:(id<PUPhotoPicker>)arg1 ;
-(void)_invalidateCollectionsFetchResult;
-(void)_updateCollectionsFetchResultIfNeeded;
-(id)_imagePickerControllerHelper;
-(void)_handleImagePickerCancel:(id)arg1 ;
-(NSArray *)_imagePickerMediaTypes;
-(unsigned long long)_imagePickerAssetTypes;
-(void)_setImagePickerAssetTypes:(unsigned long long)arg1 ;
-(void)loadView;
-(void)_setImagePickerMediaTypes:(id)arg1 ;
-(void)setPhotoPickerMediaTypes:(id)arg1 ;
@end

