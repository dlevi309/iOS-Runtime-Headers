/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@protocol QLLocalPreviewingController <NSObject>
@optional
-(id)printer;
-(BOOL)canSwipeToDismiss;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(BOOL)canShowNavBar;
-(void)previewWillAppear:(BOOL)arg1;
-(void)previewDidAppear:(BOOL)arg1;
-(void)previewWillDisappear:(BOOL)arg1;
-(void)previewDidDisappear:(BOOL)arg1;
-(void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2;
-(BOOL)canClickToToggleFullscreen;
-(BOOL)canToggleFullScreen;
-(void)previewIsAppearingWithProgress:(double)arg1;
-(void)previewWillFinishAppearing;
-(BOOL)canShowToolBar;
-(void)prepareForActionSheetPresentation;

@required
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

