/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol HUWallpaperPhotoCollectionViewControllerDelegate;
@class HUWallpaperPhotoCollectionFlowLayout, PHCachingImageManager, PHFetchResult, NAFuture, NSString;

@interface HUWallpaperPhotoCollectionViewController : UICollectionViewController <PHPhotoLibraryChangeObserver> {

	BOOL _initialScrollToBottom;
	id<HUWallpaperPhotoCollectionViewControllerDelegate> _delegate;
	long long _assetCollectionSubtype;
	HUWallpaperPhotoCollectionFlowLayout* _flowLayout;
	PHCachingImageManager* _imageManager;
	PHFetchResult* _assetsFetchResult;
	NAFuture* _imageDownloadFuture;

}

@property (assign,nonatomic,__weak) HUWallpaperPhotoCollectionFlowLayout * flowLayout;                            //@synthesize flowLayout=_flowLayout - In the implementation block
@property (nonatomic,retain) PHCachingImageManager * imageManager;                                                //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,retain) PHFetchResult * assetsFetchResult;                                                   //@synthesize assetsFetchResult=_assetsFetchResult - In the implementation block
@property (nonatomic,retain) NAFuture * imageDownloadFuture;                                                      //@synthesize imageDownloadFuture=_imageDownloadFuture - In the implementation block
@property (assign,nonatomic) BOOL initialScrollToBottom;                                                          //@synthesize initialScrollToBottom=_initialScrollToBottom - In the implementation block
@property (nonatomic,__weak,readonly) id<HUWallpaperPhotoCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long assetCollectionSubtype;                                                  //@synthesize assetCollectionSubtype=_assetCollectionSubtype - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<HUWallpaperPhotoCollectionViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setFlowLayout:(HUWallpaperPhotoCollectionFlowLayout *)arg1 ;
-(HUWallpaperPhotoCollectionFlowLayout *)flowLayout;
-(void)photoLibraryDidChange:(id)arg1 ;
-(long long)assetCollectionSubtype;
-(PHCachingImageManager *)imageManager;
-(void)setImageManager:(PHCachingImageManager *)arg1 ;
-(PHFetchResult *)assetsFetchResult;
-(id)initWithTitle:(id)arg1 fetchResult:(id)arg2 assetCollectionSubtype:(long long)arg3 delegate:(id)arg4 ;
-(NAFuture *)imageDownloadFuture;
-(BOOL)initialScrollToBottom;
-(void)setInitialScrollToBottom:(BOOL)arg1 ;
-(id)imageFutureForAsset:(id)arg1 cloudAllowed:(BOOL)arg2 ;
-(void)setImageDownloadFuture:(NAFuture *)arg1 ;
-(void)setAssetsFetchResult:(PHFetchResult *)arg1 ;
@end

