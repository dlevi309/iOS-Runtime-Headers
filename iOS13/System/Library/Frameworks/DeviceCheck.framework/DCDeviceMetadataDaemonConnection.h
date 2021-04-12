/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

