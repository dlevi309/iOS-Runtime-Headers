/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, UIActivityIndicatorView, NSURL, NSData, NSString;

@interface TPSCloudCallingWebViewController : UIViewController <UIWebViewDelegate> {

	long long _type;
	UIWebView* _webView;
	/*^block*/id _completionBlock;
	UIActivityIndicatorView* _activityIndicator;
	NSURL* _url;
	NSData* _body;

}

@property (assign,nonatomic) long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,retain,readonly) UIWebView * webView;                             //@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) id completionBlock;                                         //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) NSURL * url;                                              //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSData * body;                                            //@synthesize body=_body - In the implementation block
@property (getter=isPresentingURL,nonatomic,readonly) BOOL presentingURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSURL *)url;
-(id)initWithType:(long long)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)loadView;
-(UIWebView *)webView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)uiWebView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3 ;
-(void)_cancelButtonClicked:(id)arg1 ;
-(void)cancelWebView;
-(BOOL)isPresentingURL;
-(void)loadWebViewWithSpinner:(/*^block*/id)arg1 ;
-(void)loadURL:(id)arg1 body:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)doWebViewTimedOut;
-(void)doProvisioningCanceled;
-(void)doProvisioningFailed;
-(void)setupControllerInWebFrame:(id)arg1 ;
-(void)doProvisioningDone;
@end

