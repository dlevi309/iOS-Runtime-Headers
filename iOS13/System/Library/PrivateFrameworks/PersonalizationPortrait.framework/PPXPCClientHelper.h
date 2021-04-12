/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/


#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
@class NSXPCConnection, NSString, NSXPCInterface;

@interface PPXPCClientHelper : NSObject {

	opaque_pthread_mutex_t _connLock;
	NSXPCConnection* _conn;
	NSString* _serviceName;
	NSXPCInterface* _whitelistedServerInterface;
	NSXPCInterface* _whitelistedClientInterface;
	id _clientExportedObject;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}
-(void)dealloc;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(void)_locked_establishConnection;
-(id)initWithServiceName:(id)arg1 whitelistedServerInterface:(id)arg2 whitelistedClientInterface:(id)arg3 clientExportedObject:(id)arg4 interruptionHandler:(/*^block*/id)arg5 invalidationHandler:(/*^block*/id)arg6 ;
@end

