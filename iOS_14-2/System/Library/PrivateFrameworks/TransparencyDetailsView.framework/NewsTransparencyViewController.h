/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TransparencyDetailsView.framework/TransparencyDetailsView
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol NewsTransparencyViewControllerDelegate;
@class UIActivityIndicatorView, UINavigationItem, UIBarButtonItem, UIViewController, NSString, NSDictionary, UILabel, WKWebView, UINavigationBar;

@interface NewsTransparencyViewController : UIViewController <WKNavigationDelegate> {

	UIActivityIndicatorView* activityIndicator;
	UINavigationItem* navBarItem;
	UIBarButtonItem* leftButton;
	UIViewController* debugViewController;
	id<NewsTransparencyViewControllerDelegate> _delegate;
	BOOL _isiPad;
	BOOL _isClientTodayWidget;
	NSString* _transparencyDetailsUnavailableMessage;
	NSString* _transparencyRendererPayload;
	NSString* _transparencyRendererURL;
	NSDictionary* _transparencyDetailsDictionary;
	UILabel* _errorLabel;
	WKWebView* _myNewsPrivacyWebView;
	UINavigationBar* _transparencyNavBar;

}

@property (nonatomic,readonly) NSString * transparencyDetailsUnavailableMessage;               //@synthesize transparencyDetailsUnavailableMessage=_transparencyDetailsUnavailableMessage - In the implementation block
@property (nonatomic,readonly) NSString * transparencyRendererPayload;                         //@synthesize transparencyRendererPayload=_transparencyRendererPayload - In the implementation block
@property (nonatomic,readonly) NSString * transparencyRendererURL;                             //@synthesize transparencyRendererURL=_transparencyRendererURL - In the implementation block
@property (nonatomic,retain) NSDictionary * transparencyDetailsDictionary;                     //@synthesize transparencyDetailsDictionary=_transparencyDetailsDictionary - In the implementation block
@property (nonatomic,retain) UILabel * errorLabel;                                             //@synthesize errorLabel=_errorLabel - In the implementation block
@property (nonatomic,retain) WKWebView * myNewsPrivacyWebView;                                 //@synthesize myNewsPrivacyWebView=_myNewsPrivacyWebView - In the implementation block
@property (nonatomic,retain) UINavigationBar * transparencyNavBar;                             //@synthesize transparencyNavBar=_transparencyNavBar - In the implementation block
@property (assign,nonatomic) BOOL isiPad;                                                      //@synthesize isiPad=_isiPad - In the implementation block
@property (assign,nonatomic) BOOL isClientTodayWidget;                                         //@synthesize isClientTodayWidget=_isClientTodayWidget - In the implementation block
@property (nonatomic,retain) id<NewsTransparencyViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)isiPad;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(id<NewsTransparencyViewControllerDelegate>)delegate;
-(BOOL)isDeviceLocked;
-(void)setDelegate:(id<NewsTransparencyViewControllerDelegate>)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)_commonInit;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(NSDictionary *)transparencyDetailsDictionary;
-(id)initWithNewsTransparencyDetailsDictionary:(id)arg1 ;
-(void)_showErrorMessage:(id)arg1 ;
-(UILabel *)errorLabel;
-(void)setErrorLabel:(UILabel *)arg1 ;
-(void)loadWebView;
-(void)errorDelegate;
-(NSString *)transparencyDetailsUnavailableMessage;
-(NSString *)transparencyRendererPayload;
-(NSString *)transparencyRendererURL;
-(void)setIsiPad:(BOOL)arg1 ;
-(void)presentViewDelegate;
-(UINavigationBar *)transparencyNavBar;
-(void)_hideErrorMessage;
-(void)setTransparencyNavBar:(UINavigationBar *)arg1 ;
-(void)_closeViewController:(id)arg1 ;
-(void)setTransparencyDetailsDictionary:(NSDictionary *)arg1 ;
-(void)setIsClientTodayWidget:(BOOL)arg1 ;
-(void)requestUserPassCodeUnlockUIWithBlock:(/*^block*/id)arg1 ;
-(void)setMyNewsPrivacyWebView:(WKWebView *)arg1 ;
-(WKWebView *)myNewsPrivacyWebView;
-(BOOL)isClientTodayWidget;
-(void)_openDebugView:(id)arg1 ;
-(void)displayDebugButtonWaitingIndicator;
-(void)debugDetailsViewControllerReady:(id)arg1 ;
@end

