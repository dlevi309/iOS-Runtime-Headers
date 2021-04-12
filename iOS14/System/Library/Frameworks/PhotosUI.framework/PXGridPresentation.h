/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PXGridPresentation <NSObject>
@optional
-(id)createPanoramaViewController;
-(id)createPlacesViewControllerForAssetCollection:(id)arg1;
-(id)createAlbumListViewControllerWithCollectionList:(id)arg1;
-(id)createPhotosAlbumViewControllerForAlbum:(id)arg1 withFetchResult:(id)arg2;
-(id)createImportHistoryGridViewControllerWithCollection:(id)arg1;
-(void)createGridViewControllerWithAssets:(id)arg1 withTitle:(id)arg2 hideTabBar:(BOOL)arg3 gridPresentationContext:(long long)arg4 containerViewController:(id)arg5 barsUpdateDelegate:(id)arg6 andCompletion:(/*^block*/id)arg7;
-(id)createAssetPickerPhotosAlbumViewControllerForAlbum:(id)arg1;
-(id)createPhotosPickerViewControllerWithSelectedAssets:(id)arg1 anchorAtAsset:(id)arg2 inAssetCollection:(id)arg3 options:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5;
-(id)createViewControllerForAssetCollection:(id)arg1 existingAssetsFetchResult:(id)arg2;
-(id)createViewControllerForAssetCollection:(id)arg1;

@end

