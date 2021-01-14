/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class PHManualFetchResult, NSArray, NSString;

@interface PUAssetHidingHelper : NSObject <PXPhotoLibraryUIChangeObserver> {

	BOOL _areAllAssetsHidden;
	BOOL _didCheckAllAssetHidden;
	BOOL _canToogleAssetsVisibility;
	BOOL _didCheckCanToogleAssetsVisibility;
	PHManualFetchResult* __assetsFetchResults;

}

@property (setter=_setAssetsFetchResult:,nonatomic,retain) PHManualFetchResult * _assetsFetchResults;              //@synthesize _assetsFetchResults=__assetsFetchResults - In the implementation block
@property (nonatomic,copy) NSArray * assets; 
@property (nonatomic,readonly) BOOL isHiding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)assets;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(id)init;
-(BOOL)_areAllAssetsHidden;
-(void)_setAssetsFetchResult:(id)arg1 ;
-(void)_prepareAssetsVisibilityValueIfNeeded;
-(BOOL)canToggleAssetsVisibility;
-(void)applyHiddenState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)menuItemTitleForTogglingAssetsVisibility;
-(id)alertControllerForTogglingAssetsVisibilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)attemptTogglingAssetsVisibilityFromViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 completionHandler:(/*^block*/id)arg4 ;
-(PHManualFetchResult *)_assetsFetchResults;
-(BOOL)isHiding;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)setAssets:(NSArray *)arg1 ;
-(void)dealloc;
@end

