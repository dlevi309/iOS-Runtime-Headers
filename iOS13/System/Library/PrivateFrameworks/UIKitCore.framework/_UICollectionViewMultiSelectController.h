/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIMultiSelectInteractionDelegate.h>

@class UICollectionView, UIMultiSelectInteraction, UIMultiSelectInteractionState, NSString;

@interface _UICollectionViewMultiSelectController : NSObject <UIMultiSelectInteractionDelegate> {

	unsigned long long _computedAxisConstraint;
	UICollectionView* _collectionView;
	UIMultiSelectInteraction* _multiSelectInteraction;
	UIMultiSelectInteractionState* _selectionState;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIMultiSelectInteraction * multiSelectInteraction;              //@synthesize multiSelectInteraction=_multiSelectInteraction - In the implementation block
@property (nonatomic,retain) UIMultiSelectInteractionState * selectionState;                 //@synthesize selectionState=_selectionState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UICollectionView *)collectionView;
-(id)initWithCollectionView:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)selectedIndexPathsChanged:(id)arg1 ;
-(BOOL)supportsMultiSelectInteraction:(id)arg1 ;
-(BOOL)isInMultiSelectMode;
-(void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)arg1 ;
-(BOOL)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg2 withVelocity:(CGPoint)arg3 ;
-(BOOL)shouldBeginMultiSelectInteraction:(id)arg1 ofType:(long long)arg2 atPoint:(CGPoint)arg3 withVelocity:(CGPoint)arg4 ;
-(void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(CGPoint)arg2 ;
-(BOOL)shouldAllowSelectionExtensionAtPoint:(CGPoint)arg1 ;
-(void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(CGPoint)arg2 ;
-(void)didEndMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(BOOL)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)arg1 ;
-(void)didCancelMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)uninstallFromCollectionView;
-(unsigned long long)axisConstraint;
-(BOOL)_point:(CGPoint)arg1 liesBeyondFrame:(CGRect)arg2 inDirection:(double)arg3 ;
-(id)_antecedentIndexPathsForLayoutAttributes:(id)arg1 inDirection:(double)arg2 ;
-(UIMultiSelectInteractionState *)selectionState;
-(id)indexPathsBetweenIndexPath:(id)arg1 andIndexPath:(id)arg2 ;
-(void)updateSelectedIndexPaths:(id)arg1 ;
-(void)_selectIndexPaths:(id)arg1 ;
-(void)_deselectIndexPaths:(id)arg1 ;
-(void)setSelectionState:(UIMultiSelectInteractionState *)arg1 ;
-(BOOL)_isUsingTableViewLayout;
-(id)_collectionViewDelegate;
-(BOOL)_shouldBeginInteractionAtPoint:(CGPoint)arg1 ;
-(BOOL)_isPointInsideEditControl:(CGPoint)arg1 ;
-(void)_extendSelectionToPoint:(CGPoint)arg1 ;
-(id)selectionStartIndexPath;
-(id)selectionEndIndexPath;
-(UIMultiSelectInteraction *)multiSelectInteraction;
-(void)setMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 ;
@end

