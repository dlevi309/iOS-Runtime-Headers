/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(unsigned long long)count;
-(BOOL)containsObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)updateObject:(id)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(NSArray *)comparators;
-(void)_createDependenciesForObject:(id)arg1 ;
-(void)_performOrMarkUpdate;
-(void)_updateContentOrder;
-(id)initWithComparators:(id)arg1 ;
-(void)sortAllObjects;
@end

