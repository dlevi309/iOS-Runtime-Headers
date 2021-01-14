/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>

@class NSArray;

@interface PXRelatedDataSource : PXSectionedDataSource {

	BOOL _transient;
	BOOL _useItemIndexPaths;
	NSArray* _relatedEntries;

}

@property (nonatomic,copy,readonly) NSArray * relatedEntries;                  //@synthesize relatedEntries=_relatedEntries - In the implementation block
@property (getter=isTransient,nonatomic,readonly) BOOL transient;              //@synthesize transient=_transient - In the implementation block
@property (nonatomic,readonly) BOOL useItemIndexPaths;                         //@synthesize useItemIndexPaths=_useItemIndexPaths - In the implementation block
-(BOOL)isTransient;
-(BOOL)useItemIndexPaths;
-(id)init;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 ;
-(id)relatedEntryAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)initWithRelatedEntries:(id)arg1 isTransient:(BOOL)arg2 useItemIndexPaths:(BOOL)arg3 ;
-(id)_relatedEntryAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathForRelatedEntry:(id)arg1 ;
-(NSArray *)relatedEntries;
@end

