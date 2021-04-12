/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NFUnfairLock, NSMutableSet, NSArray, NSSet;

@interface FCThreadSafeMutableSet : NSObject {

	NFUnfairLock* _lock;
	NSMutableSet* _set;

}

@property (readonly) unsigned long long count; 
@property (readonly) BOOL isEmpty; 
@property (copy,readonly) NSArray * allObjects; 
@property (nonatomic,copy,readonly) NSSet * readOnlySet; 
-(id)init;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(BOOL)isEmpty;
-(BOOL)containsObject:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(void)removeObjectsInSet:(id)arg1 ;
-(NSArray *)allObjects;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)readWithAccessor:(/*^block*/id)arg1 ;
-(NSSet *)readOnlySet;
-(void)readWriteWithAccessor:(/*^block*/id)arg1 ;
@end

