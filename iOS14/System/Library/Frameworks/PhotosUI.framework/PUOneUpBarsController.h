/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUBarsController.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>
#import <libobjc.A.dylib/PUAssetActionPerformerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PUPlayPauseBarItemsControllerChangeObserver.h>
#import <libobjc.A.dylib/PUBarButtonItemCollectionDataSource.h>
#import <libobjc.A.dylib/PUScrubberViewDelegate.h>
#import <libobjc.A.dylib/PUPhotoBrowserTitleViewControllerDelegate.h>
#import <libobjc.A.dylib/PXInfoUpdaterObserver.h>
#import <libobjc.A.dylib/PXInfoProvider.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PUOverOneUpPresentationSessionBarsDelegate.h>

@class PUBrowsingSession, NSString, PUAssetActionPerformer, PUScrubberView, PUPhotoBrowserTitleViewController, PXInfoUpdater, UITapGestureRecognizer, PUPlayPauseBarItemsController, PUBarButtonItemCollection, NSMutableIndexSet, PXImageModulationManager, UIView;

@interface PUOneUpBarsController : PUBarsController <PUBrowsingViewModelChangeObserver, PUAssetActionPerformerDelegate, UIPopoverPresentationControllerDelegate, PUPlayPauseBarItemsControllerChangeObserver, PUBarButtonItemCollectionDataSource, PUScrubberViewDelegate, PUPhotoBrowserTitleViewControllerDelegate, PXInfoUpdaterObserver, PXInfoProvider, PXChangeObserver, PUOverOneUpPresentationSessionBarsDelegate> {

	struct {
		BOOL respondsToDidChangeShowingPlayPauseButton;
		BOOL respondsToDidTapPlayPauseButton;
		BOOL respondsToDidTapTitle;
		BOOL respondsToToggleDetailsVisibility;
		BOOL respondsToToggleCommentsVisibility;
		BOOL respondsToCanShowCommentsForAsset;
		BOOL respondsToShouldTapBeginAtLocationFromProvider;
		BOOL respondsToShouldHideToolbarWhenShowingAccessoryViewForAssetReference;
		BOOL respondsToWillExecuteActionPerformer;
		BOOL respondsToCanShowOriginal;
		BOOL respondsToDidBeginShowingOriginal;
		BOOL respondsToDidEndShowingOriginal;
		BOOL respondsToShouldEnableShowingOriginal;
	}  _delegateFlags;
	BOOL _shouldPlaceButtonsInNavigationBar;
	BOOL _shouldUseCompactTitleView;
	BOOL _shouldUseCompactCommentsTitle;
	BOOL _shouldShowDoneButton;
	BOOL _shouldShowAirPlayButton;
	BOOL _wantsShowInLibraryButton;
	BOOL _shouldShowScrubber;
	BOOL _shouldShowTitleView;
	BOOL _allowTapOnTitle;
	BOOL _allowShowingPlayPauseButton;
	BOOL _disableShowingNavigationBars;
	BOOL _shouldPlaceScrubberInScrubberBar;
	BOOL _disableChromeHiding;
	BOOL _isShowingPlayPauseButton;
	BOOL __needsUpdateTitle;
	BOOL __needsUpdateCommentsTitle;
	BOOL __nextCommentsActionShouldBeginEditing;
	BOOL __needsUpdateFileSizeButtonTitle;
	BOOL __needsUpdateFileSizeButtonMenu;
	BOOL __needsUpdateChromeVisibility;
	BOOL __lastChromeVisibility;
	BOOL __needsUpdatePlayPauseItems;
	PUBrowsingSession* _browsingSession;
	double _maximumToolbarHeight;
	double _maximumAccessoryToolbarHeight;
	NSString* __scrubbingIdentifier;
	PUAssetActionPerformer* __activeActionPerformer;
	PUScrubberView* __scrubberView;
	NSString* __title;
	PUPhotoBrowserTitleViewController* __titleViewController;
	PXInfoUpdater* __currentAssetDisplayInfoUpdater;
	UITapGestureRecognizer* __tapGestureRecognizer;
	long long __nextChromeVisibilityUpdateAnimationType;
	PUPlayPauseBarItemsController* __playPauseBarItemsController;
	PUBarButtonItemCollection* __toolbarButtonItemCollection;
	NSMutableIndexSet* __toolbarButtonIdentifiers;
	PUBarButtonItemCollection* __rightNavBarButtonItemCollection;
	NSMutableIndexSet* __rightNavBarButtonIdentifiers;
	PUBarButtonItemCollection* __leftNavBarButtonItemCollection;
	NSMutableIndexSet* __leftNavBarButtonIdentifiers;
	PUAssetActionPerformer* _sharingPreheatedPerformer;
	PXImageModulationManager* _debuggingObservedImageModulationManager;

}

@property (nonatomic,readonly) NSString * _scrubbingIdentifier;                                                                                     //@synthesize _scrubbingIdentifier=__scrubbingIdentifier - In the implementation block
@property (setter=_setActiveActionPerformer:,nonatomic,retain) PUAssetActionPerformer * _activeActionPerformer;                                     //@synthesize _activeActionPerformer=__activeActionPerformer - In the implementation block
@property (nonatomic,readonly) PUScrubberView * _scrubberView;                                                                                      //@synthesize _scrubberView=__scrubberView - In the implementation block
@property (assign,setter=_setNeedsUpdateTitle:,nonatomic) BOOL _needsUpdateTitle;                                                                   //@synthesize _needsUpdateTitle=__needsUpdateTitle - In the implementation block
@property (setter=_setTitle:,nonatomic,copy) NSString * _title;                                                                                     //@synthesize _title=__title - In the implementation block
@property (nonatomic,readonly) PUPhotoBrowserTitleViewController * _titleViewController;                                                            //@synthesize _titleViewController=__titleViewController - In the implementation block
@property (assign,setter=_setNeedsUpdateCommentsTitle:,nonatomic) BOOL _needsUpdateCommentsTitle;                                                   //@synthesize _needsUpdateCommentsTitle=__needsUpdateCommentsTitle - In the implementation block
@property (assign,setter=_setNextCommentsActionShouldBeginEditing:,nonatomic) BOOL _nextCommentsActionShouldBeginEditing;                           //@synthesize _nextCommentsActionShouldBeginEditing=__nextCommentsActionShouldBeginEditing - In the implementation block
@property (assign,setter=_setNeedsUpdateFileSizeButtonTitle:,nonatomic) BOOL _needsUpdateFileSizeButtonTitle;                                       //@synthesize _needsUpdateFileSizeButtonTitle=__needsUpdateFileSizeButtonTitle - In the implementation block
@property (assign,setter=_setNeedsUpdateFileSizeButtonMenu:,nonatomic) BOOL _needsUpdateFileSizeButtonMenu;                                         //@synthesize _needsUpdateFileSizeButtonMenu=__needsUpdateFileSizeButtonMenu - In the implementation block
@property (nonatomic,readonly) PXInfoUpdater * _currentAssetDisplayInfoUpdater;                                                                     //@synthesize _currentAssetDisplayInfoUpdater=__currentAssetDisplayInfoUpdater - In the implementation block
@property (setter=_setTapGestureRecognizer:,nonatomic,retain) UITapGestureRecognizer * _tapGestureRecognizer;                                       //@synthesize _tapGestureRecognizer=__tapGestureRecognizer - In the implementation block
@property (assign,setter=_setNeedsUpdateChromeVisibility:,nonatomic) BOOL _needsUpdateChromeVisibility;                                             //@synthesize _needsUpdateChromeVisibility=__needsUpdateChromeVisibility - In the implementation block
@property (assign,setter=_setNextChromeVisibilityUpdateAnimationType:,nonatomic) long long _nextChromeVisibilityUpdateAnimationType;                //@synthesize _nextChromeVisibilityUpdateAnimationType=__nextChromeVisibilityUpdateAnimationType - In the implementation block
@property (assign,setter=_setLastChromeVisibility:,nonatomic) BOOL _lastChromeVisibility;                                                           //@synthesize _lastChromeVisibility=__lastChromeVisibility - In the implementation block
@property (assign,setter=_setNeedsUpdatePlayPauseItems:,nonatomic) BOOL _needsUpdatePlayPauseItems;                                                 //@synthesize _needsUpdatePlayPauseItems=__needsUpdatePlayPauseItems - In the implementation block
@property (nonatomic,readonly) PUPlayPauseBarItemsController * _playPauseBarItemsController;                                                        //@synthesize _playPauseBarItemsController=__playPauseBarItemsController - In the implementation block
@property (assign,setter=_setShowingPlayPauseButton:,nonatomic) BOOL isShowingPlayPauseButton;                                                      //@synthesize isShowingPlayPauseButton=_isShowingPlayPauseButton - In the implementation block
@property (setter=_setToolbarButtonItemCollection:,nonatomic,retain) PUBarButtonItemCollection * _toolbarButtonItemCollection;                      //@synthesize _toolbarButtonItemCollection=__toolbarButtonItemCollection - In the implementation block
@property (setter=_setToolbarButtonIdentifiers:,nonatomic,retain) NSMutableIndexSet * _toolbarButtonIdentifiers;                                    //@synthesize _toolbarButtonIdentifiers=__toolbarButtonIdentifiers - In the implementation block
@property (setter=_setRightNavBarButtonItemCollection:,nonatomic,retain) PUBarButtonItemCollection * _rightNavBarButtonItemCollection;              //@synthesize _rightNavBarButtonItemCollection=__rightNavBarButtonItemCollection - In the implementation block
@property (setter=_setRightNavBarButtonIdentifiers:,nonatomic,retain) NSMutableIndexSet * _rightNavBarButtonIdentifiers;                            //@synthesize _rightNavBarButtonIdentifiers=__rightNavBarButtonIdentifiers - In the implementation block
@property (setter=_setLeftNavBarButtonItemCollection:,nonatomic,retain) PUBarButtonItemCollection * _leftNavBarButtonItemCollection;                //@synthesize _leftNavBarButtonItemCollection=__leftNavBarButtonItemCollection - In the implementation block
@property (setter=_setLeftNavBarButtonIdentifiers:,nonatomic,retain) NSMutableIndexSet * _leftNavBarButtonIdentifiers;                              //@synthesize _leftNavBarButtonIdentifiers=__leftNavBarButtonIdentifiers - In the implementation block
@property (nonatomic,retain) PUAssetActionPerformer * sharingPreheatedPerformer;                                                                    //@synthesize sharingPreheatedPerformer=_sharingPreheatedPerformer - In the implementation block
@property (nonatomic,retain) PXImageModulationManager * debuggingObservedImageModulationManager;                                                    //@synthesize debuggingObservedImageModulationManager=_debuggingObservedImageModulationManager - In the implementation block
@property (nonatomic,readonly) UIView * ppt_scrubberView; 
@property (assign,nonatomic,__weak) id<PUOneUpBarsControllerDelegate> delegate; 
@property (nonatomic,retain) PUBrowsingSession * browsingSession;                                                                                   //@synthesize browsingSession=_browsingSession - In the implementation block
@property (assign,nonatomic) BOOL shouldPlaceButtonsInNavigationBar;                                                                                //@synthesize shouldPlaceButtonsInNavigationBar=_shouldPlaceButtonsInNavigationBar - In the implementation block
@property (assign,nonatomic) BOOL shouldUseCompactTitleView;                                                                                        //@synthesize shouldUseCompactTitleView=_shouldUseCompactTitleView - In the implementation block
@property (assign,nonatomic) BOOL shouldUseCompactCommentsTitle;                                                                                    //@synthesize shouldUseCompactCommentsTitle=_shouldUseCompactCommentsTitle - In the implementation block
@property (assign,nonatomic) double maximumToolbarHeight;                                                                                           //@synthesize maximumToolbarHeight=_maximumToolbarHeight - In the implementation block
@property (assign,nonatomic) double maximumAccessoryToolbarHeight;                                                                                  //@synthesize maximumAccessoryToolbarHeight=_maximumAccessoryToolbarHeight - In the implementation block
@property (assign,nonatomic) BOOL shouldShowDoneButton;                                                                                             //@synthesize shouldShowDoneButton=_shouldShowDoneButton - In the implementation block
@property (assign,nonatomic) BOOL shouldShowAirPlayButton;                                                                                          //@synthesize shouldShowAirPlayButton=_shouldShowAirPlayButton - In the implementation block
@property (assign,nonatomic) BOOL wantsShowInLibraryButton;                                                                                         //@synthesize wantsShowInLibraryButton=_wantsShowInLibraryButton - In the implementation block
@property (assign,nonatomic) BOOL shouldShowScrubber;                                                                                               //@synthesize shouldShowScrubber=_shouldShowScrubber - In the implementation block
@property (assign,nonatomic) BOOL shouldShowTitleView;                                                                                              //@synthesize shouldShowTitleView=_shouldShowTitleView - In the implementation block
@property (assign,nonatomic) BOOL allowTapOnTitle;                                                                                                  //@synthesize allowTapOnTitle=_allowTapOnTitle - In the implementation block
@property (assign,nonatomic) BOOL allowShowingPlayPauseButton;                                                                                      //@synthesize allowShowingPlayPauseButton=_allowShowingPlayPauseButton - In the implementation block
@property (assign,nonatomic) BOOL disableShowingNavigationBars;                                                                                     //@synthesize disableShowingNavigationBars=_disableShowingNavigationBars - In the implementation block
@property (assign,nonatomic) BOOL shouldPlaceScrubberInScrubberBar;                                                                                 //@synthesize shouldPlaceScrubberInScrubberBar=_shouldPlaceScrubberInScrubberBar - In the implementation block
@property (assign,nonatomic) BOOL disableChromeHiding;                                                                                              //@synthesize disableChromeHiding=_disableChromeHiding - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setTitle:(id)arg1 ;
-(NSString *)_title;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)_setLeftNavBarButtonItemCollection:(id)arg1 ;
-(void)_setTapGestureRecognizer:(id)arg1 ;
-(void)infoUpdaterDidUpdate:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(void)ppt_performAction:(unsigned long long)arg1 ;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)executeActionPerformer:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_performShowInLibraryAction;
-(void)setMaximumAccessoryToolbarHeight:(double)arg1 ;
-(BOOL)_lastChromeVisibility;
-(void)setViewController:(id)arg1 ;
-(PUBarButtonItemCollection *)_leftNavBarButtonItemCollection;
-(void)_updateCommentsButton:(id)arg1 withTitle:(id)arg2 ;
-(id)_commentsButtonWithTitle:(id)arg1 ;
-(BOOL)allowTapOnTitle;
-(void)_performCancelAction;
-(void)_setNextChromeVisibilityUpdateAnimationType:(long long)arg1 ;
-(void)_updateFileSizeButtonTitleIfNeeded;
-(void)playPauseBarItemsController:(id)arg1 didChange:(id)arg2 ;
-(BOOL)shouldShowDoneButton;
-(void)_performAssetExplorerReviewScreenActionType:(unsigned long long)arg1 ;
-(void)_startObservingOrientationChanges;
-(void)_performAddToLibraryAction;
-(id)_underlyingForYouSuggestionDataSourceManager;
-(void)setDisableChromeHiding:(BOOL)arg1 ;
-(void)_peformSuggestionSaveAction;
-(void)_setToolbarButtonIdentifiers:(id)arg1 ;
-(PUBarButtonItemCollection *)_toolbarButtonItemCollection;
-(id)init;
-(void)_initializeBarButtonItemCollections;
-(void)assetActionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(BOOL)wantsShowInLibraryButton;
-(void)_performToggleCommentsAction;
-(id<PUOneUpBarsControllerDelegate>)delegate;
-(PUPlayPauseBarItemsController *)_playPauseBarItemsController;
-(id)_attributtedCommentTitleForTitle:(id)arg1 highlighted:(BOOL)arg2 ;
-(long long)_identifierForButton:(id)arg1 ;
-(PUBrowsingSession *)browsingSession;
-(void)_setShowingPlayPauseButton:(BOOL)arg1 ;
-(void)_setNeedsUpdateFileSizeButtonMenu:(BOOL)arg1 ;
-(void)_performPlayPauseAction:(long long)arg1 ;
-(void)updateContentGuideInsets;
-(void)toggleOriginalButtonTouched:(id)arg1 ;
-(void)_resetIdentifierIndexes;
-(void)_performAirPlayAction;
-(void)setAllowShowingPlayPauseButton:(BOOL)arg1 ;
-(void)_performDoneEditingAction;
-(NSString *)subtitle;
-(id)_newBarButtonItemWithIdentifier:(long long)arg1 location:(long long)arg2 ;
-(BOOL)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_barButtonItemForIdentifier:(long long)arg1 location:(long long)arg2 ;
-(BOOL)shouldPlaceButtonsInNavigationBar;
-(void)_invalidateTitle;
-(PUAssetActionPerformer *)_activeActionPerformer;
-(BOOL)shouldShowScrubber;
-(void)_setToolbarButtonItemCollection:(id)arg1 ;
-(void)_setNeedsUpdatePlayPauseItems:(BOOL)arg1 ;
-(void)setDisableShowingNavigationBars:(BOOL)arg1 ;
-(void)_updateFileSizeButtonMenuIfNeeded;
-(BOOL)shouldShowTitleView;
-(PXInfoUpdater *)_currentAssetDisplayInfoUpdater;
-(void)_setLeftNavBarButtonIdentifiers:(id)arg1 ;
-(void)_updateChromeVisibilityIfNeeded;
-(BOOL)scrubberView:(id)arg1 shouldIgnoreHitTest:(CGPoint)arg2 withEvent:(id)arg3 ;
-(NSMutableIndexSet *)_leftNavBarButtonIdentifiers;
-(PUScrubberView *)_scrubberView;
-(void)setShouldUseCompactTitleView:(BOOL)arg1 ;
-(void)_executeActionPerformer:(id)arg1 ;
-(void)overOneUpPresentationSession:(id)arg1 didCompleteWithActivityType:(id)arg2 assetsByAssetCollection:(id)arg3 success:(BOOL)arg4 ;
-(id)barButtonItemCollection:(id)arg1 newBarButtonItemForIdentifier:(long long)arg2 ;
-(void)setWantsShowInLibraryButton:(BOOL)arg1 ;
-(void)updateGestureRecognizersWithHostingView:(id)arg1 ;
-(void)_updateCommentsTitleIfNeeded;
-(void)_performLikeAction:(BOOL)arg1 ;
-(void)updateBars;
-(PUBarButtonItemCollection *)_rightNavBarButtonItemCollection;
-(BOOL)disableShowingNavigationBars;
-(void)_invalidateFileSizeButtonTitle;
-(long long)_locationForBarButtonItemCollection:(id)arg1 ;
-(id)_airPlayBarButtonItemForPopoverPresentation;
-(long long)preferredBarStyle;
-(void)_updateIdentifiersIndexesWithIdentifier:(long long)arg1 location:(long long)arg2 shouldEnable:(BOOL)arg3 ;
-(void)setShouldShowAirPlayButton:(BOOL)arg1 ;
-(void)_setNeedsUpdateCommentsTitle:(BOOL)arg1 ;
-(void)setDelegate:(id<PUOneUpBarsControllerDelegate>)arg1 ;
-(NSMutableIndexSet *)_toolbarButtonIdentifiers;
-(void)_performDuplicateActivityWithAssetsByAssetCollection:(id)arg1 ;
-(void)_performEditAction;
-(void)_invalidateChromeVisibilityWithAnimationType:(long long)arg1 ;
-(void)_performReviewAction;
-(id)_barButtonItemForActionType:(unsigned long long)arg1 ;
-(void)_setNeedsUpdateFileSizeButtonTitle:(BOOL)arg1 ;
-(id)requestInfoOfKind:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(UIView *)ppt_scrubberView;
-(void)_setNextCommentsActionShouldBeginEditing:(BOOL)arg1 ;
-(void)_performShareAction;
-(void)setShouldShowTitleView:(BOOL)arg1 ;
-(BOOL)shouldPlaceScrubberInScrubberBar;
-(void)_performChangesWithCurrentVideoPlayer:(/*^block*/id)arg1 ;
-(void)barButtonItemTapped:(id)arg1 ;
-(void)_handleAssetViewModelBeginEditingTimer:(id)arg1 ;
-(BOOL)_needsUpdateFileSizeButtonTitle;
-(void)overOneUpPresentationSession:(id)arg1 didAppendReviewScreenAction:(unsigned long long)arg2 ;
-(double)maximumToolbarHeight;
-(void)_setRightNavBarButtonItemCollection:(id)arg1 ;
-(void)setSharingPreheatedPerformer:(PUAssetActionPerformer *)arg1 ;
-(void)_setNeedsUpdateTitle:(BOOL)arg1 ;
-(BOOL)shouldUseCompactCommentsTitle;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)_performAllPhotosAction;
-(void)_stopObservingOrientationChanges;
-(BOOL)_nextCommentsActionShouldBeginEditing;
-(BOOL)isShowingPlayPauseButton;
-(void)_revealGainMapImage;
-(long long)_scrubberType;
-(BOOL)_needsUpdateChromeVisibility;
-(id)overOneUpPresentationSession:(id)arg1 barButtonItemForActivityType:(id)arg2 ;
-(void)_setRightNavBarButtonIdentifiers:(id)arg1 ;
-(void)_updateShowingPlayPauseButton;
-(BOOL)wantsNavigationBarVisible;
-(void)setAllowTapOnTitle:(BOOL)arg1 ;
-(void)setShouldShowDoneButton:(BOOL)arg1 ;
-(BOOL)allowShowingPlayPauseButton;
-(PUPhotoBrowserTitleViewController *)_titleViewController;
-(void)_invalidateScrubber;
-(void)_performToggleFavoriteAction;
-(void)setShouldPlaceButtonsInNavigationBar:(BOOL)arg1 ;
-(void)invalidateViewControllerView;
-(id)_activeBarButtonItemForIdentifier:(long long)arg1 ;
-(void)_invalidateCommentsTitle;
-(void)_updateAddToLibraryBarButtonItem;
-(BOOL)assetActionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(BOOL)shouldTapBeginAtLocationFromProvider:(id)arg1 ;
-(void)_handleSharingPreheat;
-(NSMutableIndexSet *)_rightNavBarButtonIdentifiers;
-(void)setShouldUseCompactCommentsTitle:(BOOL)arg1 ;
-(id)_barButtonItemCollectionForLocation:(long long)arg1 ;
-(long long)_locationForBarButtonItemWithIdentifier:(long long)arg1 ;
-(BOOL)shouldUseCompactTitleView;
-(BOOL)_needsUpdateTitle;
-(void)_invalidateFileSizeButtonMenu;
-(PXImageModulationManager *)debuggingObservedImageModulationManager;
-(void)_peformSuggestionRevertAction;
-(BOOL)_needsUpdateFileSizeButtonMenu;
-(void)_browsingViewModel:(id)arg1 didChange:(id)arg2 ;
-(void)_toggleCTM;
-(void)_updateTitleIfNeeded;
-(void)_performTrashAction;
-(void)photoBrowserTitleViewControllerTapped:(id)arg1 ;
-(long long)_nextChromeVisibilityUpdateAnimationType;
-(void)setShouldShowScrubber:(BOOL)arg1 ;
-(void)_performSlideShowAction;
-(BOOL)_needsUpdatePlayPauseItems;
-(BOOL)_shouldShowDoneEditingButton;
-(BOOL)_canShowCommentsForCurrentAsset;
-(void)_setNeedsUpdateChromeVisibility:(BOOL)arg1 ;
-(PUAssetActionPerformer *)sharingPreheatedPerformer;
-(void)_toolbarViewModel:(id)arg1 didChange:(id)arg2 ;
-(BOOL)wantsToolbarVisible;
-(BOOL)_needsUpdateCommentsTitle;
-(void)_performHideActivityWithAssetsByAssetCollection:(id)arg1 ;
-(id)_commentTitleColor;
-(void)setMaximumToolbarHeight:(double)arg1 ;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(NSString *)_scrubbingIdentifier;
-(void)_setActiveActionPerformer:(id)arg1 ;
-(void)orientationChanged:(id)arg1 ;
-(void)_performRestoreAction;
-(double)maximumAccessoryToolbarHeight;
-(void)_performRemoveFromFeaturedPhotosActivityWithAssetsByAssetCollection:(id)arg1 ;
-(id)_commentTitleAttributes;
-(BOOL)disableChromeHiding;
-(unsigned long long)_sourceContextForActionPerformer;
-(NSString *)title;
-(void)_performMuteAction:(BOOL)arg1 ;
-(void)setBrowsingSession:(PUBrowsingSession *)arg1 ;
-(void)_updateFavoriteBarButtonItem;
-(void)dealloc;
-(UITapGestureRecognizer *)_tapGestureRecognizer;
-(BOOL)_wantsChromeVisible;
-(void)setDebuggingObservedImageModulationManager:(PXImageModulationManager *)arg1 ;
-(BOOL)shouldShowAirPlayButton;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_updateScrubberViewIfNeeded;
-(void)_setLastChromeVisibility:(BOOL)arg1 ;
-(void)setShouldPlaceScrubberInScrubberBar:(BOOL)arg1 ;
@end

