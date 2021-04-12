/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface REPriorityQueue : NSObject <NSCopying> {

	CFBinaryHeapRef _binaryHeap;
	/*^block*/id _comparator;

}

@property (nonatomic,readonly) id comparator;                          //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy,readonly) NSArray * allObjects; 
@property (nonatomic,readonly) id minimumObject; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)removeAllObjects;
-(BOOL)containsObject:(id)arg1 ;
-(NSArray *)allObjects;
-(id)comparator;
-(void)insertObject:(id)arg1 ;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(void)enumerateObjects:(/*^block*/id)arg1 ;
-(id)minimumObject;
-(void)removeMinimumObject;
@end

