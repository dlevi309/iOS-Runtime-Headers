/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotosAlbumViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class NSArray, NSDictionary, UIBarButtonItem, PHPhotosHighlight, PUCurationTragicFailureInHighlightsDebugViewController, NSString;

@interface PUCurationTragicFailureInHighlightsGridDebugViewController : PUPhotosAlbumViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	NSArray* _allAssets;
	NSArray* _filteredAssets;
	NSDictionary* _utilityTypesByAssetUUID;
	BOOL _showsAll;
	BOOL _showsTragicFailure;
	BOOL _showsNonMemorable;
	BOOL _showsPoorQuality;
	UIBarButtonItem* _showsTragicFailureButtonItem;
	UIBarButtonItem* _showsNonMemorableButtonItem;
	UIBarButtonItem* _showsPoorQualityButtonItem;
	PHPhotosHighlight* _highlight;
	PUCurationTragicFailureInHighlightsDebugViewController* _parentController;

}

@property (nonatomic,retain) PHPhotosHighlight * highlight;                                                          //@synthesize highlight=_highlight - In the implementation block
@property (nonatomic,retain) PUCurationTragicFailureInHighlightsDebugViewController * parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithSpec:(id)arg1 ;
-(void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out BOOL*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5 ;
-(void)_fileRadarWithIncorrectAssets:(id)arg1 ;
-(BOOL)_writeDiagnosticsToURL:(id)arg1 incorrectAssets:(id)arg2 ;
-(id)_cloneAsset:(id)arg1 toDirectory:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(PHPhotosHighlight *)highlight;
-(BOOL)shouldShowSectionHeaders;
-(void)setButton:(id)arg1 toOn:(BOOL)arg2 ;
-(void)toggleShowsAll:(id)arg1 ;
-(void)toggleShowsTragicFailure:(id)arg1 ;
-(void)toggleShowsNonMemorable:(id)arg1 ;
-(void)toggleShowsPoorQuality:(id)arg1 ;
-(unsigned long long)utilityTypesWithAsset:(id)arg1 sceneClassifications:(id)arg2 ;
-(void)setParentController:(PUCurationTragicFailureInHighlightsDebugViewController *)arg1 ;
-(void)update;
-(void)viewDidLoad;
-(PUCurationTragicFailureInHighlightsDebugViewController *)parentController;
-(void)setHighlight:(PHPhotosHighlight *)arg1 ;
-(void)_presentTapToRadar;
@end

