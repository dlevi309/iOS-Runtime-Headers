/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface FMXPCNotificationsUtil : NSObject {

	NSMutableDictionary* _darwinNotificationHandlers;
	NSMutableDictionary* _distributedNotificationHandlers;
	NSObject*<OS_dispatch_queue> _modificationQueue;

}

@property (nonatomic,retain) NSMutableDictionary * darwinNotificationHandlers;                   //@synthesize darwinNotificationHandlers=_darwinNotificationHandlers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * distributedNotificationHandlers;              //@synthesize distributedNotificationHandlers=_distributedNotificationHandlers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> modificationQueue;                     //@synthesize modificationQueue=_modificationQueue - In the implementation block
+(id)sharedInstance;
+(void)handleDarwinNotificationsWithHandlers:(id)arg1 ;
+(void)handleDistributedNotificationsWithHandlers:(id)arg1 ;
-(NSMutableDictionary *)darwinNotificationHandlers;
-(id)init;
-(void)deregisterHandlerForDarwinNotification:(id)arg1 ;
-(void)_didReceiveDistributedNotification:(id)arg1 withContext:(id)arg2 ;
-(NSMutableDictionary *)distributedNotificationHandlers;
-(BOOL)isHandlerRegisteredForDistributedNotification:(id)arg1 ;
-(void)setDarwinNotificationHandlers:(NSMutableDictionary *)arg1 ;
-(void)registerHandler:(/*^block*/id)arg1 forDarwinNotification:(id)arg2 ;
-(void)setModificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)deregisterHandlerForDistributedNotification:(id)arg1 ;
-(BOOL)isHandlerRegisteredForDarwinNotification:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)modificationQueue;
-(void)registerHandler:(/*^block*/id)arg1 forDistributedNotification:(id)arg2 ;
-(void)setDistributedNotificationHandlers:(NSMutableDictionary *)arg1 ;
-(void)_didReceiveDarwinNotification:(id)arg1 ;
@end

