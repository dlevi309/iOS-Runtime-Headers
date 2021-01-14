/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>
#import <libobjc.A.dylib/SUWebViewDelegate.h>

@class ISStoreURLOperation, SUWebView, NSNumber, NSString;

@interface SUScriptExecutionContext : NSObject <ISStoreURLOperationDelegate, SUWebViewDelegate> {

	ISStoreURLOperation* _loadOperation;
	SUWebView* _webView;

}

@property (nonatomic,readonly) id windowScriptObject; 
@property (nonatomic,readonly) OpaqueJSContextRef globalExecutionContext; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_webView;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)callWebScriptMethod:(id)arg1 withArguments:(id)arg2 ;
-(void)dealloc;
-(id)windowScriptObject;
-(OpaqueJSContextRef)globalExecutionContext;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(BOOL)evaluateData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(void)evaluateScriptAtURL:(id)arg1 ;
-(void)_cancelLoadOperation;
-(id)_newLoadOperation;
-(void)evaluateScriptWithURLBagKey:(id)arg1 ;
-(id)parentViewControllerForWebView:(id)arg1 ;
@end

