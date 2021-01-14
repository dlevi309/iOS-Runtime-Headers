/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <Foundation/NSOperationQueue.h>

@protocol OS_dispatch_queue;
@class NSObject, NSPointerArray, NSMutableIndexSet;

@interface OFNSOperationQueue : NSOperationQueue {

	NSObject*<OS_dispatch_queue> _operationsLookupTableQueue;
	NSPointerArray* _operationsLookupTable;
	NSMutableIndexSet* _operationsLookupTableFreeIndices;

}
-(id)init;
-(void)dealloc;
-(void)_setupOperationsLookupTable;
-(void)_setOperationLookupObject:(id)arg1 forKey:(unsigned long long)arg2 ;
-(id)_operationLookupObjectForKey:(unsigned long long)arg1 ;
-(void)addOperation:(id)arg1 context:(id)arg2 identifier:(id)arg3 queuePriority:(long long)arg4 ;
-(void)cancelAllOperationsWithContext:(id)arg1 ;
-(void)cancelAllOperationsWithIdentifier:(id)arg1 ;
-(void)cancelAllOperationsWithContext:(id)arg1 andIdentifier:(id)arg2 ;
-(unsigned long long)addOperation:(id)arg1 withPriority:(long long)arg2 ;
-(void)cancelSlideshowOperationWithID:(unsigned long long)arg1 ;
@end

