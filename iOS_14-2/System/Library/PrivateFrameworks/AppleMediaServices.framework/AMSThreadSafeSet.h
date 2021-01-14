/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_queue>)backingSetAccessQueue;
-(void)setBackingSetAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)count;
-(NSArray *)allObjects;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)setBackingSet:(NSMutableSet *)arg1 ;
-(NSMutableSet *)backingSet;
@end

