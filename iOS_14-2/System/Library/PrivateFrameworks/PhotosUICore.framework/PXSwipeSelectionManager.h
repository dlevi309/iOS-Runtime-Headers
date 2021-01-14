/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXAutoScrollerDelegate.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <UIKit/UIMultiSelectInteractionDelegate.h>

@protocol PXSwipeSelectionManagerDelegate;
@class UIScrollView, PXSectionedSelectionManager, UIMultiSelectInteraction, PXIndexPathSet, PXUIAutoScroller, NSString;

@interface PXSwipeSelectionManager : NSObject <PXAutoScrollerDelegate, PXSectionedDataSourceManagerObserver, UIMultiSelectInteractionDelegate> {

	SCD_Struct_PX38 _needsUpdateFlags;
	struct {
		BOOL respondsToItemIndexPathAtLocation;
		BOOL respondsToItemIndexPathClosestLeadingLocation;
		BOOL respondsToItemIndexPathClosestAboveLocation;
		BOOL respondsToShouldSelectItemAtIndexPath;
		BOOL respondsToShouldBeginSelectionAtLocation;
		BOOL respondsToShouldAutomaticallyTransitionToMultiSelectModeAtPoint;
		BOOL respondsToAutomaticallyTransitionToMultiSelectMode;
		BOOL respondsToIndexPathSetFromIndexPathToIndexPath;
		BOOL respondsToDidAutoScroll;
	}  _delegateFlags;
	id<PXSwipeSelectionManagerDelegate> _delegate;
	unsigned long long _state;
	UIScrollView* _scrollView;
	PXSectionedSelectionManager* _selectionManager;
	UIMultiSelectInteraction* _multiSelectInteraction;
	unsigned long long __currentDataSourceIdentifier;
	PXIndexPathSet* __selectedIndexPathsBeforeSwipe;
	id __pausingChangesToken;
	PXUIAutoScroller* __autoScroller;
	PXSimpleIndexPath __startingIndexPath;
	PXSimpleIndexPath __currentIndexPath;

}

@property (assign,setter=_setState:,nonatomic) unsigned long long state;                                                             //@synthesize state=_state - In the implementation block
@property (assign,setter=_setCurrentDataSourceIdentifier:,nonatomic) unsigned long long _currentDataSourceIdentifier;                //@synthesize _currentDataSourceIdentifier=__currentDataSourceIdentifier - In the implementation block
@property (assign,setter=_setStartingIndexPath:,nonatomic) PXSimpleIndexPath _startingIndexPath;                                     //@synthesize _startingIndexPath=__startingIndexPath - In the implementation block
@property (assign,setter=_setCurrentIndexPath:,nonatomic) PXSimpleIndexPath _currentIndexPath;                                       //@synthesize _currentIndexPath=__currentIndexPath - In the implementation block
@property (setter=_setSelectedIndexPathsBeforeSwipe:,nonatomic,retain) PXIndexPathSet * _selectedIndexPathsBeforeSwipe;              //@synthesize _selectedIndexPathsBeforeSwipe=__selectedIndexPathsBeforeSwipe - In the implementation block
@property (setter=_setPausingChangesToken:,nonatomic,retain) id _pausingChangesToken;                                                //@synthesize _pausingChangesToken=__pausingChangesToken - In the implementation block
@property (nonatomic,readonly) PXUIAutoScroller * _autoScroller;                                                                     //@synthesize _autoScroller=__autoScroller - In the implementation block
@property (assign,nonatomic,__weak) id<PXSwipeSelectionManagerDelegate> delegate;                                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                                                            //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager;                                                       //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,readonly) UIMultiSelectInteraction * multiSelectInteraction;                                                    //@synthesize multiSelectInteraction=_multiSelectInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXSectionedSelectionManager *)selectionManager;
-(void)_invalidateSelectedIndexPaths;
-(void)_setState:(unsigned long long)arg1 ;
-(BOOL)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg2 ;
-(id)init;
-(id<PXSwipeSelectionManagerDelegate>)delegate;
-(PXSimpleIndexPath)_itemIndexPathClosestAboveLocation:(CGPoint)arg1 ;
-(void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)arg1 ;
-(void)didCancelMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)_setSelectedIndexPathsBeforeSwipe:(id)arg1 ;
-(BOOL)_isSelecting;
-(void)didEndMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(BOOL)shouldBeginMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 withVelocity:(CGPoint)arg3 ;
-(void)_updateSelectionWithHitIndexPath:(PXSimpleIndexPath)arg1 leadingClosestIndexPath:(PXSimpleIndexPath)arg2 aboveClosestIndexPath:(PXSimpleIndexPath)arg3 ;
-(BOOL)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg2 withVelocity:(CGPoint)arg3 ;
-(void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(CGPoint)arg2 ;
-(void)_endSelection;
-(void)autoScroller:(id)arg1 didAutoscrollWithTimestamp:(double)arg2 ;
-(BOOL)supportsMultiSelectInteraction:(id)arg1 ;
-(void)setDelegate:(id<PXSwipeSelectionManagerDelegate>)arg1 ;
-(unsigned long long)_currentDataSourceIdentifier;
-(id)_pausingChangesToken;
-(void)_setPausingChangesToken:(id)arg1 ;
-(void)_setCurrentIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)_updateSelectedIndexPaths;
-(id)initWithSelectionManager:(id)arg1 scrollView:(id)arg2 ;
-(void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(CGPoint)arg2 ;
-(PXSimpleIndexPath)_itemIndexPathClosestLeadingLocation:(CGPoint)arg1 ;
-(PXSimpleIndexPath)_startingIndexPath;
-(id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1 ;
-(void)_beginSelectionFromIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)_updateWithDataSource:(id)arg1 changeHistory:(id)arg2 ;
-(UIMultiSelectInteraction *)multiSelectInteraction;
-(unsigned long long)state;
-(BOOL)shouldAllowSelectionExtensionAtPoint:(CGPoint)arg1 ;
-(PXSimpleIndexPath)_currentIndexPath;
-(PXSimpleIndexPath)_itemIndexPathAtLocation:(CGPoint)arg1 ;
-(BOOL)isInMultiSelectMode;
-(PXUIAutoScroller *)_autoScroller;
-(BOOL)_shouldBeginMultiSelectAtLocation:(CGPoint)arg1 ;
-(UIScrollView *)scrollView;
-(PXIndexPathSet *)_selectedIndexPathsBeforeSwipe;
-(void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)_setStartingIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)_setCurrentDataSourceIdentifier:(unsigned long long)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

