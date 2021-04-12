/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@class NSManagedObjectContext;

@interface _PFManagedObjectReferenceQueue : NSObject {

	int _cd_rc;
	int _spinLock;
	int _flags;
	int _signalRunloop;
	NSManagedObjectContext* _context;
	CFArrayRef _queue;
	CFRunLoopObserverRef _rlObserver;
	int _processing;

}
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)finalize;
-(void)_processReferenceQueue:(BOOL)arg1 ;
-(BOOL)_queueForDealloc:(id)arg1 ;
-(void)_unregisterRunloopObservers;
-(void)_contextDidDealloc;
-(id)initForContext:(id)arg1 ;
-(long long)_queueCount;
-(BOOL)_signal;
-(BOOL)_queueBatchForDealloc:(CFArrayRef)arg1 ;
@end

