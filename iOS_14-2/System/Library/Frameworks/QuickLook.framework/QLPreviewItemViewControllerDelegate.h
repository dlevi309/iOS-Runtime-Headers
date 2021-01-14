/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@protocol QLPreviewItemViewControllerDelegate <NSObject>
@required
-(void)previewItemViewControllerWantsUpdateOverlay:(id)arg1 animated:(BOOL)arg2;
-(id)loadingTextForPreviewItemViewController:(id)arg1;
-(void)previewItemViewController:(id)arg1 didEnableEditMode:(BOOL)arg2;
-(void)previewItemViewControllerWantsUpdateKeyCommands:(id)arg1;
-(void)previewItemViewControllerWantsToDismissQuickLook:(id)arg1;
-(void)previewItemViewControllerWantsToShowNoInternetConnectivityAlert:(id)arg1;
-(void)previewItemViewControllerDidEditCopyOfPreviewItem:(id)arg1 editedCopy:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)previewItemViewController:(id)arg1 hasUnsavedEdits:(BOOL)arg2;
-(void)previewItemViewController:(id)arg1 wantsFullScreen:(BOOL)arg2;
-(void)previewItemViewController:(id)arg1 wantsToOpenURL:(id)arg2;
-(void)previewItemViewControllerWantsToShowShareSheet:(id)arg1;
-(void)previewItemViewControllerWantsUpdatePrinter:(id)arg1;
-(void)expandContentOfPreviewItemViewController:(id)arg1 unarchivedItemsURL:(id)arg2;
-(void)previewItemViewController:(id)arg1 didFailWithError:(id)arg2;
-(void)previewItemViewControllerDidUpdateTitle:(id)arg1;
-(void)previewItemViewControllerDidUpdatePreferredContentSize:(id)arg1;
-(void)previewItemViewController:(id)arg1 wantsToShowShareSheetWithPopoverTracker:(id)arg2 customSharedURL:(id)arg3 dismissCompletion:(/*^block*/id)arg4;
-(void)previewItemViewController:(id)arg1 wantsToForwardMessageToHost:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)previewItemViewControllerDidChangeCurrentPreviewController:(id)arg1;
-(long long)dragDataOwnerForPreviewItemViewController:(id)arg1;

@end

