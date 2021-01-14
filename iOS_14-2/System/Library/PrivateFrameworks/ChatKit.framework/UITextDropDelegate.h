/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol UITextDropDelegate <NSObject>
@optional
-(unsigned long long)textDroppableView:(id)arg1 willBecomeEditableForDrop:(id)arg2;
-(id)textDroppableView:(id)arg1 proposalForDrop:(id)arg2;
-(void)textDroppableView:(id)arg1 dropSessionDidUpdate:(id)arg2;
-(void)textDroppableView:(id)arg1 dropSessionDidEnter:(id)arg2;
-(void)textDroppableView:(id)arg1 dropSessionDidExit:(id)arg2;
-(void)textDroppableView:(id)arg1 willPerformDrop:(id)arg2;
-(void)textDroppableView:(id)arg1 dropSessionDidEnd:(id)arg2;
-(id)textDroppableView:(id)arg1 previewForDroppingAllItemsWithDefault:(id)arg2;

@end

