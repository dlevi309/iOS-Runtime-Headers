/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLIndexMapperDataSource;
@interface PLIndexMapper : NSObject {

	id<PLIndexMapperDataSource> _dataSource;

}
-(id)indexesForBackingIndexes:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(unsigned long long)backingIndexForIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexForBackingIndex:(unsigned long long)arg1 ;
-(BOOL)applyContainerChangeNotification:(id)arg1 changeTypes:(int)arg2 toFilteredIndexes:(id)arg3 ;
-(id)backingIndexesForIndexes:(id)arg1 ;
@end

