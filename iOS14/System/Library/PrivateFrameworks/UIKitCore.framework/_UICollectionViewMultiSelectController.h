/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithCollectionView:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)_collectionViewDelegate;
-(void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)arg1 ;
-(void)didCancelMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)_extendSelectionToPoint:(CGPoint)arg1 ;
-(void)didEndMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(UICollectionView *)collectionView;
-(BOOL)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg2 withVelocity:(CGPoint)arg3 ;
-(BOOL)_shouldBeginInteractionAtIndexPath:(id)arg1 ;
-(void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(CGPoint)arg2 ;
-(id)selectionEndIndexPath;
-(BOOL)shouldAllowSelectionExtensionAtIndexPath:(id)arg1 ;
-(id)indexPathsBetweenIndexPath:(id)arg1 andIndexPath:(id)arg2 ;
-(BOOL)supportsMultiSelectInteraction:(id)arg1 ;
-(BOOL)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)arg1 ;
-(void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(CGPoint)arg2 ;
-(unsigned long long)axisConstraint;
-(void)setSelectionState:(UIMultiSelectInteractionState *)arg1 ;
-(BOOL)_point:(CGPoint)arg1 liesBeyondFrame:(CGRect)arg2 inDirection:(double)arg3 ;
-(unsigned long long)_hitTestForSystemEditControlAtPoint:(CGPoint)arg1 ;
-(UIMultiSelectInteraction *)multiSelectInteraction;
-(void)uninstallFromCollectionView;
-(BOOL)shouldAllowSelectionExtensionAtPoint:(CGPoint)arg1 ;
-(BOOL)isInMultiSelectMode;
-(id)selectionStartIndexPath;
-(void)selectedIndexPathsChanged:(id)arg1 ;
-(void)updateSelectedIndexPaths:(id)arg1 ;
-(void)_selectIndexPaths:(id)arg1 ;
-(BOOL)_isUsingTableLayoutSPI;
-(BOOL)_shouldBeginInteractionAtPoint:(CGPoint)arg1 ;
-(void)_deselectIndexPaths:(id)arg1 ;
-(UIMultiSelectInteractionState *)selectionState;
-(id)_antecedentIndexPathsForLayoutAttributes:(id)arg1 inDirection:(double)arg2 ;
-(void)setMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 ;
-(void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)dealloc;
-(BOOL)shouldBeginMultiSelectInteraction:(id)arg1 ofType:(long long)arg2 atPoint:(CGPoint)arg3 withVelocity:(CGPoint)arg4 ;
@end

