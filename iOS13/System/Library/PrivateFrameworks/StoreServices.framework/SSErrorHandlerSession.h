/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)valueForProperty:(id)arg1 ;
-(void)retry;
-(void)_setSessionID:(long long)arg1 ;
-(void)_setControlConnection:(id)arg1 ;
-(void)_setErrorProperties:(id)arg1 ;
-(void)performDefaultHandling;
-(void)redirectToURL:(id)arg1 ;
@end

