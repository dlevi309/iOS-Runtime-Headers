/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSMapTable;

@interface _CDObservationCenter : NSObject {

	NSMapTable* _senderToNotificationObservers;
	NSMapTable* _senderToNotificationObserverObservers;

}
+(id)sharedInstance;
-(void)addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(id)init;
-(void)postNotificationName:(id)arg1 userInfo:(id)arg2 sender:(id)arg3 ;
-(unsigned long long)observerCountOnName:(id)arg1 ;
-(void)addObserverChangesObserver:(id)arg1 onName:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)removeObserver:(id)arg1 name:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 ;
-(void)addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 usingSelector:(SEL)arg5 ;
-(void)removeObserverChangesObserver:(id)arg1 onName:(id)arg2 ;
-(void)addObserverChangesObserver:(id)arg1 onName:(id)arg2 queue:(id)arg3 usingSelector:(SEL)arg4 ;
@end

