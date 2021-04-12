/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol AKIDPHandlerDelegate;
@class AKURLRequestApprover, AKServerRequestConfiguration, NSString;

@interface AKIDPHandler : NSObject <WKNavigationDelegate> {

	AKURLRequestApprover* _redirectApprover;
	AKServerRequestConfiguration* _configuration;
	id<AKIDPHandlerDelegate> _delegate;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                                                 //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) AKServerRequestConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<AKIDPHandlerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AKIDPHandlerDelegate>)delegate;
-(void)setDelegate:(id<AKIDPHandlerDelegate>)arg1 ;
-(void)cancel;
-(AKServerRequestConfiguration *)configuration;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithConfiguration:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_completeFlowWithError:(id)arg1 ;
-(void)_completeWithACSPostRequestFromWebView:(id)arg1 ;
-(id)_samlJavaScriptQuery;
-(id)_safeACSDictionaryFromResult:(id)arg1 ;
@end

