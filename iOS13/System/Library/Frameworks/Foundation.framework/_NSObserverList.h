/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSObserverList : NSObject {

	id _owner;
	id _observers;
	AI _observerCount;
	os_unfair_lock_s _observersLock;

}
+(id)_copyObserversOfObject:(id)arg1 creatingIfAbsent:(BOOL)arg2 ;
+(void)destroyObserverListForObject:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(void)_receiveBox:(id)arg1 ;
-(void)removeObservation:(id)arg1 ;
-(void)finishObserving;
-(void)_directAddObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 observation:(id)arg2 ;
-(void)removeBlockSink:(/*^block*/id)arg1 observation:(id)arg2 ;
-(id)addBlockSink:(/*^block*/id)arg1 toObservableObject:(id)arg2 forTag:(int)arg3 ;
-(id)addObserver:(id)arg1 toObservableObject:(id)arg2 ;
@end

