/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIWebView *)webView;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setBody:(NSData *)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSData *)body;
-(id)init;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)uiWebView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
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

