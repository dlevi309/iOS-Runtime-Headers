/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLIndexMapperDataSource;
@interface PLIndexMapper : NSObject {

	id<PLIndexMapperDataSource> _dataSource;

}
-(id)initWithDataSource:(id)arg1 ;
-(id)backingIndexesForIndexes:(id)arg1 ;
-(unsigned long long)backingIndexForIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexForBackingIndex:(unsigned long long)arg1 ;
-(BOOL)applyContainerChangeNotification:(id)arg1 changeTypes:(int)arg2 toFilteredIndexes:(id)arg3 ;
-(id)indexesForBackingIndexes:(id)arg1 ;
@end

