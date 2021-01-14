/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/


@class NSObject, NSXPCConnection;

@interface RMConfigurationSubscriberClient : NSObject {

	NSObject* _connectionLock;
	NSXPCConnection* _connection;

}
-(id)init;
-(id)_connection;
-(void)dealloc;
-(void)_asynchronousProxyWithHandler:(/*^block*/id)arg1 ;
-(void)fetchConfigurationsWithTypes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

