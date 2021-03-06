/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/BLTPingService.h>

@protocol BLTPingSubscribing;
@class NSXPCConnection, NSXPCListener, NSString;

@interface BLTRemotePingSubscriberService : NSObject <NSXPCListenerDelegate, BLTPingService> {

	id<BLTPingSubscribing> _delegate;
	NSXPCConnection* _connectionToServer;
	NSXPCConnection* _connectionFromServer;
	NSXPCListener* _listener;
	NSString* _machServiceName;

}

@property (nonatomic,retain) NSXPCConnection * connectionToServer;                //@synthesize connectionToServer=_connectionToServer - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connectionFromServer;              //@synthesize connectionFromServer=_connectionFromServer - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                            //@synthesize listener=_listener - In the implementation block
@property (nonatomic,copy) NSString * machServiceName;                            //@synthesize machServiceName=_machServiceName - In the implementation block
@property (assign,nonatomic,__weak) id<BLTPingSubscribing> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_connect;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(/*^block*/id)arg3 ;
-(void)subscribeToSectionID:(id)arg1 forFullBulletins:(BOOL)arg2 withAck:(BOOL)arg3 ackAllowedOnLocalConnection:(BOOL)arg4 ;
-(NSXPCConnection *)connectionToServer;
-(void)setMachServiceName:(NSString *)arg1 ;
-(id)init;
-(id<BLTPingSubscribing>)delegate;
-(void)pingWithBulletin:(id)arg1 ack:(/*^block*/id)arg2 ;
-(void)_createXPCService;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)machServiceName;
-(void)setDelegate:(id<BLTPingSubscribing>)arg1 ;
-(void)pingWithBulletin:(id)arg1 ;
-(NSXPCListener *)listener;
-(id)initWithMachServiceName:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setConnectionFromServer:(NSXPCConnection *)arg1 ;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ;
-(NSXPCConnection *)connectionFromServer;
-(void)unsubscribeFromSectionID:(id)arg1 ;
-(void)setConnectionToServer:(NSXPCConnection *)arg1 ;
-(void)sendBulletinSummary:(id)arg1 ;
-(void)subscribeWithMachServiceName:(id)arg1 ;
-(void)dealloc;
@end

