/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)close;
-(void)connect;
-(BOOL)isVisible;
-(WKWebView *)webView;
-(void)show;
-(void)hide;
-(void)detach;
-(void)attach;
-(BOOL)isConnected;
-(Object*)_apiObject;
-(void)_setDiagnosticLoggingDelegate:(id)arg1 ;
-(id)inspectorWebView;
-(BOOL)isFront;
-(BOOL)isProfilingPage;
-(BOOL)isElementSelectionActive;
-(void)showConsole;
-(void)showResources;
-(void)showMainResourceForFrame:(id)arg1 ;
-(void)togglePageProfiling;
-(void)toggleElementSelection;
-(void)printErrorToConsole:(id)arg1 ;
@end

