/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/


@protocol OS_dispatch_queue;
@class _PASLock, NSObject, NSNotificationCenter;

@interface PPNotificationManager : NSObject {

	_PASLock* _lockedData;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSNotificationCenter* _notificationCenter;

}
+(id)new;
+(void)addEventKitObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)sharedInstance;
+(void)addSuggestionsObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)addPortraitChangeObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)addMeCardObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)addPortraitInvalidationObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)addContactsObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)stopListening;
-(void)simulatePortraitInvalidation;
-(id)init;
-(void)addContactsChangeBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)addEventKitChangeBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)addSuggestionsChangeBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)addMeCardChangeBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)waitOnQueueToDrain;
-(void)_registerForEventKitChangeTrackingWithGuardedData:(id)arg1 ;
-(void)simulatePortraitChange;
-(void)addPortraitInvalidationBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(id)initWithQueueName:(const char*)arg1 notificationCenter:(id)arg2 ;
-(void)addPortraitChangeBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)dealloc;
@end

