/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/


#import <ProactiveExperiments/ProactiveExperiments-Structs.h>
@class NSXPCConnection, NSString, NSXPCInterface;

@interface PREXPCClientHelpers : NSObject {

	opaque_pthread_mutex_t _connLock;
	NSXPCConnection* _conn;
	NSString* _serviceName;
	NSXPCInterface* _whitelistedServerInterface;
	id _clientExportedObject;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}
-(void)dealloc;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(void)_locked_establishConnection;
-(id)initWithServiceName:(id)arg1 whitelistedServerInterface:(id)arg2 clientExportedObject:(id)arg3 interruptionHandler:(/*^block*/id)arg4 invalidationHandler:(/*^block*/id)arg5 ;
@end

