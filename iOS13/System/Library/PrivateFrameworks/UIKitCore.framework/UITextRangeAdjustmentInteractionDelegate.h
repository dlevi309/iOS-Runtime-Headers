/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextRangeAdjustmentInteractionDelegate <NSObject>
@required
-(CGRect*)startEdge;
-(CGRect*)endEdge;
-(void)textRangeAdjustmentInteraction:(id)arg1 didBeginAtPoint:(CGPoint)arg2;
-(void)textRangeAdjustmentInteraction:(id)arg1 selectionMoved:(CGPoint)arg2 withTouchPoint:(CGPoint)arg3;
-(void)textRangeAdjustmentInteraction:(id)arg1 didEndAtPoint:(CGPoint)arg2;
-(void)textRangeAdjustmentInteractionWasCancelled:(id)arg1;

@end

