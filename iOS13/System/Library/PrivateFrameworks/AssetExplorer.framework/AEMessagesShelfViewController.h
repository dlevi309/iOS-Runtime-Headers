/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AEPluginEntryViewController.h>
#import <libobjc.A.dylib/PXReusableObjectPoolDelegate.h>
#import <libobjc.A.dylib/PXAssetsSceneDelegate.h>
#import <libobjc.A.dylib/PXTilingControllerScrollDelegate.h>
#import <libobjc.A.dylib/PXTilingControllerTransitionDelegate.h>
#import <libobjc.A.dylib/PXTileSource.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PUAssetExplorerReviewScreenViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CKPluginEntryViewController.h>
#import <libobjc.A.dylib/AEMessagesShelfLayoutDelegate.h>

@protocol CKPluginEntryViewControllerDelegate;
@class PXTilingController, PXBasicUIViewTileAnimator, PXAssetsScene, PXScrollViewController, PUReviewDataSource, PUReviewAssetsDataSourceManager, PUReviewAssetsMediaProvider, AEWrappedDataSourceManager, AEPackageTransport, NSMutableSet, UIColor, PUAssetExplorerReviewScreenViewController, NSString;

@interface AEMessagesShelfViewController : UIViewController <AEPluginEntryViewController, PXReusableObjectPoolDelegate, PXAssetsSceneDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXTileSource, PXChangeObserver, PUAssetExplorerReviewScreenViewControllerDelegate, UIGestureRecognizerDelegate, CKPluginEntryViewController, AEMessagesShelfLayoutDelegate> {

	id<CKPluginEntryViewControllerDelegate> _entryViewDelegate;
	PXTilingController* __tilingController;
	PXBasicUIViewTileAnimator* __tileAnimator;
	PXAssetsScene* __sceneController;
	PXScrollViewController* __scrollViewController;
	PUReviewDataSource* __dataSource;
	PUReviewAssetsDataSourceManager* __internalReviewDataSourceManager;
	PUReviewAssetsMediaProvider* __internalReviewMediaProvider;
	AEWrappedDataSourceManager* __wrappedDataSourceManager;
	AEPackageTransport* __packageTransport;
	NSMutableSet* __tilesInUse;
	long long __indexToScrollTo;
	UIColor* __roundedCornerOverlayFillColor;
	PUAssetExplorerReviewScreenViewController* _presentedReviewController;

}

@property (nonatomic,readonly) PXTilingController * _tilingController;                                           //@synthesize _tilingController=__tilingController - In the implementation block
@property (nonatomic,readonly) PXBasicUIViewTileAnimator * _tileAnimator;                                        //@synthesize _tileAnimator=__tileAnimator - In the implementation block
@property (nonatomic,readonly) PXAssetsScene * _sceneController;                                                 //@synthesize _sceneController=__sceneController - In the implementation block
@property (nonatomic,readonly) PXScrollViewController * _scrollViewController;                                   //@synthesize _scrollViewController=__scrollViewController - In the implementation block
@property (nonatomic,readonly) PUReviewDataSource * _dataSource;                                                 //@synthesize _dataSource=__dataSource - In the implementation block
@property (nonatomic,readonly) PUReviewAssetsDataSourceManager * _internalReviewDataSourceManager;               //@synthesize _internalReviewDataSourceManager=__internalReviewDataSourceManager - In the implementation block
@property (nonatomic,readonly) PUReviewAssetsMediaProvider * _internalReviewMediaProvider;                       //@synthesize _internalReviewMediaProvider=__internalReviewMediaProvider - In the implementation block
@property (nonatomic,readonly) AEWrappedDataSourceManager * _wrappedDataSourceManager;                           //@synthesize _wrappedDataSourceManager=__wrappedDataSourceManager - In the implementation block
@property (nonatomic,readonly) AEPackageTransport * _packageTransport;                                           //@synthesize _packageTransport=__packageTransport - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _tilesInUse;                                                       //@synthesize _tilesInUse=__tilesInUse - In the implementation block
@property (assign,setter=_setIndexToScrollTo:,nonatomic) long long _indexToScrollTo;                             //@synthesize _indexToScrollTo=__indexToScrollTo - In the implementation block
@property (nonatomic,retain) UIColor * _roundedCornerOverlayFillColor;                                           //@synthesize _roundedCornerOverlayFillColor=__roundedCornerOverlayFillColor - In the implementation block
@property (nonatomic,retain) PUAssetExplorerReviewScreenViewController * presentedReviewController;              //@synthesize presentedReviewController=_presentedReviewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CKPluginEntryViewControllerDelegate> entryViewDelegate; 
@property (readonly) BOOL wantsClearButton; 
@property (readonly) BOOL wantsEdgeToEdgeLayout; 
@property (readonly) BOOL loadedContentView; 
-(void)dealloc;
-(PUReviewDataSource *)_dataSource;
-(void)loadView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
-(void)handleTap:(id)arg1 ;
-(id)framesOfVisibleContentViewInCoordinateSpace:(id)arg1 ;
-(id<CKPluginEntryViewControllerDelegate>)entryViewDelegate;
-(void)setEntryViewDelegate:(id<CKPluginEntryViewControllerDelegate>)arg1 ;
-(BOOL)wantsEdgeToEdgeLayout;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXBasicUIViewTileAnimator *)_tileAnimator;
-(PXScrollViewController *)_scrollViewController;
-(void*)checkOutTileForIdentifier:(PXTileIdentifier)arg1 layout:(id)arg2 ;
-(void)checkInTile:(void*)arg1 withIdentifier:(PXTileIdentifier)arg2 ;
-(NSMutableSet *)_tilesInUse;
-(CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2 ;
-(PXTilingController *)_tilingController;
-(id)assetsScene:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2 ;
-(id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2 ;
-(PXAssetsScene *)_sceneController;
-(void)assetExplorerReviewScreenViewController:(id)arg1 didPerformCompletionAction:(unsigned long long)arg2 withSelectedAssetUUIDs:(id)arg3 livePhotoDisabledAssetUUIDs:(id)arg4 substituteAssetsByUUID:(id)arg5 ;
-(void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg1 ;
-(BOOL)assetExplorerReviewScreenViewController:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4 ;
-(double)layout:(id)arg1 aspectRatioForItemAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(id)_currentAssetsDataSource;
-(PUReviewAssetsDataSourceManager *)_internalReviewDataSourceManager;
-(PUReviewAssetsMediaProvider *)_internalReviewMediaProvider;
-(long long)layout:(id)arg1 irisToggleStateForItemAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(BOOL)layout:(id)arg1 itemAtIndexPathIsVideo:(PXSimpleIndexPath)arg2 ;
-(BOOL)layout:(id)arg1 itemAtIndexPathIsLoop:(PXSimpleIndexPath)arg2 ;
-(BOOL)layout:(id)arg1 itemAtIndexPathIsAnimatedImage:(PXSimpleIndexPath)arg2 ;
-(double)layout:(id)arg1 itemAtIndexPathDuration:(PXSimpleIndexPath)arg2 ;
-(BOOL)layoutShouldShowVideoDuration:(id)arg1 ;
-(id)initWithPackageTransport:(id)arg1 ;
-(void)_presentReviewViewController:(id)arg1 ;
-(void)_dismissPresentedReviewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_transportStagingStateDidChange;
-(void)_removeFromShelf:(id)arg1 ;
-(void)_toggleIris:(id)arg1 ;
-(void)_presentReviewForAssetReference:(id)arg1 ;
-(id)contentAssetReferenceAtPoint:(CGPoint)arg1 ;
-(UIColor *)_roundedCornerOverlayFillColor;
-(id)_traverseHierarchyForFillColorStartingWithView:(id)arg1 ;
-(void)_immediatelyGenerateAndStagePackageFromReviewAsset:(id)arg1 suppressLivePhoto:(BOOL)arg2 mediaOrigin:(long long)arg3 ;
-(AEWrappedDataSourceManager *)_wrappedDataSourceManager;
-(AEPackageTransport *)_packageTransport;
-(long long)_indexToScrollTo;
-(void)_setIndexToScrollTo:(long long)arg1 ;
-(void)set_roundedCornerOverlayFillColor:(UIColor *)arg1 ;
-(PUAssetExplorerReviewScreenViewController *)presentedReviewController;
-(void)setPresentedReviewController:(PUAssetExplorerReviewScreenViewController *)arg1 ;
@end

