/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol NDOAppleCareWebViewPresenterProtocol;
@class NDOWarranty, NSString, WKWebView, UINavigationBar, UINavigationItem, UIActivityIndicatorView;

@interface NDOAppleCareWebViewController : UIViewController <UINavigationBarDelegate, WKNavigationDelegate> {

	BOOL _initialLoadCompleted;
	int _retriesRemaining;
	id<NDOAppleCareWebViewPresenterProtocol> _presenter;
	NDOWarranty* _warranty;
	NSString* _serialNumber;
	WKWebView* _webview;
	UINavigationBar* _headerView;
	UINavigationItem* _navigationItem;
	UIActivityIndicatorView* _spinner;

}

@property (retain) NDOWarranty * warranty;                                          //@synthesize warranty=_warranty - In the implementation block
@property (retain) NSString * serialNumber;                                         //@synthesize serialNumber=_serialNumber - In the implementation block
@property (__weak) WKWebView * webview;                                             //@synthesize webview=_webview - In the implementation block
@property (__weak) UINavigationBar * headerView;                                    //@synthesize headerView=_headerView - In the implementation block
@property (retain) UINavigationItem * navigationItem;                               //@synthesize navigationItem=_navigationItem - In the implementation block
@property (assign,nonatomic,__weak) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (assign) BOOL initialLoadCompleted;                                       //@synthesize initialLoadCompleted=_initialLoadCompleted - In the implementation block
@property (assign) int retriesRemaining;                                            //@synthesize retriesRemaining=_retriesRemaining - In the implementation block
@property (__weak) id<NDOAppleCareWebViewPresenterProtocol> presenter;              //@synthesize presenter=_presenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)serialNumber;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(UINavigationBar *)headerView;
-(void)setHeaderView:(UINavigationBar *)arg1 ;
-(BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(UINavigationItem *)navigationItem;
-(id<NDOAppleCareWebViewPresenterProtocol>)presenter;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setIsLoading:(BOOL)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)setNavigationItem:(UINavigationItem *)arg1 ;
-(void)cancelTapped:(id)arg1 ;
-(void)setPresenter:(id<NDOAppleCareWebViewPresenterProtocol>)arg1 ;
-(void)setRetriesRemaining:(int)arg1 ;
-(int)retriesRemaining;
-(void)setWarranty:(NDOWarranty *)arg1 ;
-(NDOWarranty *)warranty;
-(id)initWithWarranty:(id)arg1 serialNumber:(id)arg2 ;
-(BOOL)initialLoadCompleted;
-(void)setInitialLoadCompleted:(BOOL)arg1 ;
-(WKWebView *)webview;
-(void)loadWebview:(BOOL)arg1 ;
-(void)setWebview:(WKWebView *)arg1 ;
@end

