/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <libobjc.A.dylib/PKPushRegistryDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject, NSOperationQueue, PKPushRegistry, APSConnection;

@interface CKNotificationListener : NSObject <APSConnectionDelegate, PKPushRegistryDelegate> {

	NSString* _apsEnvironment;
	NSMutableDictionary* _subscriptionInfos;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSOperationQueue* _operationQueue;
	PKPushRegistry* _pushRegistry;
	APSConnection* _apsConnection;
	NSString* _machServiceName;
	unsigned long long _strategy;

}

@property (nonatomic,retain) NSMutableDictionary * subscriptionInfos;                 //@synthesize subscriptionInfos=_subscriptionInfos - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                       //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) PKPushRegistry * pushRegistry;                           //@synthesize pushRegistry=_pushRegistry - In the implementation block
@property (nonatomic,readonly) NSString * apsEnvironment;                             //@synthesize apsEnvironment=_apsEnvironment - In the implementation block
@property (nonatomic,retain) APSConnection * apsConnection;                           //@synthesize apsConnection=_apsConnection - In the implementation block
@property (nonatomic,copy) NSString * machServiceName;                                //@synthesize machServiceName=_machServiceName - In the implementation block
@property (assign,nonatomic) unsigned long long strategy;                             //@synthesize strategy=_strategy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)suggestedStrategy;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(id)initWithMachServiceName:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2 ;
-(void)connectionDidReconnect:(id)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMachServiceName:(NSString *)arg1 ;
-(NSString *)machServiceName;
-(void)pushRegistry:(id)arg1 didUpdatePushCredentials:(id)arg2 forType:(id)arg3 ;
-(void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)registerForSubscription:(id)arg1 inDatabase:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)unregisterForSubscriptionWithID:(id)arg1 inDatabase:(id)arg2 ;
-(unsigned long long)strategy;
-(void)setStrategy:(unsigned long long)arg1 ;
-(id)initWithStrategy:(unsigned long long)arg1 ;
-(id)initWithStrategy:(unsigned long long)arg1 machServiceName:(id)arg2 ;
-(void)checkConfiguration;
-(NSString *)apsEnvironment;
-(BOOL)hasAPSConnectionInitiateEntitlement;
-(APSConnection *)apsConnection;
-(id)uniqueKeyForSubscriptionID:(id)arg1 inDatabase:(id)arg2 ;
-(NSMutableDictionary *)subscriptionInfos;
-(void)updatePushNotificationListeners;
-(void)updateAPSConnection;
-(void)updatePKPushRegistry;
-(void)setApsConnection:(APSConnection *)arg1 ;
-(void)registerForMachServiceAPSConnectionNotifications;
-(void)handlePushNotificationWithPayload:(id)arg1 ;
-(PKPushRegistry *)pushRegistry;
-(void)setPushRegistry:(PKPushRegistry *)arg1 ;
-(BOOL)hasInitializedAPSConnection;
-(BOOL)isRegisteredForSubscriptionWithID:(id)arg1 inDatabase:(id)arg2 ;
-(void)setSubscriptionInfos:(NSMutableDictionary *)arg1 ;
@end

