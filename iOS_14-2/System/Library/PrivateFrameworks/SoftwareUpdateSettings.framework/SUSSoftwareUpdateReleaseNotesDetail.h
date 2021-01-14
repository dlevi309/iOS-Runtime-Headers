/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateSettings.framework/SoftwareUpdateSettings
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class NSString, WKWebView;

@interface SUSSoftwareUpdateReleaseNotesDetail : PSListController <WKNavigationDelegate> {

	NSString* _releaseNotes;
	WKWebView* _webView;

}

@property (nonatomic,retain) WKWebView * webView;                   //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) NSString * releaseNotes;               //@synthesize releaseNotes=_releaseNotes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebView *)webView;
-(id)specifiers;
-(id)init;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)viewDidLoad;
-(void)setReleaseNotes:(NSString *)arg1 ;
-(NSString *)releaseNotes;
-(void)setWebView:(WKWebView *)arg1 ;
@end

