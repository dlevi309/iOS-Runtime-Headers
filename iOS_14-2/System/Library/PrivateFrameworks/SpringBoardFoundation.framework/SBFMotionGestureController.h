/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@class NSMutableDictionary, CMGestureManager;

@interface SBFMotionGestureController : NSObject {

	NSMutableDictionary* _observersByPriority;
	CMGestureManager* _motionGestureManager;

}
+(id)sharedInstance;
-(id)init;
-(id)_observersForPriority:(unsigned long long)arg1 ;
-(BOOL)_hasObservers;
-(void)_removeGestureManager;
-(void)addGestureObserver:(id)arg1 withPriority:(unsigned long long)arg2 ;
-(void)_addGestureObserver:(id)arg1 withPriority:(unsigned long long)arg2 ;
-(void)_updateGestureManager;
-(void)_removeGestureObserver:(id)arg1 ;
-(void)_enumerateObserversByPriority:(/*^block*/id)arg1 ;
-(id)_highestPriorityObservers;
-(void)_addGestureManager;
-(void)_notifyObserversOfGesture:(int)arg1 ;
-(void)addGestureObserver:(id)arg1 ;
-(void)removeGestureObserver:(id)arg1 ;
-(void)dealloc;
@end

