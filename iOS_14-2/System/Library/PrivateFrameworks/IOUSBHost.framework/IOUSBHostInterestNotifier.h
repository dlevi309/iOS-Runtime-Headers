/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
*/


@protocol OS_dispatch_queue;
#import <IOUSBHost/IOUSBHost-Structs.h>
@class NSObject, NSRecursiveLock;

@interface IOUSBHostInterestNotifier : NSObject {

	BOOL _destroyed;
	unsigned _service;
	unsigned _notifier;
	unsigned _matchingIterator;
	NSObject* _owner;
	NSRecursiveLock* _lock;
	NSObject*<OS_dispatch_queue> _queue;
	IONotificationPortRef _notificationPortRef;
	/*function pointer*/void* _callback;

}

@property (assign,nonatomic,__weak) NSObject * owner;                                //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) BOOL destroyed;                                         //@synthesize destroyed=_destroyed - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                                 //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) IONotificationPortRef notificationPortRef;              //@synthesize notificationPortRef=_notificationPortRef - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* callback;                     //@synthesize callback=_callback - In the implementation block
@property (assign,nonatomic) unsigned service;                                       //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned notifier;                                      //@synthesize notifier=_notifier - In the implementation block
@property (assign,nonatomic) unsigned matchingIterator;                              //@synthesize matchingIterator=_matchingIterator - In the implementation block
-(unsigned)notifier;
-(/*function pointer*/void*)callback;
-(void)setCallback:(/*function pointer*/void*)arg1 ;
-(void)setNotifier:(unsigned)arg1 ;
-(NSObject *)owner;
-(void)destroy;
-(NSRecursiveLock *)lock;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(void)setOwner:(NSObject *)arg1 ;
-(void)setService:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)destroyed;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)service;
-(void)dealloc;
-(id)initWithOwner:(id)arg1 matchingDictionary:(id)arg2 callback:(/*function pointer*/void*)arg3 ;
-(void)setNotificationPortRef:(IONotificationPortRef)arg1 ;
-(IONotificationPortRef)notificationPortRef;
-(void)setDestroyed:(BOOL)arg1 ;
-(id)initWithOwner:(id)arg1 callback:(/*function pointer*/void*)arg2 ;
-(unsigned)matchingIterator;
-(void)setMatchingIterator:(unsigned)arg1 ;
-(id)initWithOwner:(id)arg1 service:(unsigned)arg2 callback:(/*function pointer*/void*)arg3 ;
@end

