/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_SFWebAppViewControllerDelegate.h>

@class _SFWebAppViewController, _UIAsyncInvocation, LoadingViewController, NSTimer, UIWebClip, NSString;

@interface WebAppViewController : UIViewController <_SFWebAppViewControllerDelegate> {

	_SFWebAppViewController* _contentViewController;
	_UIAsyncInvocation* _cancelViewServiceRequest;
	BOOL _hasShownLoadingViewController;
	BOOL _hasCustomScheme;
	LoadingViewController* _loadingViewController;
	long long _orientation;
	NSTimer* _hideSnapshotTimer;
	UIWebClip* _webClip;

}

@property (nonatomic,readonly) UIWebClip * webClip;                 //@synthesize webClip=_webClip - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIWebClip *)webClip;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForStatusBarHidden;
-(void)_connectToService;
-(void)webAppViewController:(id)arg1 didChangeLoadingState:(BOOL)arg2 ;
-(void)webAppViewControllerDidFinishInitialLoad:(id)arg1 ;
-(void)webAppViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2 ;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(void)dealloc;
-(id)initWithWebClip:(id)arg1 ;
-(void)timeLimitForLoadCompletionExpired;
-(void)_cancelHideSnapshotTimer;
-(void)_setUpContentViewController:(id)arg1 ;
-(void)hideLoadingView;
-(void)_removeRemoteView;
-(void)openURLWithCustomSchemeIfNeeded;
@end

