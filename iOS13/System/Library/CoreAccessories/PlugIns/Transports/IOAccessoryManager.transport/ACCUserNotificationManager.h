/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSRecursiveLock *)lock;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(NSMutableDictionary *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)userNotifications;
-(void)presentNotification:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dismissNotificationsWithGroupIdentifier:(id)arg1 ;
-(void)dismissNotificationWithIdentifier:(id)arg1 ;
-(void)dismissNotification:(id)arg1 ;
-(void)removeUserNotification:(id)arg1 ;
-(void)dismisssAllNotifications;
-(id)userNotificationWithUUID:(id)arg1 ;
-(void)setUserNotifications:(NSMutableSet *)arg1 ;
@end

