/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PXSwipeSelectionManagerDelegate <NSObject>
@optional
-(PXSimpleIndexPath*)swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(CGPoint)arg2;
-(PXSimpleIndexPath*)swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(CGPoint)arg2;
-(BOOL)swipeSelectionManager:(id)arg1 shouldSelectItemAtIndexPath:(PXSimpleIndexPath)arg2;
-(BOOL)swipeSelectionManager:(id)arg1 shouldBeginSelectionAtLocation:(CGPoint)arg2;
-(BOOL)swipeSelectionManager:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg2;
-(void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1;
-(id)swipeSelectionManager:(id)arg1 indexPathSetFromIndexPath:(PXSimpleIndexPath)arg2 toIndexPath:(PXSimpleIndexPath)arg3;
-(void)swipeSelectionManagerDidAutoScroll:(id)arg1;

@required
-(BOOL)swipeSelectionManagerIsInMultiSelectMode:(id)arg1;
-(PXSimpleIndexPath*)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(CGPoint)arg2;

@end

