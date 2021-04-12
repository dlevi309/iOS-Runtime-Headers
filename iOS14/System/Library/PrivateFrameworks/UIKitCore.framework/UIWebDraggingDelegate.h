/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIWebDraggingDelegate <NSObject>
@optional
-(BOOL)_webView:(id)arg1 allowsSelectingContentAfterDropForSession:(id)arg2;
-(id)_webView:(id)arg1 adjustedItemProviders:(id)arg2;
-(BOOL)_webView:(id)arg1 performDropWithItemProviders:(id)arg2;
-(void)_webView:(id)arg1 dragInteraction:(id)arg2 willAnimateLiftWithAnimator:(id)arg3 session:(id)arg4;
-(id)_webView:(id)arg1 willPerformDropWithSession:(id)arg2;
-(BOOL)_webView:(id)arg1 performDropWithSession:(id)arg2;
-(id)_webView:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
-(id)_webView:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
-(void)_webView:(id)arg1 sessionDidEnter:(id)arg2;
-(id)_webView:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
-(void)_webView:(id)arg1 sessionDidExit:(id)arg2;
-(void)_webView:(id)arg1 dropWasHandled:(BOOL)arg2 forSession:(id)arg3 itemProviders:(id)arg4;
-(id)_webView:(id)arg1 willUpdateDropProposalToProposal:(id)arg2 forSession:(id)arg3;
-(void)_webView:(id)arg1 dropInteraction:(id)arg2 item:(id)arg3 willAnimateDropWithAnimator:(id)arg4;
-(void)_webView:(id)arg1 dropInteraction:(id)arg2 concludeDrop:(id)arg3;
-(long long)_webView:(id)arg1 dataOwnerForDragSession:(id)arg2;
-(long long)_webView:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3;
-(long long)_webView:(id)arg1 dataOwnerForDropSession:(id)arg2;
-(BOOL)_webView:(id)arg1 dragSessionSupportsSystemDrag:(id)arg2;

@end

