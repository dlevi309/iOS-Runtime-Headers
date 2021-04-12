/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeItem:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(id)init;
-(NSArray *)allItems;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(id)initWithPointerFunctions:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)containsItem:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_enumerateSortedFirstLevelDependenciesOfItem:(id)arg1 usingComparator:(/*^block*/id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)markItem:(id)arg1 dependentOnItem:(id)arg2 ;
-(BOOL)item:(id)arg1 isDependencyOfItem:(id)arg2 ;
-(void)enumerateDependenciesOfItem:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)topologicalSortedItemsWithComparator:(/*^block*/id)arg1 ;
-(void)_visitNode:(id)arg1 visited:(id)arg2 temporary:(id)arg3 result:(id)arg4 comparator:(/*^block*/id)arg5 warn:(BOOL)arg6 ;
-(id)topologicalSortedItems;
@end

