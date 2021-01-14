/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_invalidate;
-(void)_queue_interruptedConnection;
-(id)init;
-(NSXPCConnection *)connection;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_queue_invalidatedConnection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_queue_ensureConnection;
-(void)isNotificationImminentWithPublisherBulletinID:(id)arg1 sectionID:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

