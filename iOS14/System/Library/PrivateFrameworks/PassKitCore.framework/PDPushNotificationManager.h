/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class APSConnection, NSMutableSet, NSString, NSHashTable, NSObject, NSArray;

@interface PDPushNotificationManager : NSObject <APSConnectionDelegate> {

	APSConnection* _apsConnection;
	NSMutableSet* _registeredTopics;
	NSString* _pushToken;
	NSHashTable* _consumers;
	long long _enableCriticalReliabilityCount;
	os_unfair_lock_s _consumersLock;
	os_unfair_lock_s _criticalReliabilityLock;
	NSObject*<OS_dispatch_queue> _replyQueue;

}

@property (nonatomic,copy) NSString * pushToken;                        //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,readonly) NSArray * topics; 
@property (nonatomic,readonly) NSArray * currentConsumers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPushToken:(NSString *)arg1 ;
-(void)enableCriticalReliability;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(NSString *)pushToken;
-(id)init;
-(void)connect;
-(NSArray *)currentConsumers;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(NSArray *)topics;
-(void)disableCriticalReliability;
-(void)registerConsumer:(id)arg1 ;
-(void)simulatePushForTopic:(id)arg1 ;
-(void)unregisterConsumer:(id)arg1 ;
-(void)recalculatePushTopics;
-(void)unregisterAllConsumers;
-(void)dealloc;
@end

