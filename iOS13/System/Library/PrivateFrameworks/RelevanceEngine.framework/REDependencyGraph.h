/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMapTable, NSArray;

@interface REDependencyGraph : NSObject <NSCopying> {

	NSMapTable* _nodes;

}

@property (nonatomic,readonly) NSArray * allItems; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithPointerFunctions:(unsigned long long)arg1 ;
-(void)removeItem:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(BOOL)containsItem:(id)arg1 ;
-(NSArray *)allItems;
-(void)_enumerateSortedFirstLevelDependenciesOfItem:(id)arg1 usingComparator:(/*^block*/id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)markItem:(id)arg1 dependentOnItem:(id)arg2 ;
-(BOOL)item:(id)arg1 isDependencyOfItem:(id)arg2 ;
-(void)enumerateDependenciesOfItem:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)topologicalSortedItemsWithComparator:(/*^block*/id)arg1 ;
-(void)_visitNode:(id)arg1 visited:(id)arg2 temporary:(id)arg3 result:(id)arg4 comparator:(/*^block*/id)arg5 warn:(BOOL)arg6 ;
-(id)topologicalSortedItems;
@end

