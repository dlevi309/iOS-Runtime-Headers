/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary;

@interface PXIndexPathSet : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* __sectionIndexesByDataSourceIdentifier;
	NSMutableDictionary* __indexesForSectionsWithItemsByDataSourceIdentifier;
	NSMutableDictionary* __itemIndexesBySectionByDataSourceIdentifier;
	NSMutableDictionary* __indexesForItemsWithSubitemsBySectionByDataSourceIdentifier;
	NSMutableDictionary* __subitemIndexesByItemBySectionByDataSourceIdentifier;

}

@property (nonatomic,readonly) NSMutableDictionary * _sectionIndexesByDataSourceIdentifier;                                    //@synthesize _sectionIndexesByDataSourceIdentifier=__sectionIndexesByDataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _indexesForSectionsWithItemsByDataSourceIdentifier;                       //@synthesize _indexesForSectionsWithItemsByDataSourceIdentifier=__indexesForSectionsWithItemsByDataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _itemIndexesBySectionByDataSourceIdentifier;                              //@synthesize _itemIndexesBySectionByDataSourceIdentifier=__itemIndexesBySectionByDataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _indexesForItemsWithSubitemsBySectionByDataSourceIdentifier;              //@synthesize _indexesForItemsWithSubitemsBySectionByDataSourceIdentifier=__indexesForItemsWithSubitemsBySectionByDataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _subitemIndexesByItemBySectionByDataSourceIdentifier;                     //@synthesize _subitemIndexesByItemBySectionByDataSourceIdentifier=__subitemIndexesByItemBySectionByDataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) long long sectionCount; 
@property (nonatomic,readonly) long long itemCount; 
@property (nonatomic,readonly) long long subitemCount; 
@property (nonatomic,readonly) PXSimpleIndexPath anySectionIndexPath; 
@property (nonatomic,readonly) PXSimpleIndexPath anyItemIndexPath; 
@property (nonatomic,readonly) PXSimpleIndexPath anySubitemIndexPath; 
+(id)indexPathSet;
+(id)indexPathSetWithIndexPath:(PXSimpleIndexPath)arg1 ;
+(id)indexPathSetWithSectionIndexes:(id)arg1 dataSourceIdentifier:(unsigned long long)arg2 ;
+(id)indexPathSetWithItemIndexes:(id)arg1 dataSourceIdentifier:(unsigned long long)arg2 section:(long long)arg3 ;
+(id)indexPathSetWithItemIndexPaths:(id)arg1 dataSourceIdentifier:(unsigned long long)arg2 ;
+(id)indexPathSetWithSubitemIndexes:(id)arg1 dataSourceIdentifier:(unsigned long long)arg2 section:(long long)arg3 item:(long long)arg4 ;
-(id)init;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(long long)count;
-(BOOL)containsIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)itemCount;
-(void)enumerateItemIndexSetsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(id)description;
-(BOOL)intersectsSet:(id)arg1 ;
-(long long)subitemCount;
-(NSMutableDictionary *)_indexesForItemsWithSubitemsBySectionByDataSourceIdentifier;
-(NSMutableDictionary *)_subitemIndexesByItemBySectionByDataSourceIdentifier;
-(NSMutableDictionary *)_indexesForSectionsWithItemsByDataSourceIdentifier;
-(NSMutableDictionary *)_itemIndexesBySectionByDataSourceIdentifier;
-(NSMutableDictionary *)_sectionIndexesByDataSourceIdentifier;
-(void)enumerateSubitemIndexSetsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSectionIndexSetsUsingBlock:(/*^block*/id)arg1 ;
-(PXSimpleIndexPath)anySectionIndexPath;
-(PXSimpleIndexPath)anyItemIndexPath;
-(PXSimpleIndexPath)anySubitemIndexPath;
-(id)sectionIndexSetForDataSourceIdentifier:(unsigned long long)arg1 ;
-(id)sectionsWithItemsForDataSourceIdentifier:(unsigned long long)arg1 ;
-(id)itemIndexSetForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2 ;
-(id)itemsWithSubitemsForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2 ;
-(id)subitemIndexSetForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2 item:(long long)arg3 ;
-(void)enumerateSectionIndexPathsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSubitemIndexPathsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateAllIndexPathsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateDataSourceIdentifiers:(/*^block*/id)arg1 ;
-(PXSimpleIndexPath)firstItemIndexPathForDataSourceIdentifier:(unsigned long long)arg1 ;
-(PXSimpleIndexPath)lastItemIndexPathForDataSourceIdentifier:(unsigned long long)arg1 ;
-(PXSimpleIndexPath)indexPathGreaterThanIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathLessThanIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)indexPathSetByReplacingDataSourceIdentifier:(unsigned long long)arg1 withDataSourceIdentifier:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)enumerateItemIndexPathsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)sectionCount;
@end

