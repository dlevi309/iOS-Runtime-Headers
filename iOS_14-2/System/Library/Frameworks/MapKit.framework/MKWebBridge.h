/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/WKScriptMessageHandler.h>

@protocol MKWebBridgeDelegate;
@class NSMutableDictionary, MKWebViewFactoryItem, NSDictionary, NSString;

@interface MKWebBridge : NSObject <WKScriptMessageHandler> {

	NSMutableDictionary* _pendingCallbackHandlers;
	long long _nextCallNumber;
	/*^block*/id _defaultCallbackHandler;
	NSMutableDictionary* _callHandlers;
	MKWebViewFactoryItem* _webViewFactoryItem;
	long long _connectionState;
	id<MKWebBridgeDelegate> _delegate;

}

@property (nonatomic,readonly) MKWebViewFactoryItem * webViewFactoryItem;              //@synthesize webViewFactoryItem=_webViewFactoryItem - In the implementation block
@property (nonatomic,readonly) long long connectionState;                              //@synthesize connectionState=_connectionState - In the implementation block
@property (assign,nonatomic,__weak) id<MKWebBridgeDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * callHandlers;                       //@synthesize callHandlers=_callHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_operatingSystemVersion;
+(id)_operatingSystemName;
+(id)URLByAddingConfiguration:(id)arg1 toURL:(id)arg2 ;
-(void)closeConnection;
-(long long)connectionState;
-(id<MKWebBridgeDelegate>)delegate;
-(void)_initializeConnection;
-(void)setDelegate:(id<MKWebBridgeDelegate>)arg1 ;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(void)_dispatchCall:(id)arg1 ;
-(void)_receiveMessage:(id)arg1 ;
-(void)_postMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_dispatchCallback:(id)arg1 ;
-(void)_consumeCallbackHandlerWithNumber:(id)arg1 result:(id)arg2 errorMessage:(id)arg3 ;
-(NSDictionary *)callHandlers;
-(MKWebViewFactoryItem *)webViewFactoryItem;
-(id)initWithWebViewFactoryItem:(id)arg1 ;
-(void)addCallableMethod:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)callMethod:(id)arg1 arguments:(id)arg2 callbackHandler:(/*^block*/id)arg3 ;
@end

