/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXUIKeyCommandNamespace.h>
#import <libobjc.A.dylib/PXMutablePhotosLibraryViewModel.h>
#import <libobjc.A.dylib/PXCuratedLibraryAssetsDataSourceManagerDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@protocol NSObject, PXFilterState;
@class NSMutableSet, PXCuratedLibraryAssetCollectionSkimmingInfo, NSSet, NSNumber, NSHashTable, PXCPLUIStatusProvider, PXCuratedLibraryLayoutSpecManager, PXCuratedLibraryStyleGuide, PXCuratedLibraryAssetsDataSourceManager, PXAssetsDataSource, PXCuratedLibraryActionManager, PXSectionedSelectionManager, PXZoomablePhotosViewModel, NSString, NSObject, PXCuratedLibraryAnalysisStatus, PXUpdater, PXScrollViewSpeedometer, PXAssetActionManager, PXAssetCollectionActionManager, NSArray, PXSelectionSnapshot;

@interface PXCuratedLibraryViewModel : PXObservable <PXUIKeyCommandNamespace, PXMutablePhotosLibraryViewModel, PXCuratedLibraryAssetsDataSourceManagerDelegate, PXChangeObserver, PXAssetsDataSourceManagerObserver, PXSettingsKeyObserver> {

	NSHashTable* _presenters;
	NSHashTable* _views;
	NSMutableSet* _visibleAssetCollections;
	BOOL _attemptedLazyCreationOfCPLUIStatusProvider;
	PXCPLUIStatusProvider* _cplUIStatusProvider;
	long long _pendingChromeVisibilityChangeReason;
	id<NSObject> _filterTimeoutObserver;
	BOOL _isAppearing;
	BOOL _wantsNavigationBarVisible;
	BOOL _wantsTabBarVisible;
	BOOL _wantsToolbarVisible;
	BOOL _wantsSecondaryToolbarVisible;
	BOOL _wantsOptionalChromeVisible;
	BOOL _wantsDarkStatusBar;
	BOOL _viewBasedDecorationsEnabled;
	BOOL _isSelecting;
	BOOL _sidebarCanBecomeVisible;
	BOOL _wantsSidebarVisible;
	BOOL _aspectFitContent;
	BOOL _hideStatusFooterInSelectMode;
	BOOL _isPerformingInitialChanges;
	PXCuratedLibraryLayoutSpecManager* _specManager;
	PXCuratedLibraryStyleGuide* _styleGuide;
	PXCuratedLibraryAssetsDataSourceManager* _assetsDataSourceManager;
	PXAssetsDataSource* _currentDataSource;
	PXCuratedLibraryActionManager* _actionManager;
	NSSet* _allowedActions;
	long long _zoomLevelTransitionPhase;
	long long _lastChromeVisibilityChangeReason;
	PXSectionedSelectionManager* _selectionManager;
	double _daysMarginScale;
	PXZoomablePhotosViewModel* _zoomablePhotosViewModel;
	long long _scrollRegime;
	PXCuratedLibraryAssetCollectionSkimmingInfo* _skimmingInfo;
	NSSet* _draggedAssetReferences;
	unsigned long long _libraryState;
	NSString* _selectModeCaption;
	long long _zoomLevel;
	NSObject*<PXFilterState> _currentFilterState;
	NSObject*<PXFilterState> _allPhotosFilterState;
	PXCuratedLibraryAnalysisStatus* _analysisStatus;
	Class _cplActionManagerClass;
	NSNumber* _userWantsAspectFitContent;
	PXUpdater* _updater;
	PXScrollViewSpeedometer* _scrollingSpeedometer;
	PXAssetActionManager* _assetActionManager;
	PXAssetCollectionActionManager* _assetCollectionActionManager;
	CGPoint _lastScrollDirection;
	SCD_Struct_PX72 _selectedAssetsTypedCount;

}

@property (nonatomic,readonly) NSString * namespaceIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isPerformingInitialChanges;                                                //@synthesize isPerformingInitialChanges=_isPerformingInitialChanges - In the implementation block
@property (nonatomic,readonly) PXUpdater * updater;                                                            //@synthesize updater=_updater - In the implementation block
@property (nonatomic,retain) PXAssetsDataSource * currentDataSource;                                           //@synthesize currentDataSource=_currentDataSource - In the implementation block
@property (nonatomic,retain) PXScrollViewSpeedometer * scrollingSpeedometer;                                   //@synthesize scrollingSpeedometer=_scrollingSpeedometer - In the implementation block
@property (nonatomic,readonly) id<PXCuratedLibraryViewModelPresenter> mainPresenter; 
@property (nonatomic,retain) PXAssetActionManager * assetActionManager;                                        //@synthesize assetActionManager=_assetActionManager - In the implementation block
@property (nonatomic,retain) PXAssetCollectionActionManager * assetCollectionActionManager;                    //@synthesize assetCollectionActionManager=_assetCollectionActionManager - In the implementation block
@property (assign,nonatomic) BOOL wantsNavigationBarVisible;                                                   //@synthesize wantsNavigationBarVisible=_wantsNavigationBarVisible - In the implementation block
@property (assign,nonatomic) BOOL wantsTabBarVisible;                                                          //@synthesize wantsTabBarVisible=_wantsTabBarVisible - In the implementation block
@property (assign,nonatomic) BOOL wantsToolbarVisible;                                                         //@synthesize wantsToolbarVisible=_wantsToolbarVisible - In the implementation block
@property (assign,nonatomic) BOOL wantsSecondaryToolbarVisible;                                                //@synthesize wantsSecondaryToolbarVisible=_wantsSecondaryToolbarVisible - In the implementation block
@property (assign,nonatomic) long long scrollRegime;                                                           //@synthesize scrollRegime=_scrollRegime - In the implementation block
@property (assign,nonatomic) CGPoint lastScrollDirection;                                                      //@synthesize lastScrollDirection=_lastScrollDirection - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryLayoutSpecManager * specManager;                                //@synthesize specManager=_specManager - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryStyleGuide * styleGuide;                                        //@synthesize styleGuide=_styleGuide - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryAssetsDataSourceManager * assetsDataSourceManager;              //@synthesize assetsDataSourceManager=_assetsDataSourceManager - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryActionManager * actionManager;                                  //@synthesize actionManager=_actionManager - In the implementation block
@property (nonatomic,readonly) NSArray * presenters; 
@property (nonatomic,readonly) NSArray * views; 
@property (nonatomic,readonly) NSSet * visibleAssetCollections; 
@property (nonatomic,readonly) NSSet * allowedActions;                                                         //@synthesize allowedActions=_allowedActions - In the implementation block
@property (nonatomic,readonly) BOOL isAppearing;                                                               //@synthesize isAppearing=_isAppearing - In the implementation block
@property (nonatomic,readonly) long long zoomLevelTransitionPhase;                                             //@synthesize zoomLevelTransitionPhase=_zoomLevelTransitionPhase - In the implementation block
@property (nonatomic,readonly) BOOL wantsOptionalChromeVisible;                                                //@synthesize wantsOptionalChromeVisible=_wantsOptionalChromeVisible - In the implementation block
@property (nonatomic,readonly) long long lastChromeVisibilityChangeReason;                                     //@synthesize lastChromeVisibilityChangeReason=_lastChromeVisibilityChangeReason - In the implementation block
@property (nonatomic,readonly) BOOL wantsDarkStatusBar;                                                        //@synthesize wantsDarkStatusBar=_wantsDarkStatusBar - In the implementation block
@property (nonatomic,readonly) BOOL viewBasedDecorationsEnabled;                                               //@synthesize viewBasedDecorationsEnabled=_viewBasedDecorationsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isSelecting;                                                               //@synthesize isSelecting=_isSelecting - In the implementation block
@property (nonatomic,readonly) PXSelectionSnapshot * selectionSnapshot; 
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager;                                 //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,readonly) double daysMarginScale;                                                         //@synthesize daysMarginScale=_daysMarginScale - In the implementation block
@property (nonatomic,readonly) PXZoomablePhotosViewModel * zoomablePhotosViewModel;                            //@synthesize zoomablePhotosViewModel=_zoomablePhotosViewModel - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryAssetCollectionSkimmingInfo * skimmingInfo;                     //@synthesize skimmingInfo=_skimmingInfo - In the implementation block
@property (nonatomic,readonly) NSSet * draggedAssetReferences;                                                 //@synthesize draggedAssetReferences=_draggedAssetReferences - In the implementation block
@property (nonatomic,readonly) unsigned long long libraryState;                                                //@synthesize libraryState=_libraryState - In the implementation block
@property (nonatomic,readonly) NSString * selectModeCaption;                                                   //@synthesize selectModeCaption=_selectModeCaption - In the implementation block
@property (nonatomic,readonly) long long zoomLevel;                                                            //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) NSObject*<PXFilterState> currentFilterState;                                    //@synthesize currentFilterState=_currentFilterState - In the implementation block
@property (nonatomic,readonly) NSObject*<PXFilterState> allPhotosFilterState;                                  //@synthesize allPhotosFilterState=_allPhotosFilterState - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX72 selectedAssetsTypedCount;                                       //@synthesize selectedAssetsTypedCount=_selectedAssetsTypedCount - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryAnalysisStatus * analysisStatus;                                //@synthesize analysisStatus=_analysisStatus - In the implementation block
@property (nonatomic,readonly) PXCPLUIStatusProvider * cplUIStatusProvider; 
@property (nonatomic,readonly) Class cplActionManagerClass;                                                    //@synthesize cplActionManagerClass=_cplActionManagerClass - In the implementation block
@property (nonatomic,readonly) BOOL sidebarCanBecomeVisible;                                                   //@synthesize sidebarCanBecomeVisible=_sidebarCanBecomeVisible - In the implementation block
@property (nonatomic,readonly) BOOL wantsSidebarVisible;                                                       //@synthesize wantsSidebarVisible=_wantsSidebarVisible - In the implementation block
@property (nonatomic,readonly) BOOL aspectFitContent;                                                          //@synthesize aspectFitContent=_aspectFitContent - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * userWantsAspectFitContent;                                      //@synthesize userWantsAspectFitContent=_userWantsAspectFitContent - In the implementation block
@property (nonatomic,readonly) BOOL hideStatusFooterInSelectMode;                                              //@synthesize hideStatusFooterInSelectMode=_hideStatusFooterInSelectMode - In the implementation block
-(BOOL)viewBasedDecorationsEnabled;
-(NSSet *)draggedAssetReferences;
-(NSSet *)allowedActions;
-(PXSectionedSelectionManager *)selectionManager;
-(PXAssetCollectionActionManager *)assetCollectionActionManager;
-(void)_systemPhotoLibraryDidChange;
-(PXSelectionSnapshot *)selectionSnapshot;
-(void)setIsSelecting:(BOOL)arg1 ;
-(void)setWantsOptionalChromeVisible:(BOOL)arg1 ;
-(void)setZoomLevelTransitionPhase:(long long)arg1 ;
-(void)_updateDraggedAssetReferences;
-(void)_updateAspectFitContent;
-(PXCuratedLibraryLayoutSpecManager *)specManager;
-(id)_createCPLUIStatusProvider;
-(void)setDraggedAssetReferences:(NSSet *)arg1 ;
-(PXAssetActionManager *)assetActionManager;
-(PXCuratedLibraryAssetsDataSourceManager *)assetsDataSourceManager;
-(void)setWantsSecondaryToolbarVisible:(BOOL)arg1 ;
-(long long)zoomLevel;
-(BOOL)_performSelectionKeyCommand:(id)arg1 withDelegate:(id)arg2 ;
-(BOOL)isSelecting;
-(void)setCplUIStatusProvider:(PXCPLUIStatusProvider *)arg1 ;
-(PXAssetsDataSource *)currentDataSource;
-(void)setIsAppearing:(BOOL)arg1 ;
-(BOOL)sidebarCanBecomeVisible;
-(void)setCurrentDataSource:(PXAssetsDataSource *)arg1 ;
-(void)setZoomLevel:(long long)arg1 ;
-(void)removePresenter:(id)arg1 ;
-(void)setSidebarCanBecomeVisible:(BOOL)arg1 ;
-(BOOL)wantsSecondaryToolbarVisible;
-(id)init;
-(void)toggleSelectionForAssetCollectionReference:(id)arg1 ;
-(PXCuratedLibraryAnalysisStatus *)analysisStatus;
-(void)_updateSelectModeCaption;
-(void)_updateScrollingProperties;
-(PXCuratedLibraryAssetCollectionSkimmingInfo *)skimmingInfo;
-(void)performInitialChanges:(/*^block*/id)arg1 ;
-(void)setLibraryState:(unsigned long long)arg1 ;
-(void)_updateScrollingSpeedometer;
-(unsigned long long)libraryState;
-(PXScrollViewSpeedometer *)scrollingSpeedometer;
-(NSSet *)visibleAssetCollections;
-(void)_invalidateUserWantsAspectFitContent;
-(void)setSelectModeCaption:(NSString *)arg1 ;
-(void)setAllPhotosFilterState:(NSObject*<PXFilterState>)arg1 ;
-(double)daysMarginScale;
-(void)_updateUserWantsAspectFitContent;
-(void)toggleSelectionForAssetReference:(id)arg1 updateCursorIndexPath:(BOOL)arg2 ;
-(void)didPerformChanges;
-(void)_invalidateChromeVisibilityWithChangeReason:(long long)arg1 ;
-(PXCPLUIStatusProvider *)cplUIStatusProvider;
-(id)curatedLibraryAssetsDataSourceManager:(id)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2 ;
-(BOOL)hideStatusFooterInSelectMode;
-(void)toggleSelectionForAssetReference:(id)arg1 ;
-(BOOL)wantsSidebarVisible;
-(void)setUserWantsAspectFitContent:(NSNumber *)arg1 ;
-(void)_invalidateScrollingProperties;
-(BOOL)isPerformingInitialChanges;
-(void)_invalidateAspectFitContent;
-(void)_invalidateAssetsDataSourceManager;
-(PXCuratedLibraryActionManager *)actionManager;
-(PXCuratedLibraryStyleGuide *)styleGuide;
-(void)setWantsNavigationBarVisible:(BOOL)arg1 ;
-(void)setWantsDarkStatusBar:(BOOL)arg1 ;
-(void)_updateZoomablePhotosViewModel;
-(void)setAssetCollectionActionManager:(PXAssetCollectionActionManager *)arg1 ;
-(void)_updateAllowedActions;
-(id)initWithPhotoLibrary:(id)arg1 zoomLevel:(long long)arg2 mediaProvider:(id)arg3 specManager:(id)arg4 styleGuide:(id)arg5 ;
-(void)toggleSelectionForIndexPath:(PXSimpleIndexPath)arg1 updateCursorIndexPath:(BOOL)arg2 ;
-(void)setLastScrollDirection:(CGPoint)arg1 ;
-(void)_updateAssetsDataSourceManager;
-(PXZoomablePhotosViewModel *)zoomablePhotosViewModel;
-(void)setScrollRegime:(long long)arg1 ;
-(long long)lastChromeVisibilityChangeReason;
-(void)_addSelectionShortcutsIntoArray:(id)arg1 usingDelegate:(id)arg2 ;
-(NSString *)description;
-(void)setViewBasedDecorationsEnabled:(BOOL)arg1 ;
-(BOOL)isAppearing;
-(PXUpdater *)updater;
-(void)setWantsToolbarVisible:(BOOL)arg1 ;
-(NSObject*<PXFilterState>)allPhotosFilterState;
-(void)removeView:(id)arg1 ;
-(long long)curatedLibraryAssetsDataSourceManager:(id)arg1 transitionTypeFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3 ;
-(void)assetsDataSourceManagerDidFinishBackgroundFetching:(id)arg1 ;
-(NSString *)selectModeCaption;
-(void)setDaysMarginScale:(double)arg1 ;
-(void)setWantsSidebarVisible:(BOOL)arg1 ;
-(BOOL)wantsDarkStatusBar;
-(void)_invalidateLibraryState;
-(void)setSkimmingInfo:(PXCuratedLibraryAssetCollectionSkimmingInfo *)arg1 ;
-(void)addView:(id)arg1 ;
-(void)_addAssetActionShortcutsIntoArray:(id)arg1 ;
-(long long)zoomLevelTransitionPhase;
-(void)_invalidateChromeVisibility;
-(void)_invalidateCurrentFilterState;
-(BOOL)performKeyCommand:(id)arg1 keyCommandDelegate:(id)arg2 directionalSelectionDelegate:(id)arg3 ;
-(void)_invalidateCurrentDataSource;
-(void)_updateChromeVisibility;
-(void)setScrollingSpeedometer:(PXScrollViewSpeedometer *)arg1 ;
-(void)_handleSpecChange;
-(void)_invalidateAssetCollectionActionManager;
-(BOOL)wantsNavigationBarVisible;
-(void)_performActionForActionIdentifier:(id)arg1 ;
-(void)_handleSelectionManagerChange:(unsigned long long)arg1 ;
-(void)setWantsTabBarVisible:(BOOL)arg1 ;
-(void)setSelectedAssetsTypedCount:(SCD_Struct_PX72)arg1 ;
-(id)visibleAssetCollectionsFromCuratedLibraryAssetsDataSourceManager:(id)arg1 ;
-(void)_invalidateAssetActionManager;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setAspectFitContent:(BOOL)arg1 ;
-(id)mutableChangeObject;
-(void)curatedLibraryAssetsDataSourceManager:(id)arg1 willTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3 ;
-(void)setWantsOptionalChromeVisible:(BOOL)arg1 changeReason:(long long)arg2 ;
-(void)_invalidateDraggedAssetReferences;
-(void)_invalidateZoomablePhotosViewModel;
-(void)_invalidateAllowedActions;
-(Class)cplActionManagerClass;
-(NSObject*<PXFilterState>)currentFilterState;
-(BOOL)aspectFitContent;
-(void)toggleSelectionForIndexPath:(PXSimpleIndexPath)arg1 ;
-(BOOL)wantsOptionalChromeVisible;
-(void)curatedLibraryAssetsDataSourceManager:(id)arg1 didTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3 ;
-(void)_invalidateSelectModeCaption;
-(long long)scrollRegime;
-(BOOL)wantsTabBarVisible;
-(void)_updateCurrentFilterState;
-(BOOL)isSelectingAssetsFromCuratedLibraryAssetsDataSourceManager:(id)arg1 ;
-(CGPoint)lastScrollDirection;
-(void)_setNeedsUpdate;
-(NSArray *)views;
-(id<PXCuratedLibraryViewModelPresenter>)mainPresenter;
-(void)setCurrentFilterState:(NSObject*<PXFilterState>)arg1 ;
-(BOOL)wantsToolbarVisible;
-(void)_updateFilteringTimeoutObserver;
-(void)performChanges:(/*^block*/id)arg1 ;
-(NSArray *)presenters;
-(NSNumber *)userWantsAspectFitContent;
-(void)_performAssetActionType:(id)arg1 ;
-(void)_updateCurrentDataSource;
-(void)_addEnterOneUpShortcutIntoArray:(id)arg1 ;
-(void)_updateLibraryState;
-(void)setAssetActionManager:(PXAssetActionManager *)arg1 ;
-(void)_addActionShortcutsIntoArray:(id)arg1 ;
-(void)_addZoomLevelShortcutsIntoArray:(id)arg1 ;
-(void)_handleIsSelectingChange;
-(id)_indexPathsForAssetCollectionReference:(id)arg1 ;
-(void)_invalidateScrollingSpeedometer;
-(id)uiKeyCommandsUsingDelegate:(id)arg1 ;
-(NSString *)namespaceIdentifier;
-(void)addPresenter:(id)arg1 ;
-(void)_performNavigateToZoomLevel:(long long)arg1 ;
-(void)setAllowedActions:(NSSet *)arg1 ;
-(SCD_Struct_PX72)selectedAssetsTypedCount;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setCplActionManagerClass:(Class)arg1 ;
-(id)initWithAssetsDataSourceManagerConfiguration:(id)arg1 zoomLevel:(long long)arg2 mediaProvider:(id)arg3 specManager:(id)arg4 styleGuide:(id)arg5 ;
@end

