/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKInlineReplyInteractionDelegate <NSObject>
@required
-(void)inlineReplyControllerRequestsDismissal:(id)arg1 presentKeyboard:(BOOL)arg2;
-(void)inlineReplyController:(id)arg1 visibleGUIDsDidChange:(id)arg2;
-(CGRect*)inlineReplyController:(id)arg1 gradientFrameWithInsets:(UIEdgeInsets)arg2;
-(void)inlineReplyControllerWillAnimateIn:(id)arg1;
-(void)inlineReplyControllerWillAnimateOut:(id)arg1;
-(void)inlineReplyControllerIsAnimatingIn:(id)arg1;
-(void)inlineReplyControllerIsAnimatingOut:(id)arg1;
-(void)inlineReplyControllerDidAnimateIn:(id)arg1;
-(void)inlineReplyControllerDidAnimateOut:(id)arg1;
-(id)inlineReplyControllerUpdatedFrameMap:(id)arg1;
-(BOOL)inlineReplyControllerBecomeFirstResponder:(id)arg1;
-(void)inlineReplyControllerRequestsReloadInputViews:(id)arg1;
-(void)inlineReplyController:(id)arg1 setTargetFirstResponder:(long long)arg2;
-(long long)inlineReplyControllerTargetFirstResponder:(id)arg1;
-(id)inlineReplyControllerChatInputController:(id)arg1;
-(BOOL)inlineReplyController:(id)arg1 containerWidth:(double*)arg2 offset:(double*)arg3;
-(void)inlineReplyControllerDidSendComposition:(id)arg1;
-(void)inlineReplyController:(id)arg1 setIsShowingPreview:(BOOL)arg2;

@end

