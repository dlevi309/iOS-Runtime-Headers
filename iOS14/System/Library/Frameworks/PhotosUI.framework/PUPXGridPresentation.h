/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PXGridPresentation.h>

@class PUSessionInfo, NSString;

@interface PUPXGridPresentation : NSObject <PXGridPresentation> {

	PUSessionInfo* _sessionInfo;
	long long _userInterfaceIdiom;

}

@property (assign) long long userInterfaceIdiom;                                                         //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (getter=_isRunningInPhotoPicker,nonatomic,readonly) BOOL _isRunningInPhotoPicker; 
@property (nonatomic,retain) PUSessionInfo * sessionInfo;                                                //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)userInterfaceIdiom;
-(void)setUserInterfaceIdiom:(long long)arg1 ;
-(id)createSharedAlbumListViewControllerWithConfiguration:(id)arg1 ;
-(id)init;
-(id)_assetCollectionToAssetsMapForAssets:(id)arg1 ;
-(id)createPanoramaViewController;
-(id)createPlacesViewControllerForAssetCollection:(id)arg1 ;
-(BOOL)_isEmpty:(id)arg1 ;
-(id)createAlbumListViewControllerWithCollectionList:(id)arg1 ;
-(void)_customizePhotosViewConfiguationForAssetPicker:(id)arg1 assetCollection:(id)arg2 ;
-(id)initWithUserInterfaceIdiom:(long long)arg1 ;
-(id)createPhotosAlbumViewControllerForAlbum:(id)arg1 withFetchResult:(id)arg2 ;
-(id)createImportHistoryGridViewControllerWithCollection:(id)arg1 ;
-(void)createGridViewControllerWithAssets:(id)arg1 withTitle:(id)arg2 hideTabBar:(BOOL)arg3 gridPresentationContext:(long long)arg4 containerViewController:(id)arg5 barsUpdateDelegate:(id)arg6 andCompletion:(/*^block*/id)arg7 ;
-(id)createAssetPickerPhotosAlbumViewControllerForAlbum:(id)arg1 ;
-(id)createPhotosPickerViewControllerWithSelectedAssets:(id)arg1 anchorAtAsset:(id)arg2 inAssetCollection:(id)arg3 options:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)_isRunningInPhotoPicker;
-(id)createViewControllerForAssetCollection:(id)arg1 existingAssetsFetchResult:(id)arg2 ;
-(PUSessionInfo *)sessionInfo;
-(void)setSessionInfo:(PUSessionInfo *)arg1 ;
-(id)createAlbumListViewControllerWithConfiguration:(id)arg1 ;
-(id)createViewControllerForAssetCollection:(id)arg1 ;
@end

