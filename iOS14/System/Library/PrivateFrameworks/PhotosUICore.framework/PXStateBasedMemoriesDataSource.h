/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXMemoriesDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, PXMemoriesDataSourceState;

@interface PXStateBasedMemoriesDataSource : PXMemoriesDataSource {

	NSObject*<OS_dispatch_queue> _queue;
	PXMemoriesDataSourceState* __state;

}

@property (nonatomic,readonly) PXMemoriesDataSourceState * _state;              //@synthesize _state=__state - In the implementation block
-(id)initWithState:(id)arg1 ;
-(PXMemoriesDataSourceState *)_state;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 ;
@end

