/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIDocumentBrowserViewControllerPrivateDelegate <UIDocumentBrowserViewControllerDelegate>
@optional
-(BOOL)documentBrowser:(id)arg1 shouldShowActivityViewControllerForDocumentURLs:(id)arg2 barButtonItem:(id)arg3 popoverTracker:(id)arg4;
-(BOOL)documentBrowser:(id)arg1 shouldShowActivityViewControllerForDocumentURLs:(id)arg2 popoverTracker:(id)arg3 isContentManaged:(BOOL)arg4 additionalActivities:(id)arg5 activityProxy:(id)arg6;
-(BOOL)documentBrowser:(id)arg1 shouldHandleLocation:(id)arg2;
-(void)willDismissDocumentManager:(id)arg1;
-(void)didDismissDocumentManager:(id)arg1;
-(void)documentManagerWasCancelled:(id)arg1;
-(void)documentBrowser:(id)arg1 didPickImportedURLs:(id)arg2;
-(void)documentBrowser:(id)arg1 commitDocumentURLPreview:(id)arg2;
-(void)documentBrowser:(id)arg1 commitPreviewOfDocumentAtURL:(id)arg2;

@end

