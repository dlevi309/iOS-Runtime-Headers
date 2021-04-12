/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@class NSManagedObjectContext;

@interface _PFManagedObjectReferenceQueue : NSObject {

	int _cd_rc;
	os_unfair_lock_s _spinLock;
	int _flags;
	int _signalRunloop;
	NSManagedObjectContext* _context;
	CFArrayRef _queue;
	CFRunLoopObserverRef _rlObserver;
	int _processing;

}
-(oneway void)release;
-(void)finalize;
-(BOOL)_tryRetain;
-(id)retain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(void)dealloc;
@end

