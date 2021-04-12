/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TransparencyDetailsView.framework/TransparencyDetailsView
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol ADTransparencyViewControllerDelegate;
@class UIActivityIndicatorView, NSString, NSDictionary, UILabel, WKWebView, UINavigationBar;

@interface ADTransparencyViewController : UIViewController <WKNavigationDelegate> {

	UIActivityIndicatorView* activityIndicator;
	id<ADTransparencyViewControllerDelegate> _delegate;
	BOOL _isiPad;
	NSString* _transparencyDetailsUnavailableMessage;
	NSString* _transparencyRendererPayload;
	NSString* _transparencyRendererURL;
	NSString* _transparencyDetails;
	NSDictionary* _transparencyDetailsData;
	UILabel* _errorLabel;
	WKWebView* _myWebView;
	UINavigationBar* _transparencyNavBar;

}

@property (nonatomic,readonly) NSString * transparencyDetailsUnavailableMessage;              //@synthesize transparencyDetailsUnavailableMessage=_transparencyDetailsUnavailableMessage - In the implementation block
@property (nonatomic,readonly) NSString * transparencyRendererPayload;                        //@synthesize transparencyRendererPayload=_transparencyRendererPayload - In the implementation block
@property (nonatomic,readonly) NSString * transparencyRendererURL;                            //@synthesize transparencyRendererURL=_transparencyRendererURL - In the implementation block
@property (nonatomic,copy) NSString * transparencyDetails;                                    //@synthesize transparencyDetails=_transparencyDetails - In the implementation block
@property (nonatomic,retain) NSDictionary * transparencyDetailsData;                          //@synthesize transparencyDetailsData=_transparencyDetailsData - In the implementation block
@property (nonatomic,retain) UILabel * errorLabel;                                            //@synthesize errorLabel=_errorLabel - In the implementation block
@property (nonatomic,retain) WKWebView * myWebView;                                           //@synthesize myWebView=_myWebView - In the implementation block
@property (nonatomic,retain) UINavigationBar * transparencyNavBar;                            //@synthesize transparencyNavBar=_transparencyNavBar - In the implementation block
@property (assign,nonatomic) BOOL isiPad;                                                     //@synthesize isiPad=_isiPad - In the implementation block
@property (nonatomic,retain) id<ADTransparencyViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isiPad;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(id<ADTransparencyViewControllerDelegate>)delegate;
-(void)setDelegate:(id<ADTransparencyViewControllerDelegate>)arg1 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)_commonInit;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)_showErrorMessage:(id)arg1 ;
-(UILabel *)errorLabel;
-(void)setErrorLabel:(UILabel *)arg1 ;
-(void)loadWebView;
-(void)errorDelegate;
-(void)setTransparencyDetails:(NSString *)arg1 ;
-(NSString *)transparencyDetails;
-(NSString *)transparencyDetailsUnavailableMessage;
-(NSString *)transparencyRendererPayload;
-(NSString *)transparencyRendererURL;
-(void)setIsiPad:(BOOL)arg1 ;
-(void)presentViewDelegate;
-(UINavigationBar *)transparencyNavBar;
-(void)_hideErrorMessage;
-(void)setTransparencyNavBar:(UINavigationBar *)arg1 ;
-(void)_closeViewController:(id)arg1 ;
-(void)requestViewWithTransparencyDetailsDictionary:(id)arg1 ;
-(void)requestViewWithTransparencyDetails:(id)arg1 ;
-(id)bundleForTransparencyDetailsView;
-(void)setMyWebView:(WKWebView *)arg1 ;
-(WKWebView *)myWebView;
-(void)_reportTransparencyViewControllerEventWithType:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithTransparencyDetails:(id)arg1 ;
-(NSDictionary *)transparencyDetailsData;
-(void)setTransparencyDetailsData:(NSDictionary *)arg1 ;
@end

