/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFDispatchQueueExtension.h>
#import <libobjc.A.dylib/PFDispatchQueueExtending.h>

@class NSCountedSet, NSString;

@interface PFDispatchQueueClearingExtension : PFDispatchQueueExtension <PFDispatchQueueExtending> {

	opaque_pthread_mutex_t _lock;
	NSCountedSet* _activeOnQueues;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alloc;
+(void)initialize;
+(unsigned long long)countOfPurgingQueues;
-(id)initInternal;
-(id)init;
-(id)queue:(id)arg1 receivedDispatchBarrierAsync:(/*^block*/id)arg2 ;
-(void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(/*^block*/id)arg3 ;
-(id)queue:(id)arg1 receivedDispatchBarrierSync:(/*^block*/id)arg2 ;
-(unsigned long long)countOfPurgingQueues;
-(void)doPurge:(id)arg1 wait:(BOOL)arg2 ;
@end

