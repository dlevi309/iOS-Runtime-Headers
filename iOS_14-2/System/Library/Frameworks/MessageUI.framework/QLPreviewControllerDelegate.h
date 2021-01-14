/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@protocol QLPreviewControllerDelegate <NSObject>
@optional
-(void)previewControllerDidDismiss:(id)arg1;
-(void)previewControllerWillDismiss:(id)arg1;
-(BOOL)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
-(CGRect*)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
-(id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3;
-(id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
-(long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2;
-(void)previewController:(id)arg1 didUpdateContentsOfPreviewItem:(id)arg2;
-(void)previewController:(id)arg1 didSaveEditedCopyOfPreviewItem:(id)arg2 atURL:(id)arg3;

@end

