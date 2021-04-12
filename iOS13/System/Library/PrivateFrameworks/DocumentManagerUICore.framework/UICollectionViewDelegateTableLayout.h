/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/


@protocol UICollectionViewDelegateTableLayout <UICollectionViewDelegate>
@optional
-(void)collectionView:(id)arg1 tableLayout:(id)arg2 commitEditingStyle:(long long)arg3 forRowAtIndexPath:(id)arg4;
-(BOOL)collectionView:(id)arg1 tableLayout:(id)arg2 shouldIndentWhileEditingRowAtIndexPath:(id)arg3;
-(long long)collectionView:(id)arg1 tableLayout:(id)arg2 indentationLevelForRowAtIndexPath:(id)arg3;
-(long long)collectionView:(id)arg1 tableLayout:(id)arg2 editingStyleForRowAtIndexPath:(id)arg3;
-(id)collectionView:(id)arg1 tableLayout:(id)arg2 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg3;
-(id)collectionView:(id)arg1 tableLayout:(id)arg2 leadingSwipeActionsForRowAtIndexPath:(id)arg3;
-(id)collectionView:(id)arg1 tableLayout:(id)arg2 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg3;
-(id)collectionView:(id)arg1 tableLayout:(id)arg2 trailingSwipeActionsForRowAtIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 tableLayout:(id)arg2 willBeginEditingRowAtIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 tableLayout:(id)arg2 didEndEditingRowAtIndexPath:(id)arg3;
-(double)collectionView:(id)arg1 heightForHeaderViewInTableLayout:(id)arg2;
-(double)collectionView:(id)arg1 heightForFooterViewInTableLayout:(id)arg2;
-(double)collectionView:(id)arg1 tableLayout:(id)arg2 heightForRowAtIndexPath:(id)arg3;
-(double)collectionView:(id)arg1 tableLayout:(id)arg2 estimatedHeightForRowAtIndexPath:(id)arg3;
-(double)collectionView:(id)arg1 tableLayout:(id)arg2 estimatedHeightForHeaderInSection:(long long)arg3;
-(double)collectionView:(id)arg1 tableLayout:(id)arg2 estimatedHeightForFooterInSection:(long long)arg3;
-(double)collectionView:(id)arg1 tableLayout:(id)arg2 heightForHeaderInSection:(long long)arg3;
-(double)collectionView:(id)arg1 tableLayout:(id)arg2 heightForFooterInSection:(long long)arg3;
-(void)collectionView:(id)arg1 tableLayout:(id)arg2 accessoryButtonTappedForRowWithIndexPath:(id)arg3;

@end

