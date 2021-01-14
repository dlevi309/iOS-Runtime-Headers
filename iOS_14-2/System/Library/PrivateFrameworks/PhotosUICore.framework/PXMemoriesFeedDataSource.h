/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>
#import <libobjc.A.dylib/PXSectionedLayoutEngineDataSourceSnapshot.h>

@class NSArray, NSString;

@interface PXMemoriesFeedDataSource : PXSectionedDataSource <PXSectionedLayoutEngineDataSourceSnapshot> {

	NSArray* _entries;
	PXSimpleIndexPath _indexPathForFirstPastMemorySection;

}

@property (assign,nonatomic) PXSimpleIndexPath indexPathForFirstPastMemorySection;              //@synthesize indexPathForFirstPastMemorySection=_indexPathForFirstPastMemorySection - In the implementation block
@property (nonatomic,copy,readonly) NSArray * entries;                                          //@synthesize entries=_entries - In the implementation block
@property (nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) unsigned long long identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEntries:(id)arg1 ;
-(id)init;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(PXSimpleIndexPath)_firstSectionIndexPath;
-(void)_enumerateSectionIndexPathsStartingAtIndexPath:(PXSimpleIndexPath)arg1 reverseDirection:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_enumerateSectionIndexPathsWithHintIndexPath:(PXSimpleIndexPath)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateItemIndexPathsWithHintIndexPath:(PXSimpleIndexPath)arg1 usingBlock:(/*^block*/id)arg2 ;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 withHintIndexPath:(PXSimpleIndexPath)arg2 ;
-(id)sectionedObjectReferenceForMemoryUUID:(id)arg1 ;
-(PXSimpleIndexPath)indexPathForFirstPastMemorySection;
-(void)setIndexPathForFirstPastMemorySection:(PXSimpleIndexPath)arg1 ;
-(NSArray *)entries;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)inputForItem:(id)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 ;
@end

