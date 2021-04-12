/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/BLTPingService.h>

@protocol OS_dispatch_queue, BLTBulletinDistributorSubscriberDelegate, BLTBulletinDistributorSubscriberDeviceDelegate, BLTPingSubscribing;
@class NSMutableDictionary, NSObject, NSString, NSXPCConnection, NSSet;

@interface BLTBulletinDistributorSubscriber : NSObject <BLTPingService> {

	NSMutableDictionary* _subscriptions;
	NSObject*<OS_dispatch_queue> _queue;
	id<BLTBulletinDistributorSubscriberDelegate> _delegate;
	id<BLTBulletinDistributorSubscriberDeviceDelegate> _deviceDelegate;
	NSString* _machServiceName;
	id<BLTPingSubscribing> _client;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) id<BLTPingSubscribing> client;                                        //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                         //@synthesize connection=_connection - In the implementation block
@property (copy) NSString * machServiceName;                                                       //@synthesize machServiceName=_machServiceName - In the implementation block
@property (__weak) id<BLTBulletinDistributorSubscriberDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<BLTBulletinDistributorSubscriberDeviceDelegate> deviceDelegate;              //@synthesize deviceDelegate=_deviceDelegate - In the implementation block
@property (nonatomic,readonly) NSSet * sectionIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<BLTBulletinDistributorSubscriberDelegate>)delegate;
-(void)setDelegate:(id<BLTBulletinDistributorSubscriberDelegate>)arg1 ;
-(id<BLTPingSubscribing>)client;
-(void)setClient:(id<BLTPingSubscribing>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setMachServiceName:(NSString *)arg1 ;
-(NSString *)machServiceName;
-(id)initWithClient:(id)arg1 ;
-(NSSet *)sectionIDs;
-(void)_connectIfNecessary;
-(void)setDeviceDelegate:(id<BLTBulletinDistributorSubscriberDeviceDelegate>)arg1 ;
-(id<BLTBulletinDistributorSubscriberDeviceDelegate>)deviceDelegate;
-(void)pingWithBulletin:(id)arg1 ack:(/*^block*/id)arg2 ;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendBulletinSummary:(id)arg1 ;
-(void)subscribeToSectionID:(id)arg1 forFullBulletins:(BOOL)arg2 withAck:(BOOL)arg3 ackAllowedOnLocalConnection:(BOOL)arg4 ;
-(void)unsubscribeFromSectionID:(id)arg1 ;
-(void)subscribeWithMachServiceName:(id)arg1 ;
@end

