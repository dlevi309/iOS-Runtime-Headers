/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSArray;

@interface AMSThreadSafeSet : NSObject {

	NSMutableSet* _backingSet;
	NSObject*<OS_dispatch_queue> _backingSetAccessQueue;

}

@property (nonatomic,retain) NSMutableSet * backingSet;                                       //@synthesize backingSet=_backingSet - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backingSetAccessQueue;              //@synthesize backingSetAccessQueue=_backingSetAccessQueue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allObjects; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(NSArray *)allObjects;
-(NSObject*<OS_dispatch_queue>)backingSetAccessQueue;
-(NSMutableSet *)backingSet;
-(void)setBackingSet:(NSMutableSet *)arg1 ;
-(void)setBackingSetAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

