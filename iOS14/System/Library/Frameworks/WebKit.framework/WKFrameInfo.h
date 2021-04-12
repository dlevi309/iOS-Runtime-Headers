/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _WKFrameHandle, NSURLRequest, WKSecurityOrigin, WKWebView;

@interface WKFrameInfo : NSObject <WKObject, NSCopying> {

	ObjectStorage<API::FrameInfo> _frameInfo;

}

@property (nonatomic,copy,readonly) NSString * _sf_titleForJavaScriptDialog; 
@property (nonatomic,copy,readonly) _WKFrameHandle * _handle; 
@property (nonatomic,copy,readonly) _WKFrameHandle * _parentFrameHandle; 
@property (getter=isMainFrame,nonatomic,readonly) BOOL mainFrame; 
@property (nonatomic,copy,readonly) NSURLRequest * request; 
@property (nonatomic,readonly) WKSecurityOrigin * securityOrigin; 
@property (nonatomic,__weak,readonly) WKWebView * webView; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)_sf_titleForJavaScriptDialog;
-(WKWebView *)webView;
-(_WKFrameHandle *)_handle;
-(NSURLRequest *)request;
-(NSString *)description;
-(BOOL)isMainFrame;
-(Object*)_apiObject;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(WKSecurityOrigin *)securityOrigin;
-(_WKFrameHandle *)_parentFrameHandle;
@end

