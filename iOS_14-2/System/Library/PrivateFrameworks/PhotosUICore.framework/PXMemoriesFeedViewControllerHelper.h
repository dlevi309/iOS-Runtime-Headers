/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXSectionedLayoutEngineDelegate.h>
#import <libobjc.A.dylib/PXMemoriesFeedScrollFilterDelegate.h>
#import <libobjc.A.dylib/PXTilingControllerScrollDelegate.h>
#import <libobjc.A.dylib/PXTilingControllerTransitionDelegate.h>
#import <libobjc.A.dylib/PXMemoriesFeedTilingLayoutDelegate.h>

@protocol PXMemoriesFeedViewControllerHelperDelegate, PXViewControllerEventTracker;
@class PXTilingController, PXMemoriesFeedDataSourceManager, PXMemoriesSpecManager, PXSectionedSelectionManager, PHPhotoLibrary, PXScrollViewController, PXExtendedTraitCollection, PXSectionedObjectReference, NSString, NSDate, PXSectionedLayoutEngine, PXMemoriesFeedScrollFilter, PXMemoriesSpec, PXMemoriesFeedTransitionAnimationCoordinator, PXMemoriesFeedTilingLayout;

@interface PXMemoriesFeedViewControllerHelper : PXObservable <PXSectionedDataSourceManagerObserver, PXSectionedLayoutEngineDelegate, PXMemoriesFeedScrollFilterDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXMemoriesFeedTilingLayoutDelegate> {

	SCD_Struct_PX38 _needsToUpdate;
	SCD_Struct_PX24 _delegateRespondsTo;
	id _refreshResetNotification;
	BOOL _hasAppeared;
	BOOL _hasKickedOffBatchGeneration;
	BOOL __requestingNewMemories;
	PXTilingController* _tilingController;
	PXMemoriesFeedDataSourceManager* _dataSourceManager;
	PXMemoriesSpecManager* _specManager;
	PXSectionedSelectionManager* _selectionManager;
	PHPhotoLibrary* _photoLibrary;
	PXScrollViewController* _scrollViewController;
	PXExtendedTraitCollection* _traitCollection;
	id<PXMemoriesFeedViewControllerHelperDelegate> _delegate;
	PXSectionedObjectReference* _highlightedMemoryReference;
	PXSectionedObjectReference* _activatedMemoryReference;
	PXSectionedObjectReference* _lastActionPresentationMemoryReference;
	NSString* _scrollTargetMemoryUUID;
	id<PXViewControllerEventTracker> _eventTracker;
	NSDate* __lastUserMemoryGenerationRequestDate;
	PXSectionedObjectReference* __memoryReferenceToScrollToVisible;
	PXSectionedObjectReference* _anchorMemoryReference;
	PXSectionedLayoutEngine* __layoutEngine;
	PXMemoriesFeedScrollFilter* __scrollFilter;
	PXMemoriesSpec* __spec;
	PXMemoriesFeedTransitionAnimationCoordinator* __transitionAnimationCoordinator;
	long long __refreshRetryCount;
	/*^block*/id __newMemoriesRequestCompletion;
	CGPoint _anchorMemoryOrigin;

}

@property (nonatomic,readonly) id<PXViewControllerEventTracker> eventTracker;                                                                          //@synthesize eventTracker=_eventTracker - In the implementation block
@property (setter=_setLastUserMemoryGenerationRequestDate:,nonatomic,retain) NSDate * _lastUserMemoryGenerationRequestDate;                            //@synthesize _lastUserMemoryGenerationRequestDate=__lastUserMemoryGenerationRequestDate - In the implementation block
@property (setter=_setMemoryReferenceToScrollToVisible:,nonatomic,retain) PXSectionedObjectReference * _memoryReferenceToScrollToVisible;              //@synthesize _memoryReferenceToScrollToVisible=__memoryReferenceToScrollToVisible - In the implementation block
@property (setter=_setAnchorMemoryReference:,nonatomic,retain) PXSectionedObjectReference * anchorMemoryReference;                                     //@synthesize anchorMemoryReference=_anchorMemoryReference - In the implementation block
@property (assign,setter=_setAnchorMemoryOrigin:,nonatomic) CGPoint anchorMemoryOrigin;                                                                //@synthesize anchorMemoryOrigin=_anchorMemoryOrigin - In the implementation block
@property (nonatomic,readonly) PXSectionedLayoutEngine * _layoutEngine;                                                                                //@synthesize _layoutEngine=__layoutEngine - In the implementation block
@property (nonatomic,readonly) PXMemoriesFeedScrollFilter * _scrollFilter;                                                                             //@synthesize _scrollFilter=__scrollFilter - In the implementation block
@property (setter=_setSpec:,nonatomic,retain) PXMemoriesSpec * _spec;                                                                                  //@synthesize _spec=__spec - In the implementation block
@property (nonatomic,readonly) PXMemoriesFeedTransitionAnimationCoordinator * _transitionAnimationCoordinator;                                         //@synthesize _transitionAnimationCoordinator=__transitionAnimationCoordinator - In the implementation block
@property (assign,setter=_setRefreshRetryCount:,nonatomic) long long _refreshRetryCount;                                                               //@synthesize _refreshRetryCount=__refreshRetryCount - In the implementation block
@property (assign,setter=_setRequestingNewMemories:,getter=_isRequestingNewMemories,nonatomic) BOOL _requestingNewMemories;                            //@synthesize _requestingNewMemories=__requestingNewMemories - In the implementation block
@property (setter=_setNewMemoriesRequestCompletion:,nonatomic,copy) id _newMemoriesRequestCompletion;                                                  //@synthesize _newMemoriesRequestCompletion=__newMemoriesRequestCompletion - In the implementation block
@property (nonatomic,readonly) PXTilingController * tilingController;                                                                                  //@synthesize tilingController=_tilingController - In the implementation block
@property (nonatomic,readonly) PXMemoriesFeedDataSourceManager * dataSourceManager;                                                                    //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) PXMemoriesSpecManager * specManager;                                                                                    //@synthesize specManager=_specManager - In the implementation block
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager;                                                                         //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                                                                                          //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) PXScrollViewController * scrollViewController;                                                                          //@synthesize scrollViewController=_scrollViewController - In the implementation block
@property (nonatomic,readonly) PXExtendedTraitCollection * traitCollection;                                                                            //@synthesize traitCollection=_traitCollection - In the implementation block
@property (assign,nonatomic,__weak) id<PXMemoriesFeedViewControllerHelperDelegate> delegate;                                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PXMemoriesFeedTilingLayout * currentLayout; 
@property (nonatomic,readonly) PXMemoriesFeedTilingLayout * targetLayout; 
@property (nonatomic,retain) PXSectionedObjectReference * highlightedMemoryReference;                                                                  //@synthesize highlightedMemoryReference=_highlightedMemoryReference - In the implementation block
@property (nonatomic,retain) PXSectionedObjectReference * activatedMemoryReference;                                                                    //@synthesize activatedMemoryReference=_activatedMemoryReference - In the implementation block
@property (nonatomic,retain) PXSectionedObjectReference * lastActionPresentationMemoryReference;                                                       //@synthesize lastActionPresentationMemoryReference=_lastActionPresentationMemoryReference - In the implementation block
@property (setter=setScrollTargetMemoryUUID:,nonatomic,retain) NSString * scrollTargetMemoryUUID;                                                      //@synthesize scrollTargetMemoryUUID=_scrollTargetMemoryUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXSectionedSelectionManager *)selectionManager;
-(id<PXViewControllerEventTracker>)eventTracker;
-(PXMemoriesSpecManager *)specManager;
-(PXMemoriesSpec *)_spec;
-(PXExtendedTraitCollection *)traitCollection;
-(void)_configureLayout:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(PXScrollViewController *)scrollViewController;
-(id<PXMemoriesFeedViewControllerHelperDelegate>)delegate;
-(PXMemoriesFeedTilingLayout *)currentLayout;
-(void)_updateIfNeeded;
-(void)_updateLayoutEngineIfNeeded;
-(CGPoint)anchorMemoryOrigin;
-(PXSectionedObjectReference *)anchorMemoryReference;
-(void)_setAnchorMemoryReference:(id)arg1 ;
-(void)_setAnchorMemoryOrigin:(CGPoint)arg1 ;
-(PXTilingController *)tilingController;
-(void)_setSpec:(id)arg1 ;
-(PXMemoriesFeedTilingLayout *)targetLayout;
-(void)setDelegate:(id<PXMemoriesFeedViewControllerHelperDelegate>)arg1 ;
-(PXMemoriesFeedDataSourceManager *)dataSourceManager;
-(void)_handleDataSourceChange;
-(id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1 ;
-(BOOL)_needsUpdate;
-(void)tilingController:(id)arg1 prepareForChange:(id)arg2 ;
-(id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2 ;
-(id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2 ;
-(CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2 ;
-(CGPoint)tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(CGPoint)arg3 ;
-(id)mutableChangeObject;
-(CGRect)memoriesFeedTilingLayout:(id)arg1 contentsRectForItemAtIndexPath:(PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3 ;
-(id)memoriesFeedTilingLayout:(id)arg1 titleFontNameForItemAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(void)scrollFilterShouldRequestAdditionalContent:(id)arg1 ;
-(void)layoutEngineDidUpdateLayoutSnapshot:(id)arg1 ;
-(void)layoutEngine:(id)arg1 willGenerateLayoutWithGenerator:(id)arg2 forSection:(unsigned long long)arg3 ;
-(id)initWithScrollViewController:(id)arg1 photoLibrary:(id)arg2 traitCollection:(id)arg3 tilingControllerConfigurationBlock:(/*^block*/id)arg4 ;
-(void)_handleChangeFromDataSource:(id)arg1 toDataSource:(id)arg2 withChangeDetails:(id)arg3 ;
-(id)initWithScrollViewController:(id)arg1 photoLibrary:(id)arg2 traitCollection:(id)arg3 memoriesStyle:(unsigned long long)arg4 tilingControllerConfigurationBlock:(/*^block*/id)arg5 ;
-(BOOL)canRequestNewMemoriesForReason:(unsigned long long)arg1 ;
-(BOOL)canRequestNewMemories;
-(void)requestNewMemoriesForReason:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestNewMemoriesWithCompletion:(/*^block*/id)arg1 ;
-(void)didChangeTilingControllerLayout;
-(id)memoryObjectReferenceInScrollViewAtPoint:(CGPoint)arg1 ;
-(id)memoryInfoInScrollViewAtPoint:(CGPoint)arg1 ;
-(id)memoryInfoForMemoryObjectReference:(id)arg1 ;
-(PXSimpleIndexPath)indexPathForMemoryInScrollViewAtPoint:(CGPoint)arg1 ;
-(id)memoryInfoAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathForMemoryObjectReference:(id)arg1 ;
-(void)setActivatedMemoryReference:(PXSectionedObjectReference *)arg1 ;
-(void)setLastActionPresentationMemoryReference:(PXSectionedObjectReference *)arg1 ;
-(void)setHighlightedMemoryReference:(PXSectionedObjectReference *)arg1 ;
-(void)feedViewControllerWillLayoutSubviews;
-(void)invalidateMetrics;
-(void)feedViewControllerDidAppear:(id)arg1 shouldUpdateNotifications:(BOOL)arg2 ;
-(void)feedViewControllerDidDisappear:(id)arg1 ;
-(void)_startRefreshForReason:(unsigned long long)arg1 ;
-(void)_handleRefreshCompletionWithResultInformation:(id)arg1 reason:(unsigned long long)arg2 error:(id)arg3 ;
-(void)_configureMetrics:(id)arg1 ;
-(void)saveAnchorMemory;
-(void)_handleFinishedRequestingNewMemoriesWithSuccess:(BOOL)arg1 reason:(unsigned long long)arg2 error:(id)arg3 ;
-(id)_memoryReferenceInsertedOnChangeToDataSource:(id)arg1 withChangeDetails:(id)arg2 ;
-(void)_enumerateInsertedItemsInChangeDetails:(id)arg1 withDataSource:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_invalidateLayoutEngine;
-(void)scrollMemoryReferenceToVisible:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateSelectedIndexPathsInLayout;
-(void)_updateSelectedIndexPathsInLayout:(id)arg1 ;
-(void)_updateHighlightedIndexPathInLayout;
-(void)_updateHighlightedIndexPathInLayout:(id)arg1 ;
-(void)_handleTraitCollectionChange:(unsigned long long)arg1 ;
-(void)_handleNewLayoutSnapshot:(id)arg1 ;
-(void)setScrollTargetMemoryUUID:(NSString *)arg1 ;
-(void)_scrollToTargetMemoryUUIDWhenReady:(id)arg1 ;
-(PXSectionedObjectReference *)highlightedMemoryReference;
-(PXSectionedObjectReference *)activatedMemoryReference;
-(PXSectionedObjectReference *)lastActionPresentationMemoryReference;
-(NSString *)scrollTargetMemoryUUID;
-(PXMemoriesFeedScrollFilter *)_scrollFilter;
-(NSDate *)_lastUserMemoryGenerationRequestDate;
-(void)_setLastUserMemoryGenerationRequestDate:(id)arg1 ;
-(PXSectionedObjectReference *)_memoryReferenceToScrollToVisible;
-(void)_setMemoryReferenceToScrollToVisible:(id)arg1 ;
-(PXMemoriesFeedTransitionAnimationCoordinator *)_transitionAnimationCoordinator;
-(long long)_refreshRetryCount;
-(void)_setRefreshRetryCount:(long long)arg1 ;
-(BOOL)_isRequestingNewMemories;
-(void)_setRequestingNewMemories:(BOOL)arg1 ;
-(id)_newMemoriesRequestCompletion;
-(void)_setNewMemoriesRequestCompletion:(/*^block*/id)arg1 ;
-(PXSectionedLayoutEngine *)_layoutEngine;
-(void)prepare;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

