/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSSortDescriptor, NSIndexSet, NSDictionary;

@interface PXAssetSortByDatesFetchResult : NSObject {

	NSSortDescriptor* _sortDescriptor;
	NSIndexSet* _fetchedIndexes;
	NSDictionary* _dateByIndex;

}

@property (nonatomic,readonly) NSSortDescriptor * sortDescriptor;              //@synthesize sortDescriptor=_sortDescriptor - In the implementation block
@property (nonatomic,readonly) NSIndexSet * fetchedIndexes;                    //@synthesize fetchedIndexes=_fetchedIndexes - In the implementation block
@property (nonatomic,readonly) NSDictionary * dateByIndex;                     //@synthesize dateByIndex=_dateByIndex - In the implementation block
-(id)initWithSortDescriptor:(id)arg1 fetchedIndexes:(id)arg2 dateByIndex:(id)arg3 ;
-(void)enumerateFetchedItemsUsingBlock:(/*^block*/id)arg1 ;
-(NSIndexSet *)fetchedIndexes;
-(NSDictionary *)dateByIndex;
-(NSSortDescriptor *)sortDescriptor;
@end

