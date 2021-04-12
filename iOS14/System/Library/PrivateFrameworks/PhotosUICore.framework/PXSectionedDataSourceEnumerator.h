/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXEnumerator.h>

@class NSNumber, PXSectionedDataSource, PXIndexPathSet;

@interface PXSectionedDataSourceEnumerator : PXEnumerator {

	NSNumber* _cachedCount;
	long long _currentPhase;
	PXSimpleIndexPath _lastIndexPath;
	PXSectionedDataSource* _dataSource;
	PXIndexPathSet* _indexPathSet;
	unsigned long long _enumeratedTypes;

}

@property (nonatomic,readonly) PXSectionedDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) PXIndexPathSet * indexPathSet;                   //@synthesize indexPathSet=_indexPathSet - In the implementation block
@property (nonatomic,readonly) unsigned long long enumeratedTypes;              //@synthesize enumeratedTypes=_enumeratedTypes - In the implementation block
-(id)nextObject;
-(id)init;
-(PXIndexPathSet *)indexPathSet;
-(PXSectionedDataSource *)dataSource;
-(unsigned long long)count;
-(void)reset;
-(id)initWithDataSource:(id)arg1 indexPathSet:(id)arg2 enumeratedTypes:(unsigned long long)arg3 ;
-(void)_setToInitialState;
-(unsigned long long)enumeratedTypes;
-(PXSimpleIndexPath)_nextSectionIndexPathFromIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)_nextItemIndexPathFromIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)_nextSubitemIndexPathFromIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)_transitionToNextPhase;
@end

