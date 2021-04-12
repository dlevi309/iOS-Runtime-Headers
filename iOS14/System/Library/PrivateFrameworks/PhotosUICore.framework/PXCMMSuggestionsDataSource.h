/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, PXCMMSuggestionsDataSourceState;

@interface PXCMMSuggestionsDataSource : PXSectionedDataSource {

	NSObject*<OS_dispatch_queue> _queue;
	PXCMMSuggestionsDataSourceState* __state;

}

@property (nonatomic,readonly) PXCMMSuggestionsDataSourceState * _state;              //@synthesize _state=__state - In the implementation block
-(id)initWithState:(id)arg1 ;
-(PXCMMSuggestionsDataSourceState *)_state;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 ;
-(id)suggestionAtItemIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)_adjustedIndexFromIndex:(long long)arg1 ;
@end

