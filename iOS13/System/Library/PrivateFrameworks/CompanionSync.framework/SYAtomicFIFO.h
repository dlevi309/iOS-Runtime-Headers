/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


#import <CompanionSync/CompanionSync-Structs.h>
@class NSMutableArray;

@interface SYAtomicFIFO : NSObject {

	os_unfair_lock_s _lock;
	NSMutableArray* _store;

}

@property (readonly) id head; 
@property (readonly) id tail; 
-(id)init;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)removeAllObjects;
-(id)head;
-(id)tail;
-(id)dequeue;
-(void)enqueue:(id)arg1 ;
-(id)dequeueUntil:(/*^block*/id)arg1 ;
@end

