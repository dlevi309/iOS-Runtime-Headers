/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/


@protocol DOCHostDocumentBrowserViewControllerInterface
@required
-(void)_didTriggerCustomActionWithIdentifier:(id)arg1 onItems:(id)arg2;
-(void)_didTriggerBarButtonWithUUID:(id)arg1;
-(void)_didPickItems:(id)arg1;
-(void)_commitDocumentURLPreview:(id)arg1;
-(void)_didRequestDocumentCreationWithHandler:(/*^block*/id)arg1;
-(void)_didImportDocumentAtURL:(id)arg1 toDestinationItem:(id)arg2;
-(void)_failedToImportDocumentAtURL:(id)arg1 error:(id)arg2;
-(void)_updateRemoteBarButtonFrames:(id)arg1 forUUID:(id)arg2;
-(void)_presentActivityViewControllerForItems:(id)arg1 withPopoverTracker:(id)arg2 isContentManaged:(BOOL)arg3 additionalActivities:(id)arg4 activityProxy:(id)arg5;

@end

