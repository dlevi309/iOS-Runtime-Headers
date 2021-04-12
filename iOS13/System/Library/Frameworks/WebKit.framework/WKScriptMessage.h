/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class WKWebView, WKFrameInfo, NSString;

@interface WKScriptMessage : NSObject {

	RetainPtr<id>* _body;
	WeakObjCPtr<WKWebView> _webView;
	RetainPtr<WKFrameInfo>* _frameInfo;
	RetainPtr<NSString>* _name;

}

@property (nonatomic,copy,readonly) id body; 
@property (nonatomic,__weak,readonly) WKWebView * webView; 
@property (nonatomic,copy,readonly) WKFrameInfo * frameInfo; 
@property (nonatomic,copy,readonly) NSString * name; 
-(NSString *)name;
-(WKWebView *)webView;
-(id)body;
-(id)_initWithBody:(id)arg1 webView:(id)arg2 frameInfo:(id)arg3 name:(id)arg4 ;
-(WKFrameInfo *)frameInfo;
@end

