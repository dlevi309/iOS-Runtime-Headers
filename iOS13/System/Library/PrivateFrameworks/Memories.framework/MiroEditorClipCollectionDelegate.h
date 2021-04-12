/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol MiroEditorClipCollectionDelegate <NSObject>
@optional
-(id)clipCollection:(id)arg1 willSetClipProvider:(id)arg2 onCell:(id)arg3 indexPath:(id)arg4;
-(void)clipCollection:(id)arg1 didSetClipOnCell:(id)arg2 indexPath:(id)arg3;
-(void)clipCollection:(id)arg1 didSnapToIndexPath:(id)arg2;
-(void)clipCollection:(id)arg1 didSelectIndexPath:(id)arg2;
-(void)clipCollection:(id)arg1 didBeginDisplayingCell:(id)arg2 indexPath:(id)arg3;
-(void)clipCollection:(id)arg1 didEndDisplayingCell:(id)arg2 indexPath:(id)arg3;
-(void)clipCollection:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
-(void)clipCollectionDidScroll:(id)arg1;
-(void)clipCollection:(id)arg1 willBeginInteractiveMovementForItemAtIndexPath:(id)arg2;
-(void)clipCollection:(id)arg1 didEndInteractiveMovementForItemAtIndexPath:(id)arg2;
-(void)clipCollection:(id)arg1 didCancelInteractiveMovementForItemAtIndexPath:(id)arg2;

@end

