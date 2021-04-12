/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotosGridViewController.h>
#import <libobjc.A.dylib/PUSectionedGridLayoutDelegate.h>
#import <libobjc.A.dylib/PUPhotosSectionHeaderViewDelegate.h>
#import <libobjc.A.dylib/PXEditableNavigationTitleViewDelegate.h>

@protocol PLAlbumProtocol;
@class PUPhotosPickerViewController, PHAssetCollection, NSObject, PUPhotosAlbumViewControllerSpec, PXEditableNavigationTitleView, NSString, PHFetchResult;

@interface PUPhotosAlbumViewController : PUPhotosGridViewController <PUSectionedGridLayoutDelegate, PUPhotosSectionHeaderViewDelegate, PXEditableNavigationTitleViewDelegate> {

	SCD_Struct_PU17 _needsUpdateFlags;
	PUPhotosPickerViewController* _activePhotosPickerViewController;
	BOOL __isCountingAssetTypes;
	BOOL __hasAccurateCounts;
	PHAssetCollection* _assetCollection;
	NSObject*<PLAlbumProtocol> _album;
	PUPhotosAlbumViewControllerSpec* __albumSpec;
	PXEditableNavigationTitleView* _editableTitleView;

}

@property (assign,setter=_setCountingAssetTypes:,nonatomic) BOOL _isCountingAssetTypes;                       //@synthesize _isCountingAssetTypes=__isCountingAssetTypes - In the implementation block
@property (assign,setter=_setHasAccurateCounts:,nonatomic) BOOL _hasAccurateCounts;                           //@synthesize _hasAccurateCounts=__hasAccurateCounts - In the implementation block
@property (setter=_setAlbumSpec:,nonatomic,retain) PUPhotosAlbumViewControllerSpec * _albumSpec;              //@synthesize _albumSpec=__albumSpec - In the implementation block
@property (nonatomic,readonly) PXEditableNavigationTitleView * editableTitleView;                             //@synthesize editableTitleView=_editableTitleView - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSectionHeaders; 
@property (nonatomic,readonly) NSString * globalFooterSubtitle; 
@property (nonatomic,readonly) PHAssetCollection * assetCollection;                                           //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) PHFetchResult * assetCollectionAssets; 
@property (nonatomic,retain) NSObject*<PLAlbumProtocol> album;                                                //@synthesize album=_album - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithSpec:(id)arg1 ;
-(id)_collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3 ;
-(PHFetchResult *)assetCollectionAssets;
-(BOOL)canDragIn;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)canDragOut;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(BOOL)shouldShowSectionHeaders;
-(void)updateLayoutMetrics;
-(id)newGridLayout;
-(id)initWithAlbumSpec:(id)arg1 ;
-(void)_getDataForVisualSection:(long long)arg1 hasActionButton:(BOOL*)arg2 locations:(id*)arg3 title:(id*)arg4 startDate:(id*)arg5 endDate:(id*)arg6 ;
-(void)editableNavigationTitleViewDidEndEditing:(id)arg1 ;
-(id)editableNavigationTitleView:(id)arg1 validateNewText:(id)arg2 ;
-(BOOL)updateSpec;
-(void)photosDataSource:(id)arg1 didReceivePhotoLibraryChange:(id)arg2 ;
-(double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2 ;
-(double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2 ;
-(void)_ensureEditableTitleView;
-(id)filterPredicateForAlbum:(id)arg1 ;
-(void)setAssetCollection:(PHAssetCollection *)arg1 ;
-(void)setAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 filterPredicate:(id)arg3 existingFetchResults:(id)arg4 ;
-(void)_setAlbumSpec:(id)arg1 ;
-(id)localizedTitleForAssets:(id)arg1 ;
-(id)sessionInfoForTransferredAssets:(id)arg1 ;
-(BOOL)canBeginStackCollapseTransition;
-(void)_invalideSectionHeaders;
-(void)_updateSectionHeadersIfNeeded;
-(id)_globalHeaderTitle;
-(void)configureGlobalHeaderView:(id)arg1 ;
-(BOOL)allowSelectAllButton;
-(void)configureGlobalFooterView:(id)arg1 ;
-(CGPoint)contentOffsetForPreheating;
-(BOOL)isTrashBinViewController;
-(unsigned long long)userEventSourceType;
-(unsigned long long)additionalOneUpViewControllerOptions;
-(void)_countAssetTypesIfNeeded;
-(void)setupScrubber;
-(BOOL)canHandleDropSession:(id)arg1 ;
-(void)_performAddDropWithSession:(id)arg1 ;
-(void)_performMoveDropWithCoordinator:(id)arg1 ;
-(BOOL)_isCountingAssetTypes;
-(void)_setCountingAssetTypes:(BOOL)arg1 ;
-(BOOL)_hasAccurateCounts;
-(void)_setHasAccurateCounts:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)routingOptionsForDestination:(id)arg1 ;
-(PXEditableNavigationTitleView *)editableTitleView;
-(void)setAlbum:(NSObject*<PLAlbumProtocol>)arg1 ;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(PHAssetCollection *)assetCollection;
-(NSObject*<PLAlbumProtocol>)album;
-(void)setAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 filterPredicate:(id)arg3 ;
-(BOOL)isCameraRoll;
-(long long)oneUpPresentationOrigin;
-(void)setAlbum:(id)arg1 existingFetchResult:(id)arg2 ;
-(BOOL)wantsGlobalFooter;
-(NSString *)globalFooterSubtitle;
-(void)handleAddToAlbum:(id)arg1 pickedAssets:(id)arg2 ;
-(void)handleAddFromAction;
-(void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2 ;
-(long long)cellFillMode;
-(void)updateTitle;
-(void)didTapHeaderView:(id)arg1 ;
-(void)_setNeedsUpdate;
-(void)setSessionInfo:(id)arg1 ;
-(double)globalHeaderHeight;
-(PUPhotosAlbumViewControllerSpec *)_albumSpec;
-(id)px_navigationDestination;
-(void)_collectionView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
@end

