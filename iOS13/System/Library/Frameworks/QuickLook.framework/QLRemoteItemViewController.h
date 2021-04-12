/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLItemViewController.h>
#import <libobjc.A.dylib/QLPrintingProtocol.h>
#import <libobjc.A.dylib/QLCustomItemViewControllerHost.h>
#import <libobjc.A.dylib/QLRemotePopoverTracker.h>

@protocol QLPrintingProtocol, QLRemotePopoverTracker;
@class NSExtension, QLRemotePreviewHostContext, NSDictionary, NSLayoutConstraint, QLCustomItemViewControllerHostProxy, QLRemotePreviewHostViewController, NSString;

@interface QLRemoteItemViewController : QLItemViewController <QLPrintingProtocol, QLCustomItemViewControllerHost, QLRemotePopoverTracker> {

	NSExtension* _extension;
	QLRemotePreviewHostContext* _hostContext;
	NSDictionary* _hostConfiguration;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	id<QLPrintingProtocol> _printer;
	id<QLRemotePopoverTracker> _popoverTracker;
	QLCustomItemViewControllerHostProxy* _hostViewControllerProxy;
	BOOL _isVisible;
	BOOL _isAppearing;
	BOOL _fullScreen;
	BOOL _needsSetup;
	BOOL _readyToLoad;
	/*^block*/id _readyToDisplay;
	/*^block*/id _loadHandler;
	QLRemotePreviewHostViewController* _remoteViewController;

}

@property (nonatomic,retain) QLRemotePreviewHostViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(QLRemotePreviewHostViewController *)remoteViewController;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id)printer;
-(void)setRemoteViewController:(QLRemotePreviewHostViewController *)arg1 ;
-(void)setFullScreen:(BOOL)arg1 ;
-(BOOL)canSwipeToDismiss;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(id)fullscreenBackgroundColor;
-(void)dismissQuickLook;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)canShowNavBar;
-(BOOL)presenterShouldHandleLoadingView:(id)arg1 readyToDisplay:(/*^block*/id)arg2 ;
-(void)preloadViewControllerForContext:(id)arg1 ;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)numberOfPagesWithSize:(CGSize)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prepareForDrawingPages:(NSRange)arg1 ofSize:(CGSize)arg2 ;
-(void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)provideCurrentPageAndVisibleRectWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)canClickToToggleFullscreen;
-(BOOL)canShowToolBar;
-(void)getFrameWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)presentShareSheetWithPopoverTracker:(id)arg1 customSharedURL:(id)arg2 dismissCompletion:(/*^block*/id)arg3 ;
-(void)forwardMessageToHostOfCustomViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)previewControllerWantsFullScreen:(BOOL)arg1 ;
-(void)previewControllerDidUpdateTitle:(id)arg1 ;
-(void)previewControllerDidUpdatePreferredContentSize:(id)arg1 ;
-(void)_loadRemoteViewControllerForContext:(id)arg1 ;
-(void)_registerLoadingHandler:(/*^block*/id)arg1 ;
-(void)_performSetUpWithRemoteViewController:(id)arg1 extension:(id)arg2 request:(id)arg3 hostContext:(id)arg4 ;
-(void)_performLoadHandlerIfNeeded;
@end

