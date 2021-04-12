/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, NSObject, NSDictionary;

@interface SSErrorHandlerSession : NSObject {

	SSXPCConnection* _controlConnection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSDictionary* _properties;
	long long _sessionID;

}
-(id)init;
-(void)retry;
-(id)valueForProperty:(id)arg1 ;
-(void)_setControlConnection:(id)arg1 ;
-(void)_setSessionID:(long long)arg1 ;
-(void)_setErrorProperties:(id)arg1 ;
-(void)performDefaultHandling;
-(void)redirectToURL:(id)arg1 ;
-(void)dealloc;
@end

