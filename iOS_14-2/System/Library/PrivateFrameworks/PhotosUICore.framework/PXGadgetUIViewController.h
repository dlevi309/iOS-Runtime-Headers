/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>
#import <libobjc.A.dylib/PXGadgetCollectionViewLayoutDelegate.h>
#import <libobjc.A.dylib/PXGadgetAnchorHelperDelegate.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXContentUnavailablePlaceholderManagerDelegate.h>
#import <UIKit/UICollectionViewDataSourcePrefetching.h>
#import <libobjc.A.dylib/PXSplitViewControllerChangeObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXGadgetNavigationHelperDelegate.h>
#import <UIKit/UICollectionViewDropDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/PXGadgetDelegate.h>

@protocol PXGadget;
@class PXGadgetDataSource, NSMutableSet, NSMapTable, PXGadgetDataSourceManager, PXGadgetNavigationHelper, PXGadgetAnchorHelper, UIColor, UIContextMenuInteraction, UIViewController, UIView, PXUpdater, PXGadgetSpecManager, NSTimer, PXContentUnavailableView, PXContentUnavailablePlaceholderManager, PXGadgetCollectionViewLayout, NSString;

@interface PXGadgetUIViewController : UICollectionViewController <UIContextMenuInteractionDelegate, PXGadgetCollectionViewLayoutDelegate, PXGadgetAnchorHelperDelegate, PXSectionedDataSourceManagerObserver, PXContentUnavailablePlaceholderManagerDelegate, UICollectionViewDataSourcePrefetching, PXSplitViewControllerChangeObserver, PXChangeObserver, PXGadgetNavigationHelperDelegate, UICollectionViewDropDelegate, UICollectionViewDelegateFlowLayout, PXGadgetDelegate> {

	NSMutableSet* _registeredCellReuseIdentifiers;
	NSMapTable* _cellsToGadgets;
	BOOL _isScrolling;
	BOOL _isInteractionPreviewCancelled;
	BOOL _currentlyVisible;
	BOOL _loadingGadgets;
	BOOL _gadgetAnimating;
	BOOL _batchUpdating;
	BOOL _isContentVisible;
	BOOL _isDFITogglingSidebar;
	BOOL _isRotatingVerticalLayout;
	BOOL _shouldPreventPlaceholder;
	BOOL _allowsBarManagement;
	struct {
		BOOL collectionNeedsUpdate;
		BOOL loadRemaingGadgetsAfterViewAppeared;
	}  _updateFlags;
	PXGadgetDataSourceManager* _dataSourceManager;
	PXGadgetNavigationHelper* _navigationHelper;
	PXGadgetAnchorHelper* _anchorHelper;
	unsigned long long _numberOfInitialGadgetsToLoad;
	UIColor* _backgroundColor;
	UIContextMenuInteraction* _contextMenuInteraction;
	id<PXGadget> _interactionPreviewGadget;
	UIViewController* _interactionPreviewViewController;
	UIView* _interactionPreviewView;
	PXUpdater* _updater;
	PXGadgetDataSource* _dataSource;
	PXGadgetSpecManager* _specManager;
	id<PXGadget> _selectedGadget;
	NSTimer* _gadgetSeenTimer;
	NSMutableSet* _seenGadgetIdentifiers;
	NSMutableSet* _cellsWantingVisibleRectUpdates;
	PXContentUnavailableView* _placeholderView;
	PXContentUnavailablePlaceholderManager* _placeholderManager;

}

@property (nonatomic,retain) UIContextMenuInteraction * contextMenuInteraction;                        //@synthesize contextMenuInteraction=_contextMenuInteraction - In the implementation block
@property (nonatomic,retain) id<PXGadget> interactionPreviewGadget;                                    //@synthesize interactionPreviewGadget=_interactionPreviewGadget - In the implementation block
@property (nonatomic,retain) UIViewController * interactionPreviewViewController;                      //@synthesize interactionPreviewViewController=_interactionPreviewViewController - In the implementation block
@property (nonatomic,retain) UIView * interactionPreviewView;                                          //@synthesize interactionPreviewView=_interactionPreviewView - In the implementation block
@property (assign,nonatomic) BOOL isInteractionPreviewCancelled;                                       //@synthesize isInteractionPreviewCancelled=_isInteractionPreviewCancelled - In the implementation block
@property (nonatomic,readonly) PXUpdater * updater;                                                    //@synthesize updater=_updater - In the implementation block
@property (nonatomic,retain) PXGadgetDataSource * dataSource;                                          //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,getter=isCurrentlyVisible,nonatomic) BOOL currentlyVisible;                          //@synthesize currentlyVisible=_currentlyVisible - In the implementation block
@property (assign,getter=isLoadingGadgets,nonatomic) BOOL loadingGadgets;                              //@synthesize loadingGadgets=_loadingGadgets - In the implementation block
@property (assign,getter=isGadgetAnimating,nonatomic) BOOL gadgetAnimating;                            //@synthesize gadgetAnimating=_gadgetAnimating - In the implementation block
@property (assign,getter=isBatchUpdating,nonatomic) BOOL batchUpdating;                                //@synthesize batchUpdating=_batchUpdating - In the implementation block
@property (nonatomic,retain) PXGadgetSpecManager * specManager;                                        //@synthesize specManager=_specManager - In the implementation block
@property (nonatomic,retain) id<PXGadget> selectedGadget;                                              //@synthesize selectedGadget=_selectedGadget - In the implementation block
@property (assign,nonatomic) PXGadgetUpdateFlags updateFlags;                                          //@synthesize updateFlags=_updateFlags - In the implementation block
@property (nonatomic,retain) NSTimer * gadgetSeenTimer;                                                //@synthesize gadgetSeenTimer=_gadgetSeenTimer - In the implementation block
@property (nonatomic,retain) NSMutableSet * seenGadgetIdentifiers;                                     //@synthesize seenGadgetIdentifiers=_seenGadgetIdentifiers - In the implementation block
@property (assign,setter=setContentVisible:,nonatomic) BOOL isContentVisible;                          //@synthesize isContentVisible=_isContentVisible - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> gadgetViewControllerLog; 
@property (nonatomic,retain) NSMutableSet * cellsWantingVisibleRectUpdates;                            //@synthesize cellsWantingVisibleRectUpdates=_cellsWantingVisibleRectUpdates - In the implementation block
@property (nonatomic,retain) PXContentUnavailableView * placeholderView;                               //@synthesize placeholderView=_placeholderView - In the implementation block
@property (assign,nonatomic) BOOL isScrolling;                                                         //@synthesize isScrolling=_isScrolling - In the implementation block
@property (assign,nonatomic) BOOL isDFITogglingSidebar;                                                //@synthesize isDFITogglingSidebar=_isDFITogglingSidebar - In the implementation block
@property (assign,nonatomic) BOOL isRotatingVerticalLayout;                                            //@synthesize isRotatingVerticalLayout=_isRotatingVerticalLayout - In the implementation block
@property (nonatomic,readonly) CGRect visibleBounds; 
@property (nonatomic,retain) PXContentUnavailablePlaceholderManager * placeholderManager;              //@synthesize placeholderManager=_placeholderManager - In the implementation block
@property (nonatomic,readonly) BOOL shouldPreventPlaceholder;                                          //@synthesize shouldPreventPlaceholder=_shouldPreventPlaceholder - In the implementation block
@property (nonatomic,readonly) BOOL allowsBarManagement;                                               //@synthesize allowsBarManagement=_allowsBarManagement - In the implementation block
@property (nonatomic,readonly) PXGadgetDataSourceManager * dataSourceManager;                          //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) PXGadgetNavigationHelper * navigationHelper;                            //@synthesize navigationHelper=_navigationHelper - In the implementation block
@property (nonatomic,readonly) PXGadgetAnchorHelper * anchorHelper;                                    //@synthesize anchorHelper=_anchorHelper - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfInitialGadgetsToLoad;                          //@synthesize numberOfInitialGadgetsToLoad=_numberOfInitialGadgetsToLoad - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) PXGadgetCollectionViewLayout * layout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIEdgeInsets insetsForSectionHeaders; 
@property (nonatomic,readonly) BOOL isTogglingSidebarNoRotating; 
@property (nonatomic,readonly) id<PXGadgetTransition> gadgetTransition; 
@property (nonatomic,readonly) PXGadgetNavigationHelper * rootNavigationHelper; 
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> nextGadgetResponder; 
+(Class)gadgetSpecClass;
-(id)px_gridPresentation;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)collectionView:(id)arg1 canHandleDropSesson:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(CGRect)visibleBounds;
-(PXGadgetSpecManager *)specManager;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)viewWillLayoutSubviews;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setIsScrolling:(BOOL)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(BOOL)navigationHelperCanCurrentlyNavigate:(id)arg1 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(UIContextMenuInteraction *)contextMenuInteraction;
-(BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)setPlaceholderView:(PXContentUnavailableView *)arg1 ;
-(long long)_scrollAxis;
-(BOOL)navigateToGadget:(id)arg1 animated:(BOOL)arg2 ;
-(id)gadgetDataSourceForNavigationHelper:(id)arg1 ;
-(void)navigationHelperDidNotFindValidGadget:(id)arg1 ;
-(UIEdgeInsets)insetsForSectionHeaders;
-(void)configureSectionHeader:(id)arg1 ;
-(void)contentUnavailablePlaceholderManagerDidChange:(id)arg1 ;
-(id)sortedVisibleIndexPathsForAnchorHelper:(id)arg1 ;
-(BOOL)anchorHelper:(id)arg1 indexPathIsFullyVisible:(id)arg2 ;
-(BOOL)isTogglingSidebarNoRotating;
-(void)_initializeDataSource;
-(void)_initializeHelpers;
-(void)_updaterNeedsUpdate;
-(BOOL)isRootGadgetViewController;
-(id)gadgetAtLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(void)_addContextMenuInteraction;
-(void)_removeContextMenuInteraction;
-(id)_gadgetAtIndexPath:(id)arg1 ;
-(id)_indexPathForGadget:(id)arg1 ;
-(void)_configureHeader:(id)arg1 withGadgetSection:(id)arg2 ;
-(void)_handleGadgetsSeen;
-(void)_clearTimerToHandleGadgetsSeen;
-(void)_setTimerToHandleGadgetsSeen;
-(void)_notifyGadgetsThatGadgetControllerHasAppeared;
-(void)_notifyGadgetsThatGadgetControllerHasDisappeared;
-(void)_updateHeaderForGadget:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_updateVisibleGadgetHeaders;
-(void)_notifyPresentedGadgetsOfVisibilityChange;
-(void)_scrollViewDidEndScrolling;
-(void)_updateGadgetVisibleRects;
-(void)_updateVisibleRectForGadget:(id)arg1 inCell:(id)arg2 collectionView:(id)arg3 ;
-(void)visibleBoundsDidChange;
-(BOOL)_isUsingDeprecatedViewLoadingForGadget:(id)arg1 ;
-(id)_gadgetForCollectionViewCell:(id)arg1 ;
-(void)_setGadget:(id)arg1 forCollectionViewCell:(id)arg2 ;
-(void)_gadgetSpecDidChange;
-(void)_invalidatePlaceholder;
-(NSObject*<OS_os_log>)gadgetViewControllerLog;
-(PXGadgetAnchorHelper *)anchorHelper;
-(unsigned long long)numberOfInitialGadgetsToLoad;
-(id<PXGadget>)interactionPreviewGadget;
-(BOOL)isLoadingGadgets;
-(void)setInteractionPreviewGadget:(id<PXGadget>)arg1 ;
-(UIViewController *)interactionPreviewViewController;
-(void)setInteractionPreviewViewController:(UIViewController *)arg1 ;
-(UIView *)interactionPreviewView;
-(void)setInteractionPreviewView:(UIView *)arg1 ;
-(BOOL)isInteractionPreviewCancelled;
-(void)setIsInteractionPreviewCancelled:(BOOL)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(PXContentUnavailableView *)placeholderView;
-(void)setCurrentlyVisible:(BOOL)arg1 ;
-(void)setLoadingGadgets:(BOOL)arg1 ;
-(BOOL)isGadgetAnimating;
-(void)setGadgetAnimating:(BOOL)arg1 ;
-(BOOL)isBatchUpdating;
-(void)setBatchUpdating:(BOOL)arg1 ;
-(id<PXGadget>)selectedGadget;
-(void)setSelectedGadget:(id<PXGadget>)arg1 ;
-(void)setUpdateFlags:(PXGadgetUpdateFlags)arg1 ;
-(NSTimer *)gadgetSeenTimer;
-(void)setGadgetSeenTimer:(NSTimer *)arg1 ;
-(BOOL)isDFITogglingSidebar;
-(NSMutableSet *)seenGadgetIdentifiers;
-(void)setSeenGadgetIdentifiers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)cellsWantingVisibleRectUpdates;
-(void)setCellsWantingVisibleRectUpdates:(NSMutableSet *)arg1 ;
-(void)setIsDFITogglingSidebar:(BOOL)arg1 ;
-(BOOL)isRotatingVerticalLayout;
-(void)setIsRotatingVerticalLayout:(BOOL)arg1 ;
-(PXContentUnavailablePlaceholderManager *)placeholderManager;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)reloadContent;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(void)_updatePlaceholder;
-(id)initWithLayout:(id)arg1 dataSourceManager:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(PXGadgetDataSource *)dataSource;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)debugURLsForDiagnostics;
-(UIColor *)backgroundColor;
-(BOOL)isCurrentlyVisible;
-(void)splitViewController:(id)arg1 willChangeSidebarVisibility:(BOOL)arg2 ;
-(void)splitViewController:(id)arg1 didChangeSidebarVisibility:(BOOL)arg2 ;
-(void)updateIfNeeded;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setDataSource:(PXGadgetDataSource *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(PXUpdater *)updater;
-(PXGadgetDataSourceManager *)dataSourceManager;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(BOOL)gadget:(id)arg1 transitionToViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)gadgetViewControllerHostingGadget:(id)arg1 ;
-(id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)setContentVisible:(BOOL)arg1 ;
-(id<PXGadgetTransition>)gadgetTransition;
-(void)gadget:(id)arg1 animateChanges:(/*^block*/id)arg2 ;
-(id<PXGadgetDelegate>)nextGadgetResponder;
-(PXGadgetNavigationHelper *)rootNavigationHelper;
-(BOOL)isContentVisible;
-(void)presentGadgetViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissGadgetViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(long long)scrollAnimationIdentifier;
-(PXGadgetNavigationHelper *)navigationHelper;
-(void)setPlaceholderManager:(PXContentUnavailablePlaceholderManager *)arg1 ;
-(BOOL)allowsBarManagement;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)pu_scrollToInitialPositionAnimated:(BOOL)arg1 ;
-(BOOL)isScrolling;
-(id)px_endPointForTransition:(id)arg1 ;
-(void)_dataSourceManagerDidChange;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)gadgetControllerFinishedUpdatingDataSourceWithChange:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setContextMenuInteraction:(UIContextMenuInteraction *)arg1 ;
-(void)contextMenuInteractionDidEnd:(id)arg1 ;
-(PXGadgetUpdateFlags)updateFlags;
-(void)setSpecManager:(PXGadgetSpecManager *)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)setNumberOfInitialGadgetsToLoad:(unsigned long long)arg1 ;
-(void)setLayout:(PXGadgetCollectionViewLayout *)arg1 ;
-(void)rootGadgetControllerWillAppear;
-(void)rootGadgetControllerDidDisappear;
-(void)viewDidLayoutSubviews;
-(void)gadget:(id)arg1 didChange:(unsigned long long)arg2 ;
-(BOOL)shouldPreventPlaceholder;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXGadgetCollectionViewLayout *)layout;
@end

