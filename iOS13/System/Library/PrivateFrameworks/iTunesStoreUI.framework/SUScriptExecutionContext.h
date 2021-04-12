/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>
#import <libobjc.A.dylib/SUWebViewDelegate.h>

@class ISStoreURLOperation, SUWebView, NSString, NSNumber;

@interface SUScriptExecutionContext : NSObject <ISStoreURLOperationDelegate, SUWebViewDelegate> {

	ISStoreURLOperation* _loadOperation;
	SUWebView* _webView;

}

@property (nonatomic,readonly) id windowScriptObject; 
@property (nonatomic,readonly) OpaqueJSContextRef globalExecutionContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
-(void)dealloc;
-(id)_webView;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)callWebScriptMethod:(id)arg1 withArguments:(id)arg2 ;
-(id)windowScriptObject;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(OpaqueJSContextRef)globalExecutionContext;
-(BOOL)evaluateData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(void)evaluateScriptAtURL:(id)arg1 ;
-(void)_cancelLoadOperation;
-(id)_newLoadOperation;
-(void)evaluateScriptWithURLBagKey:(id)arg1 ;
-(id)parentViewControllerForWebView:(id)arg1 ;
@end

