/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextRangeAdjustmentInteractionDelegate <NSObject>
@required
-(CGRect*)endEdge;
-(void)textRangeAdjustmentInteraction:(id)arg1 selectionMoved:(CGPoint)arg2 withTouchPoint:(CGPoint)arg3;
-(CGRect*)startEdge;
-(void)textRangeAdjustmentInteraction:(id)arg1 didBeginAtPoint:(CGPoint)arg2;
-(void)textRangeAdjustmentInteraction:(id)arg1 didEndAtPoint:(CGPoint)arg2;
-(void)textRangeAdjustmentInteractionWasCancelled:(id)arg1;

@end

