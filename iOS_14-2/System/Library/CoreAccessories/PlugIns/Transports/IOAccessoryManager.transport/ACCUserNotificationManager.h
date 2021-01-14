/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary, NSRecursiveLock;

@interface ACCUserNotificationManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _userNotifications;
	NSMutableDictionary* _completionHandlers;
	NSRecursiveLock* _lock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * userNotifications;                      //@synthesize userNotifications=_userNotifications - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                                //@synthesize lock=_lock - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)setCompletionHandlers:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)userNotifications;
-(NSRecursiveLock *)lock;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(NSMutableDictionary *)completionHandlers;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)presentNotification:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dismissNotificationsWithGroupIdentifier:(id)arg1 ;
-(void)dismissNotificationWithIdentifier:(id)arg1 ;
-(void)dismissNotification:(id)arg1 ;
-(void)removeUserNotification:(id)arg1 ;
-(void)dismisssAllNotifications;
-(id)userNotificationWithUUID:(id)arg1 ;
-(void)setUserNotifications:(NSMutableSet *)arg1 ;
@end

