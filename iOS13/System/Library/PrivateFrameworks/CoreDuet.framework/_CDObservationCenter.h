/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSMapTable;

@interface _CDObservationCenter : NSObject {

	NSMapTable* _senderToNotificationObservers;
	NSMapTable* _senderToNotificationObserverObservers;

}
+(id)sharedInstance;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(void)removeObserver:(id)arg1 name:(id)arg2 ;
-(void)postNotificationName:(id)arg1 userInfo:(id)arg2 sender:(id)arg3 ;
-(id)_notificationToObserverEntriesForSender:(id)arg1 observerObserver:(BOOL)arg2 shouldCreate:(BOOL)arg3 ;
-(id)_observerToEntriesForSender:(id)arg1 name:(id)arg2 observerObserver:(BOOL)arg3 shouldCreate:(BOOL)arg4 ;
-(unsigned long long)observerCountOnName:(id)arg1 ;
-(void)_postNotificationName:(id)arg1 userInfo:(id)arg2 sender:(id)arg3 observerObserver:(BOOL)arg4 ;
-(void)_removeObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 observerObserver:(BOOL)arg4 observerCounts:(id)arg5 ;
-(void)_postObserverChangesNotificationWithObserverCounts:(id)arg1 ;
-(void)_addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 observerObserver:(BOOL)arg5 usingCall:(id)arg6 ;
-(void)_removeObserver:(id)arg1 observerObserver:(BOOL)arg2 ;
-(void)_removeObserver:(id)arg1 name:(id)arg2 observerObserver:(BOOL)arg3 ;
-(void)addObserverChangesObserver:(id)arg1 onName:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 usingSelector:(SEL)arg5 ;
-(void)removeObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 ;
-(void)addObserverChangesObserver:(id)arg1 onName:(id)arg2 queue:(id)arg3 usingSelector:(SEL)arg4 ;
-(void)removeObserverChangesObserver:(id)arg1 onName:(id)arg2 ;
@end

