/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@protocol QLLocalPreviewingController <NSObject>
@optional
-(void)previewWillAppear:(BOOL)arg1;
-(void)previewDidAppear:(BOOL)arg1;
-(void)previewWillDisappear:(BOOL)arg1;
-(void)previewDidDisappear:(BOOL)arg1;
-(void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2;
-(id)printer;
-(BOOL)canToggleFullScreen;
-(void)previewIsAppearingWithProgress:(double)arg1;
-(void)previewWillFinishAppearing;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(BOOL)canShowNavBar;
-(BOOL)canSwipeToDismiss;
-(void)prepareForActionSheetPresentation;
-(BOOL)canShowToolBar;
-(BOOL)canClickToToggleFullscreen;

@required
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

