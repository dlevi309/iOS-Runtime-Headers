/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, NSObject;

@interface SSApplicationUtil : NSObject {

	SSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(id)init;
-(void)restartApplication:(/*^block*/id)arg1 ;
-(id)_connection;
@end

