/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface BLTUserNotificationList : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_queue_ensureConnection;
-(void)_queue_interruptedConnection;
-(void)_queue_invalidatedConnection;
-(void)isNotificationImminentWithPublisherBulletinID:(id)arg1 sectionID:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

