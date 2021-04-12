/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/


#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
@class NSXPCConnection, NSString, NSXPCInterface;

@interface PPXPCClientHelper : NSObject {

	opaque_pthread_mutex_t _connLock;
	NSXPCConnection* _conn;
	NSString* _serviceName;
	NSXPCInterface* _allowedServerInterface;
	NSXPCInterface* _allowedClientInterface;
	id _clientExportedObject;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}
-(id)remoteObjectProxy;
-(void)_locked_establishConnection;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithServiceName:(id)arg1 allowedServerInterface:(id)arg2 allowedClientInterface:(id)arg3 clientExportedObject:(id)arg4 interruptionHandler:(/*^block*/id)arg5 invalidationHandler:(/*^block*/id)arg6 ;
-(void)dealloc;
@end

