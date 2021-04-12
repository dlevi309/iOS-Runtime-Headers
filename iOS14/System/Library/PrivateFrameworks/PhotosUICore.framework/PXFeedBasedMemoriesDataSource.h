/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXMemoriesDataSource.h>

@class NSArray;

@interface PXFeedBasedMemoriesDataSource : PXMemoriesDataSource {

	NSArray* _entries;

}

@property (nonatomic,copy,readonly) NSArray * entries;              //@synthesize entries=_entries - In the implementation block
-(id)initWithDataSource:(id)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)sectionedObjectReferenceForMemoryUUID:(id)arg1 ;
-(NSArray *)entries;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 ;
@end

