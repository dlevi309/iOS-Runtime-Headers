/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>
#import <libobjc.A.dylib/RUIObjectModelDelegate.h>

@class CNFRegController, CNFRegLoadingView, NSTimer, RUILoader, NSMutableArray, UIWebView, NSString;

@interface CNFRegServerWebViewController : UIViewController <UIWebViewDelegate, RUIObjectModelDelegate> {

	CNFRegController* _regController;
	CNFRegLoadingView* _loadingView;
	NSTimer* _timeoutTimer;
	RUILoader* _loader;
	NSMutableArray* _objectModels;
	struct {
		unsigned isLoading : 1;
		unsigned isLoaded : 1;
		unsigned wantsWifi : 1;
		unsigned modifiedWiFi : 1;
		unsigned automaticKeyboardWasDisabled : 1;
		unsigned checkedLogState : 1;
		unsigned shouldLog : 1;
		unsigned timedOut;
	}  _webControllerFlags;
	UIWebView* _webView;

}

@property (nonatomic,retain) UIWebView * webView;                           //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) CNFRegController * regController;              //@synthesize regController=_regController - In the implementation block
@property (nonatomic,readonly) BOOL isLoaded; 
@property (nonatomic,readonly) BOOL isLoading; 
@property (nonatomic,readonly) BOOL timedOut; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)isLoaded;
-(void)loadView;
-(UIWebView *)webView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)applicationWillSuspend;
-(void)viewDidUnload;
-(void)cancelButtonPressed:(id)arg1 ;
-(void)setWebView:(UIWebView *)arg1 ;
-(BOOL)isLoading;
-(BOOL)_shouldLog;
-(BOOL)timedOut;
-(void)_handleTimeout;
-(void)showSpinner;
-(void)objectModelDidChange:(id)arg1 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)loadURL:(id)arg1 ;
-(void)hideSpinner;
-(id)logName;
-(void)_popObjectModelAnimated:(BOOL)arg1 ;
-(CNFRegController *)regController;
-(void)setRegController:(CNFRegController *)arg1 ;
-(id)initWithRegController:(id)arg1 ;
-(void)startRequiringWifi;
-(void)stopRequiringWifi;
-(void)_stopTimeout;
-(id)overrideURLForURL:(id)arg1 ;
-(BOOL)shouldSetHeadersForRequest:(id)arg1 ;
-(void)setHeadersForRequest:(id)arg1 ;
-(BOOL)canSendURLRequest:(id)arg1 ;
-(void)_cleanupLoader;
-(void)receivedStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(void)_timeoutFired:(id)arg1 ;
-(void)setWantsWifi:(BOOL)arg1 ;
-(void)_startTimeoutWithDuration:(double)arg1 ;
@end

