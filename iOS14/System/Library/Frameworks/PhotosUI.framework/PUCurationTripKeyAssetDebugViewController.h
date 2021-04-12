/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotosAlbumViewController.h>

@class PUCurationTripKeyAssetBrowserDebugViewController, PHFetchResult;

@interface PUCurationTripKeyAssetDebugViewController : PUPhotosAlbumViewController {

	PUCurationTripKeyAssetBrowserDebugViewController* _assetCollectionViewController;
	PHFetchResult* _tripHighlights;

}
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(id)init;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)updateSpec;
-(void)viewDidLoad;
-(void)_fetchHighlights;
@end

