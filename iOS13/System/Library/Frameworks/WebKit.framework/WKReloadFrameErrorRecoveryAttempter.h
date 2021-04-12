/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/_WKErrorRecoveryAttempting.h>

@class NSString;

@interface WKReloadFrameErrorRecoveryAttempter : NSObject <_WKErrorRecoveryAttempting> {

	WeakObjCPtr<WKWebView> _webView;
	RetainPtr<_WKFrameHandle>* _frameHandle;
	String* _urlString;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWebView:(id)arg1 frameHandle:(id)arg2 urlString:(const String*)arg3 ;
-(BOOL)attemptRecovery;
@end

