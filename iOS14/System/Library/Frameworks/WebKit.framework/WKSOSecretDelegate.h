/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/WKUIDelegate.h>

@class NSString;

@interface WKSOSecretDelegate : NSObject <WKNavigationDelegate, WKUIDelegate> {

	WeakPtr<WebKit::PopUpSOAuthorizationSession, WTF::EmptyCounter>* _session;
	BOOL _isFirstNavigation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(PopUpSOAuthorizationSession*)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webViewDidClose:(id)arg1 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
@end

