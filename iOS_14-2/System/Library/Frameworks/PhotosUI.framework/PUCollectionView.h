/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PUCollectionViewReorderDelegate, PUCollectionViewSelectionDelegate;
@class UILongPressGestureRecognizer, NSIndexPath, UIView, PXUIAutoScroller, _UIDragSnappingFeedbackGenerator, NSString;

@interface PUCollectionView : UICollectionView <UIGestureRecognizerDelegate> {

	UILongPressGestureRecognizer* _dragGestureRecognizer;
	NSIndexPath* _dragSourceIndexPath;
	NSIndexPath* _dragTargetIndexPath;
	UIView* _draggedView;
	CGPoint _draggedViewCenterOffset;
	PXUIAutoScroller* _autoScroller;
	BOOL _shouldWorkaround34630932;
	id<PUCollectionViewReorderDelegate> _reorderDelegate;
	id<PUCollectionViewSelectionDelegate> _selectionDelegate;
	_UIDragSnappingFeedbackGenerator* __feedbackDragBehavior;

}

@property (nonatomic,readonly) _UIDragSnappingFeedbackGenerator * _feedbackDragBehavior;                  //@synthesize _feedbackDragBehavior=__feedbackDragBehavior - In the implementation block
@property (assign,nonatomic,__weak) id<PUCollectionViewReorderDelegate> reorderDelegate;                  //@synthesize reorderDelegate=_reorderDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PUCollectionViewSelectionDelegate> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_reuseKeyForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 ;
-(void)_applyAutomaticAdjustedContentOffset:(CGPoint)arg1 ;
-(id)indexPathsForSelectedItems;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)reloadData;
-(void)adjustedContentInsetDidChange;
-(void)insertItemsAtIndexPaths:(id)arg1 ;
-(void)deleteItemsAtIndexPaths:(id)arg1 ;
-(void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)setReorderDelegate:(id<PUCollectionViewReorderDelegate>)arg1 ;
-(void)didScrollToInitialPosition;
-(void)_handleDrag:(id)arg1 ;
-(id)_reorderableLayout;
-(void)_updateDragUsingIndexPathUpdateBlock:(/*^block*/id)arg1 ;
-(id<PUCollectionViewReorderDelegate>)reorderDelegate;
-(void)visiblyInsertItemAtIndexPath:(id)arg1 modelUpdate:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<PUCollectionViewSelectionDelegate>)selectionDelegate;
-(void)setSelectionDelegate:(id<PUCollectionViewSelectionDelegate>)arg1 ;
-(_UIDragSnappingFeedbackGenerator *)_feedbackDragBehavior;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)dealloc;
@end

