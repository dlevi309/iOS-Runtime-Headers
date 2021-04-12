/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class APSConnection, NSMutableSet, NSString, NSHashTable, NSLock, NSObject, NSArray;

@interface PDPushNotificationManager : NSObject <APSConnectionDelegate> {

	APSConnection* _apsConnection;
	NSMutableSet* _registeredTopics;
	NSString* _pushToken;
	NSHashTable* _consumers;
	NSLock* _consumersLock;
	NSObject*<OS_dispatch_queue> _replyQueue;

}

@property (nonatomic,copy) NSString * pushToken;                        //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,readonly) NSArray * topics; 
@property (nonatomic,readonly) NSArray * currentConsumers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(NSString *)pushToken;
-(void)connect;
-(void)setPushToken:(NSString *)arg1 ;
-(NSArray *)topics;
-(void)registerConsumer:(id)arg1 ;
-(void)recalculatePushTopics;
-(void)unregisterConsumer:(id)arg1 ;
-(void)unregisterAllConsumers;
-(NSArray *)currentConsumers;
-(void)simulatePushForTopic:(id)arg1 ;
@end

