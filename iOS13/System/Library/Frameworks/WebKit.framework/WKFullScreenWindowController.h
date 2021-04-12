/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class WKWebView, UIView, NSString;

@interface WKFullScreenWindowController : NSObject <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate> {

	RetainPtr<WKFullScreenPlaceholderView>* _webViewPlaceholder;
	long long _fullScreenState;
	WKWebViewState _viewState;
	RetainPtr<UIWindow>* _window;
	RetainPtr<UIViewController>* _rootViewController;
	RefPtr<WebKit::GenericCallback<>, WTF::DumbPtrTraits<WebKit::GenericCallback<> > >* _repaintCallback;
	RetainPtr<UIViewController>* _viewControllerForPresentation;
	RetainPtr<WKFullScreenViewController>* _fullscreenViewController;
	RetainPtr<UISwipeGestureRecognizer>* _startDismissGestureRecognizer;
	RetainPtr<UIPanGestureRecognizer>* _interactivePanDismissGestureRecognizer;
	RetainPtr<UIPinchGestureRecognizer>* _interactivePinchDismissGestureRecognizer;
	RetainPtr<WKFullScreenInteractiveTransition>* _interactiveDismissTransitionCoordinator;
	CGRect _initialFrame;
	CGRect _finalFrame;
	RetainPtr<NSString>* _EVOrganizationName;
	BOOL _EVOrganizationNameIsValid;
	BOOL _inInteractiveDismiss;
	BOOL _exitRequested;
	RetainPtr<id>* _notificationListener;
	WKWebView* __webView;

}

@property (assign,nonatomic,__weak) WKWebView * _webView;                       //@synthesize _webView=__webView - In the implementation block
@property (nonatomic,retain,readonly) UIView * webViewPlaceholder; 
@property (nonatomic,readonly) BOOL isFullScreen; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(WebFullScreenManagerProxy*)_manager;
-(WKWebView *)_webView;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(BOOL)_isSecure;
-(void)videoControlsManagerDidChange;
-(BOOL)isFullScreen;
-(void)webViewDidRemoveFromSuperviewWhileInFullscreen;
-(UIView *)webViewPlaceholder;
-(id)initWithWebView:(id)arg1 ;
-(void)enterFullScreen;
-(void)exitFullScreen;
-(void)beganEnterFullScreenWithInitialFrame:(CGRect)arg1 finalFrame:(CGRect)arg2 ;
-(void)beganExitFullScreenWithInitialFrame:(CGRect)arg1 finalFrame:(CGRect)arg2 ;
-(void)set_webView:(WKWebView *)arg1 ;
-(void)placeholderWillMoveToSuperview:(id)arg1 ;
-(void)_invalidateEVOrganizationName;
-(void)requestExitFullScreen;
-(void)_updateLocationInfo;
-(void)_startToDismissFullscreenChanged:(id)arg1 ;
-(void)_interactiveDismissChanged:(id)arg1 ;
-(void)_interactivePinchDismissChanged:(id)arg1 ;
-(void)_exitFullscreenImmediately;
-(void)_dismissFullscreenViewController;
-(void)_completedExitFullScreen;
-(SecTrustRef)_serverTrust;
-(id)_EVOrganizationName;
@end

