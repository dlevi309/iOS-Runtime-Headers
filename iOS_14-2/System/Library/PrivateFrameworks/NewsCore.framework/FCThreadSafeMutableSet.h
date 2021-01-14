/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeObjectsInSet:(id)arg1 ;
-(id)init;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(unsigned long long)count;
-(void)addObjectsFromArray:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(NSArray *)allObjects;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)readWithAccessor:(/*^block*/id)arg1 ;
-(void)readWriteWithAccessor:(/*^block*/id)arg1 ;
-(BOOL)isEmpty;
-(NSSet *)readOnlySet;
@end

