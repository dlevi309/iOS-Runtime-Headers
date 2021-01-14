/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <libobjc.A.dylib/CKPKPushRegistryDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject, NSOperationQueue, APSConnection;

@interface CKNotificationListener : NSObject <APSConnectionDelegate, CKPKPushRegistryDelegate> {

	BOOL _useOpportunisticPushTopics;
	NSString* _apsEnvironment;
	NSMutableDictionary* _subscriptionInfos;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSOperationQueue* _operationQueue;
	APSConnection* _apsConnection;
	NSString* _machServiceName;
	unsigned long long _strategy;

}

@property (nonatomic,retain) NSMutableDictionary * subscriptionInfos;                 //@synthesize subscriptionInfos=_subscriptionInfos - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                       //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) NSString * apsEnvironment;                             //@synthesize apsEnvironment=_apsEnvironment - In the implementation block
@property (nonatomic,retain) APSConnection * apsConnection;                           //@synthesize apsConnection=_apsConnection - In the implementation block
@property (nonatomic,copy) NSString * machServiceName;                                //@synthesize machServiceName=_machServiceName - In the implementation block
@property (assign,nonatomic) unsigned long long strategy;                             //@synthesize strategy=_strategy - In the implementation block
@property (assign,nonatomic) BOOL useOpportunisticPushTopics;                         //@synthesize useOpportunisticPushTopics=_useOpportunisticPushTopics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)suggestedStrategy;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connectionDidReconnect:(id)arg1 ;
-(void)setStrategy:(unsigned long long)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(NSOperationQueue *)operationQueue;
-(void)setMachServiceName:(NSString *)arg1 ;
-(unsigned long long)strategy;
-(NSString *)apsEnvironment;
-(id)init;
-(id)initWithStrategy:(unsigned long long)arg1 ;
-(void)setUseOpportunisticPushTopics:(BOOL)arg1 ;
-(void)didReceiveIncomingPushWithPayload:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)handlePushNotificationWithPayload:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)machServiceName;
-(void)updatePushNotificationListeners;
-(BOOL)hasInitializedAPSConnection;
-(BOOL)isRegisteredForSubscriptionWithID:(id)arg1 inDatabase:(id)arg2 ;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)checkConfiguration;
-(void)updateAPSConnection;
-(void)setApsConnection:(APSConnection *)arg1 ;
-(void)setSubscriptionInfos:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithStrategy:(unsigned long long)arg1 machServiceName:(id)arg2 ;
-(void)registerForMachServiceAPSConnectionNotifications;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)unregisterForSubscriptionWithID:(id)arg1 inDatabase:(id)arg2 ;
-(void)updatePKPushRegistry;
-(id)uniqueKeyForSubscriptionID:(id)arg1 inDatabase:(id)arg2 ;
-(void)registerForSubscription:(id)arg1 inDatabase:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)useOpportunisticPushTopics;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(APSConnection *)apsConnection;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)hasAPSConnectionInitiateEntitlement;
-(NSMutableDictionary *)subscriptionInfos;
-(void)dealloc;
@end

