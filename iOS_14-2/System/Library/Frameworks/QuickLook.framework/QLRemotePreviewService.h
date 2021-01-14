/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@protocol QLRemotePreviewService <NSObject>
@required
-(void)previewWillAppear:(BOOL)arg1;
-(void)previewDidAppear:(BOOL)arg1;
-(void)previewWillDisappear:(BOOL)arg1;
-(void)previewDidDisappear:(BOOL)arg1;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2;
-(void)previewControllerWantsFullScreen:(BOOL)arg1;
-(void)previewControllerDidUpdateTitle:(id)arg1;
-(void)previewControllerDidUpdatePreferredContentSize:(id)arg1;
-(void)getPrinterProxyWithCompletionHandler:(/*^block*/id)arg1;
-(void)invalidateService;
-(void)setHostViewControllerProxy:(id)arg1;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

