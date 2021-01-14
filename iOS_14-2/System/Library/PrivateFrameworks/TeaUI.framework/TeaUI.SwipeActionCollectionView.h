/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UICollectionView.h>
#import <libobjc.A.dylib/TSSwipeActionCoordinating.h>

@class UIPanGestureRecognizer;

@interface TeaUI.SwipeActionCollectionView : UICollectionView <TSSwipeActionCoordinating> {

	 swipeActionManager;
	 dependencyCleanupBlocks;
	 coordinatingResetBlocks;
	 coordinatingCancelBlocks;
	 updateGroup;
	 isBottomRubberBanding;

}

@property (readonly,nonatomic) UIPanGestureRecognizer * coordinatingSwipeActionPanGestureRecognizer; 
@property (readonly,nonatomic) BOOL coordinatingSwipeActionShouldCancel; 
@property (assign,nonatomic) BOOL allowsSelection; 
@property (assign,nonatomic) CGPoint contentOffset; 
-(void)coordinatingResetSwipeAction;
-(UIPanGestureRecognizer *)coordinatingSwipeActionPanGestureRecognizer;
-(BOOL)coordinatingSwipeActionShouldCancel;
-(void)reloadData;
-(void)insertSections:(id)arg1 ;
-(void)reloadSections:(id)arg1 ;
-(void)deleteSections:(id)arg1 ;
-(void)insertItemsAtIndexPaths:(id)arg1 ;
-(void)reloadItemsAtIndexPaths:(id)arg1 ;
-(void)deleteItemsAtIndexPaths:(id)arg1 ;
-(void)moveSection:(long long)arg1 toSection:(long long)arg2 ;
-(void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)handlePanGestureWithGestureRecognizer:(id)arg1 ;
-(void)handleFromCoordinatingGestureWithGestureRecognizer:(id)arg1 ;
-(void)didMoveToWindow;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(BOOL)allowsSelection;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setAllowsSelection:(BOOL)arg1 ;
-(void)dealloc;
@end

