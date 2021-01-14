/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKWebView, NSString;

@interface _WKInspector : NSObject <WKObject> {

	ObjectStorage<WebKit::WebInspectorProxy> _inspector;

}

@property (nonatomic,readonly) WKWebView * webView; 
@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) BOOL isVisible; 
@property (nonatomic,readonly) BOOL isFront; 
@property (nonatomic,readonly) BOOL isProfilingPage; 
@property (nonatomic,readonly) BOOL isElementSelectionActive; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebView *)webView;
-(BOOL)isConnected;
-(void)detach;
-(void)printErrorToConsole:(id)arg1 ;
-(void)toggleElementSelection;
-(void)close;
-(void)connect;
-(void)show;
-(void)_browserExtensionsDisabled:(id)arg1 ;
-(void)showConsole;
-(void)showResources;
-(BOOL)isFront;
-(void)attach;
-(void)_setDiagnosticLoggingDelegate:(id)arg1 ;
-(BOOL)isVisible;
-(void)hide;
-(id)inspectorWebView;
-(void)showMainResourceForFrame:(id)arg1 ;
-(BOOL)isElementSelectionActive;
-(Object*)_apiObject;
-(void)_browserExtensionsEnabled:(id)arg1 ;
-(void)togglePageProfiling;
-(BOOL)isProfilingPage;
@end

