/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/


@class NSObject, NSXPCConnection;

@interface RMConfigurationSubscriberClient : NSObject {

	NSObject* _connectionLock;
	NSXPCConnection* _connection;

}
-(id)init;
-(void)dealloc;
-(id)_connection;
-(void)_asynchronousProxyWithHandler:(/*^block*/id)arg1 ;
-(void)fetchConfigurationsWithTypes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

