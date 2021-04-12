/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/

#import <ATFoundation/ATMessageLinkProxyConnection.h>

@protocol ATMessageLinkProxyConnection <NSObject>
@required
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeRequestHandlerForDataClass:(id)arg1 completion:(/*^block*/id)arg2;
-(void)connectWithCompletion:(/*^block*/id)arg1;

@end

#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <ATFoundation/ATMessageLinkObserver.h>
#import <ATFoundation/ATMessageLinkRequestHandler.h>

@class NSXPCConnection, ATMessageLink, NSString;

@interface ATMessageLinkProxyConnection : NSObject <ATMessageLinkProxyConnection, NSStreamDelegate, ATMessageLinkObserver, ATMessageLinkRequestHandler> {

	NSXPCConnection* _connection;
	ATMessageLink* _messageLink;

}

@property (nonatomic,retain) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) ATMessageLink * messageLink;              //@synthesize messageLink=_messageLink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(ATMessageLink *)messageLink;
-(void)stop;
-(void)messageLinkWasOpened:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(void)messageLinkWasInitialized:(id)arg1 ;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeRequestHandlerForDataClass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)messageLinkWasClosed:(id)arg1 ;
-(void)setMessageLink:(ATMessageLink *)arg1 ;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithMessageLink:(id)arg1 connection:(id)arg2 ;
@end

