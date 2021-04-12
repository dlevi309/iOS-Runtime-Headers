/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/DeviceCheck.framework/DeviceCheck
*/


@class NSXPCConnection, NSLock;

@interface DCDeviceMetadataDaemonConnection : NSObject {

	NSXPCConnection* _conn;
	NSLock* _connLock;

}
-(id)init;
-(id)connection;
-(id)remoteObjectProxy:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxy:(/*^block*/id)arg1 ;
@end

