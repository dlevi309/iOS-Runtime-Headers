/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@protocol UIDocumentInteractionControllerDelegate <NSObject>
@optional
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1;
-(CGRect*)documentInteractionControllerRectForPreview:(id)arg1;
-(id)documentInteractionControllerViewForPreview:(id)arg1;
-(void)documentInteractionControllerWillBeginPreview:(id)arg1;
-(void)documentInteractionControllerDidEndPreview:(id)arg1;
-(void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
-(void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
-(void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
-(void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
-(BOOL)documentInteractionController:(id)arg1 canPerformAction:(SEL)arg2;
-(BOOL)documentInteractionController:(id)arg1 performAction:(SEL)arg2;

@end

