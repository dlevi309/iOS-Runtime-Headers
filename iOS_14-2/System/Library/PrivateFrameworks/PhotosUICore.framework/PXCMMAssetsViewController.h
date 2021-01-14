/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCMMComponentViewController.h>
#import <libobjc.A.dylib/PXActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXAssetsSceneDelegate.h>
#import <libobjc.A.dylib/PXCMMBannerTileControllerDelegate.h>
#import <libobjc.A.dylib/PXCMMEngineDrivenLayoutDelegate.h>
#import <libobjc.A.dylib/PXCMMFooterViewModelActionDelegate.h>
#import <libobjc.A.dylib/PXCMMProgressBannerViewDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXContextualNotificationDelegate.h>
#import <libobjc.A.dylib/PXOneUpPresentationDelegate.h>
#import <libobjc.A.dylib/PXPhotosGlobalFooterViewDelegate.h>
#import <libobjc.A.dylib/PXScrollViewControllerObserver.h>
#import <libobjc.A.dylib/PXStatusViewDelegate.h>
#import <libobjc.A.dylib/PXSwipeSelectionManagerDelegate.h>
#import <libobjc.A.dylib/PXTileSource.h>

@protocol PXCMMAssetsViewControllerDelegate;
@class PXUpdater, PXLayoutGenerator, PXSectionedLayoutEngine, PXUIScrollViewController, PXBasicTileAnimator, PXTilingController, PXUIAssetsScene, PXCMMProgressBannerView, NSArray, PXCMMStatusController, PXUITapGestureRecognizer, PXSwipeSelectionManager, UILongPressGestureRecognizer, PXAssetReference, PXCMMSpecManager, PXCMMSpec, PXMomentShareStatusPresentation, PXCMMFooterViewModel, PXPhotosGlobalFooterView, PXCMMBannerTileController, PXCMMSendBackBannerView, NSMutableSet, PXCMMSendBackSuggestionSource, PXContextualNotification, NSSet, PXOneUpPresentation, NSString;

@interface PXCMMAssetsViewController : PXCMMComponentViewController <PXActionPerformerDelegate, PXAssetsSceneDelegate, PXCMMBannerTileControllerDelegate, PXCMMEngineDrivenLayoutDelegate, PXCMMFooterViewModelActionDelegate, PXCMMProgressBannerViewDelegate, PXChangeObserver, PXContextualNotificationDelegate, PXOneUpPresentationDelegate, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver, PXStatusViewDelegate, PXSwipeSelectionManagerDelegate, PXTileSource> {

	PXUpdater* _updater;
	PXLayoutGenerator* _layoutGenerator;
	PXSectionedLayoutEngine* _layoutEngine;
	BOOL _layoutAnimationsGloballyDisabled;
	PXUIScrollViewController* _scrollViewController;
	PXBasicTileAnimator* _tileAnimator;
	PXTilingController* _tilingController;
	PXUIAssetsScene* _sceneController;
	PXCMMProgressBannerView* _progressBannerView;
	NSArray* _progressBannerViewConstraints;
	PXCMMStatusController* _statusController;
	PXUITapGestureRecognizer* _tapSelectionGesture;
	PXSwipeSelectionManager* _swipeSelectionManager;
	PXUITapGestureRecognizer* _layoutTransitionGesture;
	UILongPressGestureRecognizer* _longPressGesture;
	PXAssetReference* _navigatedAssetReference;
	PXCMMSpecManager* _specManager;
	PXCMMSpec* _spec;
	PXMomentShareStatusPresentation* _momentShareStatusPresentationForFooter;
	PXCMMFooterViewModel* _statusFooterViewModel;
	PXPhotosGlobalFooterView* _measuringStatusFooterView;
	PXCMMBannerTileController* _measuringBannerTile;
	PXCMMSendBackBannerView* _measuringSendBackBannerView;
	PXMomentShareStatusPresentation* _momentShareStatusPresentationForPoster;
	NSMutableSet* _inUseTiles;
	CGSize _knownReferenceSize;
	BOOL _needsToPerformInitialSelection;
	PXCMMSendBackSuggestionSource* _sendBackSuggestionSource;
	PXContextualNotification* _sendBackNotification;
	BOOL _sendBackNotificationWasDiscarded;
	BOOL _sendBackNotificationWasTapped;
	BOOL _receivingActionButtonWasTapped;
	BOOL _didIncrementNumberOfPresentableSendBacks;
	BOOL _didIncrementNumberOfPresentedSendBacks;
	BOOL _isWaitingForSendBackPresentationConfirmationTimeout;
	unsigned long long _sendBackPresentationConfirmationGeneration;
	SCD_Struct_PX24 _delegateRespondsTo;
	BOOL _actionInProgress;
	BOOL _userSelectionEnabled;
	id<PXCMMAssetsViewControllerDelegate> _delegate;
	long long __layoutType;
	NSSet* __hiddenAssetReferences;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) long long _layoutType;                                              //@synthesize _layoutType=__layoutType - In the implementation block
@property (nonatomic,readonly) PXOneUpPresentation * _oneUpPresentation; 
@property (nonatomic,retain) NSSet * _hiddenAssetReferences;                                     //@synthesize _hiddenAssetReferences=__hiddenAssetReferences - In the implementation block
@property (assign,nonatomic) BOOL userSelectionEnabled;                                          //@synthesize userSelectionEnabled=_userSelectionEnabled - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                          //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMAssetsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isActionInProgress,nonatomic) BOOL actionInProgress;                    //@synthesize actionInProgress=_actionInProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(CGRect)contextualNotification:(id)arg1 containingFrameInCoordinateSpace:(id)arg2 ;
-(void)_updateStyle;
-(void)contextualNotificationWasTapped:(id)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)_configureLayout:(id)arg1 ;
-(void)_handleLongPress:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)scrollViewControllerDidScroll:(id)arg1 ;
-(PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(CGPoint)arg2 ;
-(PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(CGPoint)arg2 ;
-(BOOL)swipeSelectionManager:(id)arg1 shouldSelectItemAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1 ;
-(id<PXCMMAssetsViewControllerDelegate>)delegate;
-(UIEdgeInsets)contentInset;
-(BOOL)swipeSelectionManagerIsInMultiSelectMode:(id)arg1 ;
-(PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(CGPoint)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setActionInProgress:(BOOL)arg1 ;
-(void)_updatePlaceholder;
-(PXOneUpPresentation *)_oneUpPresentation;
-(id)oneUpPresentationHelperScrollView:(id)arg1 ;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(void)progressBannerViewLayoutHeightDidChange:(id)arg1 ;
-(void)_updateAssetsScene;
-(void)progressBannerView:(id)arg1 presentViewController:(id)arg2 ;
-(void)progressBannerView:(id)arg1 dismissViewController:(id)arg2 ;
-(void)didPerformDeletionActionForFooterViewModel:(id)arg1 ;
-(BOOL)engineDrivenLayout:(id)arg1 shouldShowDimmingOverlayAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(CGSize)_maximumThumbnailSize;
-(BOOL)engineDrivenLayout:(id)arg1 shouldShowStatusBadgeAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(long long)engineDrivenLayout:(id)arg1 assetStatusAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(void)didTapActionButtonInBannerTileController:(id)arg1 ;
-(void)_updateSelectionEnabled;
-(void)_performInitialSelectionIfNeeded;
-(void)_selectCuratedAssets;
-(void)_selectNonCopiedAssets;
-(BOOL)_areAllNotCopiedAssetsSelected;
-(void)_didFindPresentableSendBack;
-(void)_didPresentSendBack;
-(void)_handleSendBackPresentationConfirmationTimeoutForGeneration:(unsigned long long)arg1 ;
-(void)_checkSendBackPresentationStatus;
-(void)_invokeSendBackAction;
-(id)_createPosterTileController;
-(id)_createStatusFooter;
-(id)_createSendBackBannerView;
-(id)_createSendBackFooter;
-(id)_createBannerTileController;
-(id)_createAddButton;
-(id)_createSectionHeaderController;
-(id)_createStatusPlaceholderTileView;
-(void)_updateGestures;
-(id)_createStatusBadgeTileView;
-(id)_createOverlayTileView;
-(void)setUserSelectionEnabled:(BOOL)arg1 ;
-(id)_indexPathsForAssetReferences:(id)arg1 inDataSource:(id)arg2 ;
-(void)_transitionLayoutGesture:(id)arg1 ;
-(void)_toggleAssetSelectionAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)_assetIndexPathAtLocation:(CGPoint)arg1 padding:(UIEdgeInsets)arg2 kind:(unsigned long long)arg3 ;
-(long long)_assetImportStateAtIndexPath:(PXSimpleIndexPath)arg1 withDataSource:(id)arg2 ;
-(BOOL)_isAssetAlreadyImportedAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(BOOL)_isAssetAlreadyImportedAtIndexPath:(PXSimpleIndexPath)arg1 withEngineDrivenLayout:(id)arg2 ;
-(void)addButtonTapped:(id)arg1 ;
-(void)_selectionModeDidChange;
-(void)_updateSelectionIfNeeded;
-(BOOL)_shouldShowDefaultOneUpActions;
-(id)_createSelectionManagerWithAssetReference:(id)arg1 ;
-(id)_assetActionManagerWithSelectionManager:(id)arg1 ;
-(void)_setLayoutType:(long long)arg1 ;
-(id)_createNewLayoutGeneratorWithReferenceSize:(CGSize)arg1 ;
-(double)_headerHeightFromReferenceSize:(CGSize)arg1 insets:(UIEdgeInsets)arg2 ;
-(double)_bannerHeightFromReferenceSize:(CGSize)arg1 ;
-(double)_statusFooterHeightFromReferenceSize:(CGSize)arg1 insets:(UIEdgeInsets)arg2 ;
-(double)_sendBackFooterHeightFromReferenceSize:(CGSize)arg1 ;
-(BOOL)_canShowSendBackSuggestion;
-(BOOL)_isSendBackBannerViewContentsAtAllVisible;
-(void)presentSendBackNotification;
-(long long)_layoutType;
-(BOOL)_isSendBackBannerViewContentsFullyVisible;
-(void)_updateSendBackNotification;
-(void)_updateLayoutEngine;
-(void)_configureBannerTile:(id)arg1 ;
-(BOOL)_shouldShowProgressBanner;
-(double)_progressBannerViewLayoutHeight;
-(void)_updateProgressBannerViewVisibility;
-(void)_updateProgressBannerViewConstraints;
-(BOOL)_shouldShowStatusPlaceholder;
-(void)set_layoutType:(long long)arg1 ;
-(void)set_hiddenAssetReferences:(NSSet *)arg1 ;
-(BOOL)userSelectionEnabled;
-(id)_createNewLayout;
-(void)_scheduleLayout;
-(void)checkInTile:(void*)arg1 withIdentifier:(PXTileIdentifier)arg2 ;
-(PXSimpleIndexPath)_assetIndexPathAtLocation:(CGPoint)arg1 padding:(UIEdgeInsets)arg2 ;
-(void*)checkOutTileForIdentifier:(PXTileIdentifier)arg1 layout:(id)arg2 ;
-(void)contextualNotificationDidDisappear:(id)arg1 ;
-(void)setDelegate:(id<PXCMMAssetsViewControllerDelegate>)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(void)_selectAllAssets;
-(void)_deselectAllAssets;
-(void)engineDrivenLayoutReferenceSizeDidChange:(id)arg1 ;
-(double)engineDrivenLayout:(id)arg1 aspectRatioForItemAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(CGRect)engineDrivenLayout:(id)arg1 contentsRectForItemAtIndexPath:(PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3 ;
-(id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2 ;
-(id)assetsScene:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2 ;
-(void)_invalidateLayoutGenerator;
-(void)viewDidLoad;
-(void)_setHiddenAssetReferences:(id)arg1 ;
-(id)_assetReferenceAtPoint:(CGPoint)arg1 padding:(UIEdgeInsets)arg2 ;
-(void)_performTilingChangeWithoutAnimationTransition:(/*^block*/id)arg1 ;
-(NSSet *)_hiddenAssetReferences;
-(void)_preferredContentSizeChanged:(id)arg1 ;
-(void)contextualNotificationWasDiscarded:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(id)preferredContainerViewForContextualNotification:(id)arg1 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg1 ;
-(BOOL)oneUpPresentation:(id)arg1 canStartPreviewingForContextMenuInteraction:(id)arg2 ;
-(BOOL)oneUpPresentation:(id)arg1 allowsActionsForContextMenuInteraction:(id)arg2 ;
-(id)oneUpPresentationActionManager:(id)arg1 ;
-(id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2 ;
-(id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2 ;
-(id)oneUpPresentationActionManagerForPreviewing:(id)arg1 ;
-(long long)oneUpPresentationActionContext:(id)arg1 ;
-(id)oneUpPresentationImportStatusManager:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg1 ;
-(id)oneUpPresentationMediaProvider:(id)arg1 ;
-(BOOL)isActionInProgress;
-(unsigned long long)_additionalTileCount;
-(void)statusView:(id)arg1 presentViewController:(id)arg2 ;
-(void)statusView:(id)arg1 dismissViewController:(id)arg2 ;
-(void)contextualNotificationDidAppear:(id)arg1 ;
-(void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

