/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class NSString;

@interface _WKAttributedStringNavigationDelegate : NSObject <WKNavigationDelegate> {

	/*^block*/id _webContentProcessDidTerminate;
	/*^block*/id _decidePolicyForNavigationAction;
	/*^block*/id _didFailProvisionalNavigation;
	/*^block*/id _didFailNavigation;
	/*^block*/id _didFinishNavigation;

}

@property (nonatomic,copy) id webContentProcessDidTerminate;                //@synthesize webContentProcessDidTerminate=_webContentProcessDidTerminate - In the implementation block
@property (nonatomic,copy) id decidePolicyForNavigationAction;              //@synthesize decidePolicyForNavigationAction=_decidePolicyForNavigationAction - In the implementation block
@property (nonatomic,copy) id didFailProvisionalNavigation;                 //@synthesize didFailProvisionalNavigation=_didFailProvisionalNavigation - In the implementation block
@property (nonatomic,copy) id didFailNavigation;                            //@synthesize didFailNavigation=_didFailNavigation - In the implementation block
@property (nonatomic,copy) id didFinishNavigation;                          //@synthesize didFinishNavigation=_didFinishNavigation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
-(id)webContentProcessDidTerminate;
-(void)setWebContentProcessDidTerminate:(id)arg1 ;
-(id)decidePolicyForNavigationAction;
-(void)setDecidePolicyForNavigationAction:(id)arg1 ;
-(id)didFailProvisionalNavigation;
-(void)setDidFailProvisionalNavigation:(id)arg1 ;
-(id)didFailNavigation;
-(void)setDidFailNavigation:(id)arg1 ;
-(id)didFinishNavigation;
-(void)setDidFinishNavigation:(id)arg1 ;
@end

