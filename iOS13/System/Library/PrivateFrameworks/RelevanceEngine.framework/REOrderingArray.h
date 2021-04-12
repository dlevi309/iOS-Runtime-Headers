/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSArray, REDependencyGraph;

@interface REOrderingArray : NSObject {

	NSArray* _orderedObjects;
	REDependencyGraph* _dependencyGraph;
	BOOL _needsUpdate;
	unsigned long long _batchCount;
	NSArray* _comparators;

}

@property (nonatomic,readonly) NSArray * comparators;                 //@synthesize comparators=_comparators - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(NSArray *)comparators;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(void)updateObject:(id)arg1 ;
-(void)_createDependenciesForObject:(id)arg1 ;
-(void)_performOrMarkUpdate;
-(void)_updateContentOrder;
-(id)initWithComparators:(id)arg1 ;
-(void)sortAllObjects;
@end

