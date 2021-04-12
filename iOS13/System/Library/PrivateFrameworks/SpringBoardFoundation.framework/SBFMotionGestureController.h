/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@class NSMutableDictionary, CMGestureManager;

@interface SBFMotionGestureController : NSObject {

	NSMutableDictionary* _observersByPriority;
	CMGestureManager* _motionGestureManager;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)_hasObservers;
-(void)_removeGestureManager;
-(void)addGestureObserver:(id)arg1 withPriority:(unsigned long long)arg2 ;
-(void)_addGestureObserver:(id)arg1 withPriority:(unsigned long long)arg2 ;
-(void)_updateGestureManager;
-(void)_removeGestureObserver:(id)arg1 ;
-(id)_observersForPriority:(unsigned long long)arg1 ;
-(void)_enumerateObserversByPriority:(/*^block*/id)arg1 ;
-(id)_highestPriorityObservers;
-(void)_addGestureManager;
-(void)_notifyObserversOfGesture:(int)arg1 ;
-(void)addGestureObserver:(id)arg1 ;
-(void)removeGestureObserver:(id)arg1 ;
@end

