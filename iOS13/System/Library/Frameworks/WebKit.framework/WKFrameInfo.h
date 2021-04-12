/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _WKFrameHandle, NSURLRequest, WKSecurityOrigin, WKWebView, NSString;

@interface WKFrameInfo : NSObject <WKObject, NSCopying> {

	ObjectStorage<API::FrameInfo> _frameInfo;

}

@property (nonatomic,readonly) _WKFrameHandle * _handle; 
@property (getter=isMainFrame,nonatomic,readonly) BOOL mainFrame; 
@property (nonatomic,copy,readonly) NSURLRequest * request; 
@property (nonatomic,readonly) WKSecurityOrigin * securityOrigin; 
@property (nonatomic,__weak,readonly) WKWebView * webView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_WKFrameHandle *)_handle;
-(NSURLRequest *)request;
-(WKWebView *)webView;
-(BOOL)isMainFrame;
-(Object*)_apiObject;
-(WKSecurityOrigin *)securityOrigin;
@end

