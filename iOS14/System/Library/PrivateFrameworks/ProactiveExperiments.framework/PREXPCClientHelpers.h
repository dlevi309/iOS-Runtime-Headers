/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)remoteObjectProxy;
-(void)_locked_establishConnection;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 whitelistedServerInterface:(id)arg2 clientExportedObject:(id)arg3 interruptionHandler:(/*^block*/id)arg4 invalidationHandler:(/*^block*/id)arg5 ;
@end

