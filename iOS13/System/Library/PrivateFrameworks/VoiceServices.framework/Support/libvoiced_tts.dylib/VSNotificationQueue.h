/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


@protocol OS_dispatch_queue;
#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
@class NSMutableDictionary, NSMutableSet, NSObject;

@interface VSNotificationQueue : NSObject {

	NSMutableDictionary* _queuedNotification;
	NSMutableSet* _ongoingNotifications;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	opaque_pthread_mutex_t _lock;

}

@property (nonatomic,retain) NSMutableDictionary * queuedNotification;              //@synthesize queuedNotification=_queuedNotification - In the implementation block
@property (nonatomic,retain) NSMutableSet * ongoingNotifications;                   //@synthesize ongoingNotifications=_ongoingNotifications - In the implementation block
@property (assign,nonatomic) opaque_pthread_mutex_t lock;                           //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notifyQueue;              //@synthesize notifyQueue=_notifyQueue - In the implementation block
+(id)sharedQueue;
-(id)init;
-(void)dealloc;
-(opaque_pthread_mutex_t)lock;
-(void)setLock:(opaque_pthread_mutex_t)arg1 ;
-(NSObject*<OS_dispatch_queue>)notifyQueue;
-(void)setNotifyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)enqueueNotificationName:(id)arg1 object:(id)arg2 ;
-(void)removeNotificationName:(id)arg1 ;
-(void)startNotificationName:(id)arg1 ;
-(NSMutableSet *)ongoingNotifications;
-(NSMutableDictionary *)queuedNotification;
-(void)setQueuedNotification:(NSMutableDictionary *)arg1 ;
-(void)setOngoingNotifications:(NSMutableSet *)arg1 ;
@end

