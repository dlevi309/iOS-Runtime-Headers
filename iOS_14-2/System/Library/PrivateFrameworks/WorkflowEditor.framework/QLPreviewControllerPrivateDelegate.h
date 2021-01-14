/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@protocol QLPreviewControllerPrivateDelegate <QLPreviewControllerDelegate>
@optional
-(BOOL)previewController:(id)arg1 canEditItem:(id)arg2;
-(BOOL)previewController:(id)arg1 shouldSaveEditedItem:(id)arg2;
-(id)excludedActivityTypesForPreviewController:(id)arg1;
-(BOOL)shouldAppendDefaultDismissActionsForPreviewController:(id)arg1;
-(BOOL)shouldPresentDismissActionsWithoutEditedItemsForPreviewController:(id)arg1;
-(id)dismissActionsForPreviewController:(id)arg1;
-(id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 uncroppedSourceFrame:(CGRect*)arg3;
-(BOOL)previewController:(id)arg1 shouldAllowKeyCommandWithIdentifier:(unsigned long long)arg2;
-(BOOL)previewController:(id)arg1 canShareItem:(id)arg2;
-(id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 uncroppedSourceFrame:(CGRect*)arg3 realSize:(CGSize*)arg4;
-(void)previewController:(id)arg1 updatedContentsURL:(id)arg2 forEditedItem:(id)arg3;
-(id)additionalActivitiesTypesForPreviewController:(id)arg1;
-(void)previewController:(id)arg1 customActionButtonWasTappedForPreviewItem:(id)arg2;
-(id)previewController:(id)arg1 customActionButtonTittleForPreviewItem:(id)arg2;
-(void)previewController:(id)arg1 willSaveEditedItem:(id)arg2;
-(void)previewController:(id)arg1 didFailToSaveEditedItem:(id)arg2 withError:(id)arg3;
-(void)previewController:(id)arg1 willTransitionToState:(long long)arg2;
-(void)previewController:(id)arg1 didTransitionToState:(long long)arg2;
-(void)previewController:(id)arg1 willLoadPreviewItemAtIndex:(unsigned long long)arg2;
-(void)previewController:(id)arg1 didLoadPreviewItemAtIndex:(unsigned long long)arg2 withError:(id)arg3;
-(void)previewController:(id)arg1 willPresentPreviewItemAtIndex:(unsigned long long)arg2;
-(void)previewController:(id)arg1 didPresentPreviewItemAtIndex:(unsigned long long)arg2;
-(void)previewController:(id)arg1 didDismissPreviewItemAtIndex:(unsigned long long)arg2;
-(void)previewController:(id)arg1 didFinishPlayingPreviewItem:(id)arg2;

@end
