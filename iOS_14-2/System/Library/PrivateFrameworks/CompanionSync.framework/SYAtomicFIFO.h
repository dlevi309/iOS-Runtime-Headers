/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)tail;
-(id)init;
-(id)dequeue;
-(id)head;
-(void)enqueue:(id)arg1 ;
-(void)removeAllObjects;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)dequeueUntil:(/*^block*/id)arg1 ;
@end

