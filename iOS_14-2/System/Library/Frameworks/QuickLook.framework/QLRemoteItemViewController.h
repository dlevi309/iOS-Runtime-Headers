/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLItemViewController.h>
#import <libobjc.A.dylib/QLPrintingProtocol.h>
#import <libobjc.A.dylib/QLCustomItemViewControllerHost.h>
#import <libobjc.A.dylib/QLRemotePopoverTracker.h>

@protocol QLPrintingProtocol, QLRemotePopoverTracker;
@class NSExtension, QLPreviewExtensionHostContext, NSDictionary, NSLayoutConstraint, QLCustomItemViewControllerHostProxy, QLRemotePreviewHostViewController, NSString;

@interface QLRemoteItemViewController : QLItemViewController <QLPrintingProtocol, QLCustomItemViewControllerHost, QLRemotePopoverTracker> {

	NSExtension* _extension;
	QLPreviewExtensionHostContext* _hostContext;
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
-(void)setFullScreen:(BOOL)arg1 ;
-(QLRemotePreviewHostViewController *)remoteViewController;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(id)init;
-(id)printer;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id)fullscreenBackgroundColor;
-(void)getFrameWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRemoteViewController:(QLRemotePreviewHostViewController *)arg1 ;
-(void)dismissQuickLook;
-(void)previewControllerWantsFullScreen:(BOOL)arg1 ;
-(void)previewControllerDidUpdateTitle:(id)arg1 ;
-(void)previewControllerDidUpdatePreferredContentSize:(id)arg1 ;
-(BOOL)presenterShouldHandleLoadingView:(id)arg1 readyToDisplay:(/*^block*/id)arg2 ;
-(void)preloadViewControllerForContext:(id)arg1 ;
-(void)_loadRemoteViewControllerForContext:(id)arg1 ;
-(void)_registerLoadingHandler:(/*^block*/id)arg1 ;
-(void)_performSetUpWithRemoteViewController:(id)arg1 extension:(id)arg2 request:(id)arg3 hostContext:(id)arg4 ;
-(void)_performLoadHandlerIfNeeded;
-(void)presentShareSheetWithPopoverTracker:(id)arg1 customSharedURL:(id)arg2 dismissCompletion:(/*^block*/id)arg3 ;
-(void)forwardMessageToHostOfCustomViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(BOOL)canShowNavBar;
-(BOOL)canSwipeToDismiss;
-(BOOL)canShowToolBar;
-(void)numberOfPagesWithSize:(CGSize)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prepareForDrawingPages:(NSRange)arg1 ofSize:(CGSize)arg2 ;
-(void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)provideCurrentPageAndVisibleRectWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)canClickToToggleFullscreen;
-(void)dealloc;
@end

