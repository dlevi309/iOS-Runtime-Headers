/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKChatInputControllerDelegate <NSObject>
@required
-(void)chatInputSentComposition:(id)arg1;
-(id)viewControllerForChatInputModalPresentation;
-(id)viewForDragAndChatInputDropTarget;
-(void)chatInputControllerRequestInputViewFocusFromFullscreen:(id)arg1;
-(void)sendSticker:(id)arg1;
-(void)sendSticker:(id)arg1 withDragTarget:(id)arg2;
-(id)dragControllerTranscriptDelegate;
-(BOOL)keyboardIsVisibleForChatInputController:(id)arg1;
-(void)chatInputWillUpdateInputViewShowingBrowser;
-(void)chatInputDidUpdateInputViewShowingBrowser:(BOOL)arg1 entryFieldCollapsed:(BOOL)arg2 animated:(BOOL)arg3;
-(void)chatInputController:(id)arg1 presentShelfModal:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)chatInputDidUpdateWithNewInputViewController:(id)arg1;
-(void)setLocalUserIsComposing:(BOOL)arg1 withPluginBundleID:(id)arg2 typingIndicatorData:(id)arg3;
-(void)chatInputDidSelectPhotoPicker;
-(void)chatInputWillChangeHeightForCompactPresentation:(double)arg1;
-(void)chatInputDidChangeSize;
-(void)chatInputControllerDidShowHandwriting:(id)arg1;
-(void)chatInputControllerWillHideHandwriting:(id)arg1;
-(void)chatInputControllerWillPresentModalBrowserViewController:(id)arg1;
-(void)chatInputControllerDidPresentModalBrowserViewController:(id)arg1;
-(void)chatInputControllerWillDismissModalBrowserViewController:(id)arg1;
-(void)chatInputControllerDidDismissModalBrowserViewController:(id)arg1;
-(void)chatInputControllerWillTransitionExpanded:(id)arg1;
-(void)chatInputControllerDidTransitionExpanded:(id)arg1;
-(void)chatInputControllerWillTransitionCollapsed:(id)arg1;
-(void)chatInputControllerDidTransitionCollapsed:(id)arg1;
-(void)chatInputControllerDidDismissCompactBrowserViewController:(id)arg1;
-(void)chatInputControllerWillDismissCompactBrowserViewController:(id)arg1;
-(void)sendCurrentLocation;
-(void)chatInputControllerWillSelectFunCamera:(id)arg1;
-(void)chatInputControllerDidSelectFunCamera:(id)arg1;
-(BOOL)chatInputControllerShouldShowHandwriting:(id)arg1;

@end

