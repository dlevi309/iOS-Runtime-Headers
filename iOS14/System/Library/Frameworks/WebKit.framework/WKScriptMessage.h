/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class WKWebView, WKFrameInfo, NSString, WKContentWorld;

@interface WKScriptMessage : NSObject {

	RetainPtr<id>* _body;
	WeakObjCPtr<WKWebView> _webView;
	RetainPtr<WKFrameInfo>* _frameInfo;
	RetainPtr<NSString>* _name;
	RetainPtr<WKContentWorld>* _world;

}

@property (nonatomic,copy,readonly) id body; 
@property (nonatomic,__weak,readonly) WKWebView * webView; 
@property (nonatomic,copy,readonly) WKFrameInfo * frameInfo; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) WKContentWorld * world; 
-(WKWebView *)webView;
-(id)body;
-(WKContentWorld *)world;
-(id)_initWithBody:(id)arg1 webView:(id)arg2 frameInfo:(id)arg3 name:(id)arg4 world:(id)arg5 ;
-(NSString *)name;
-(WKFrameInfo *)frameInfo;
@end

