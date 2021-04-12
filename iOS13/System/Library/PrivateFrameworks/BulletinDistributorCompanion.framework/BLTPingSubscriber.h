/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <libobjc.A.dylib/BLTPingSubscribing.h>

@protocol BLTPingService;
@class NSMutableDictionary, NSString;

@interface BLTPingSubscriber : NSObject <BLTPingSubscribing> {

	opaque_pthread_mutex_t _lock;
	NSMutableDictionary* _pingHandlers;
	id<BLTPingService> _service;

}

@property (nonatomic,retain) NSMutableDictionary * pingHandlers;              //@synthesize pingHandlers=_pingHandlers - In the implementation block
@property (nonatomic,retain) id<BLTPingService> service;                      //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<BLTPingService>)service;
-(void)setService:(id<BLTPingService>)arg1 ;
-(id)subscriptionInfos;
-(id)sectionIDs;
-(id)initWithService:(id)arg1 ;
-(void)pingWithBulletin:(id)arg1 ack:(/*^block*/id)arg2 ;
-(void)pingWithBulletin:(id)arg1 ;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(/*^block*/id)arg3 ;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)unsubscribeFromSectionID:(id)arg1 ;
-(void)subscribeWithMachServiceName:(id)arg1 ;
-(void)pingSubscriberDidLoad;
-(id)sectionIDsForBulletins;
-(void)_subscribeToSectionID:(id)arg1 pingHandler:(id)arg2 ackType:(unsigned long long)arg3 forFullBulletins:(BOOL)arg4 forNotifications:(BOOL)arg5 ;
-(void)_subscribeToSectionID:(id)arg1 pingHandler:(id)arg2 ackType:(unsigned long long)arg3 forFullBulletins:(BOOL)arg4 ;
-(void)subscribeToSectionID:(id)arg1 withPingHandler:(/*^block*/id)arg2 ;
-(void)subscribeToSectionID:(id)arg1 withPingAckHandler:(/*^block*/id)arg2 ;
-(void)subscribeToSectionID:(id)arg1 withPingAckForwardHandler:(/*^block*/id)arg2 ;
-(void)subscribeToSectionID:(id)arg1 withBulletinHandler:(/*^block*/id)arg2 ;
-(void)subscribeToSectionID:(id)arg1 withBulletinAckHandler:(/*^block*/id)arg2 ;
-(void)subscribeToSectionID:(id)arg1 withBulletinAckForwardHandler:(/*^block*/id)arg2 ;
-(void)subscribeToSectionID:(id)arg1 withBulletinAckForwardForAnyConnectionHandler:(/*^block*/id)arg2 ;
-(void)subscribeToSectionID:(id)arg1 withNotificationHandler:(/*^block*/id)arg2 ;
-(void)subscribeToSectionID:(id)arg1 withNotificationAckHandler:(/*^block*/id)arg2 ;
-(void)subscribeToSectionID:(id)arg1 withNotificationAckForwardHandler:(/*^block*/id)arg2 ;
-(void)subscribeToSectionID:(id)arg1 withNotificationAckForwardForAnyConnectionHandler:(/*^block*/id)arg2 ;
-(void)sendBulletinSummary:(id)arg1 forBulletin:(id)arg2 destinations:(unsigned long long)arg3 ;
-(NSMutableDictionary *)pingHandlers;
-(void)setPingHandlers:(NSMutableDictionary *)arg1 ;
@end

