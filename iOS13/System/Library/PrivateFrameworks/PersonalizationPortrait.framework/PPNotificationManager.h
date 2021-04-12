/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/


@protocol OS_dispatch_queue;
@class _PASLock, NSObject;

@interface PPNotificationManager : NSObject {

	_PASLock* _lockedData;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedInstance;
+(void)addContactsObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)addMeCardObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)addPortraitChangeObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)addPortraitInvalidationObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)addEventKitObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)addSuggestionsObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)createNewSharedManager;
+(void)unsetSharedManager;
-(id)init;
-(void)dealloc;
-(void)stopListening;
-(void)fireHandler:(id)arg1 ;
-(void)fireEventKitHandler:(id)arg1 events:(id)arg2 ;
-(void)addContactsChangeBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)addMeCardChangeBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)addPortraitChangeBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)addPortraitInvalidationBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)addEventKitChangeBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)_registerForEventKitChangeTrackingWithGuardedData:(id)arg1 ;
-(void)addSuggestionsChangeBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)simulateContactsChange;
-(void)simulateMeCardChange;
-(void)simulatePortraitChange;
-(void)simulatePortraitInvalidation;
-(void)simulateEventKitChange;
-(void)simulateSuggestionsChange;
@end

