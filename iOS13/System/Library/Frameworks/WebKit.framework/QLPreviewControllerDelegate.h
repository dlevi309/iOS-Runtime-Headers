/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


@protocol QLPreviewControllerDelegate <NSObject>
@optional
-(void)previewControllerWillDismiss:(id)arg1;
-(void)previewControllerDidDismiss:(id)arg1;
-(BOOL)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
-(CGRect*)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
-(id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3;
-(id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
-(long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2;
-(void)previewController:(id)arg1 didUpdateContentsOfPreviewItem:(id)arg2;
-(void)previewController:(id)arg1 didSaveEditedCopyOfPreviewItem:(id)arg2 atURL:(id)arg3;

@end

