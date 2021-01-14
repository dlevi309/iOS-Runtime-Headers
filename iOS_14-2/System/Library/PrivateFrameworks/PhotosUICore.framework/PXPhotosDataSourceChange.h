/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSDictionary, PHFetchResultChangeDetails, NSIndexSet, NSArray, PXSectionedDataSourceChangeDetails, PHChange;

@interface PXPhotosDataSourceChange : NSObject {

	long long _previousCollectionsCount;
	NSDictionary* _assetCollectionToSectionCache;
	PHFetchResultChangeDetails* _collectionListChangeDetails;
	NSDictionary* _assetCollectionChangeDetails;
	BOOL _prepared;
	NSIndexSet* _deletedSections;
	NSIndexSet* _insertedSections;
	NSIndexSet* _changedSections;
	NSArray* _deletedIndexPaths;
	NSArray* _insertedIndexPaths;
	NSArray* _changedIndexPaths;
	NSArray* _contentChangedIndexPaths;
	NSArray* _favoriteChangedIndexPaths;
	BOOL _changesAreNoOp;
	PXSectionedDataSourceChangeDetails* _sectionedDataSourceChangeDetails;
	NSIndexSet* _sectionsWithKeyAssetChanges;
	PHChange* _originatingPhotoLibraryChange;

}

@property (readonly) BOOL hasIncrementalChanges; 
@property (readonly) BOOL changesAreNoOp; 
@property (copy,readonly) NSIndexSet * deletedSections; 
@property (copy,readonly) NSIndexSet * insertedSections; 
@property (copy,readonly) NSIndexSet * changedSections; 
@property (copy,readonly) NSArray * deletedIndexPaths; 
@property (copy,readonly) NSArray * insertedIndexPaths; 
@property (copy,readonly) NSArray * changedIndexPaths; 
@property (copy,readonly) NSArray * contentChangedIndexPaths; 
@property (copy,readonly) NSArray * favoriteChangedIndexPaths; 
@property (__weak,readonly) PHChange * originatingPhotoLibraryChange;                                    //@synthesize originatingPhotoLibraryChange=_originatingPhotoLibraryChange - In the implementation block
@property (readonly) PXSectionedDataSourceChangeDetails * sectionedDataSourceChangeDetails;              //@synthesize sectionedDataSourceChangeDetails=_sectionedDataSourceChangeDetails - In the implementation block
@property (nonatomic,readonly) NSIndexSet * sectionsWithKeyAssetChanges;                                 //@synthesize sectionsWithKeyAssetChanges=_sectionsWithKeyAssetChanges - In the implementation block
-(id)initWithIncrementalChanges:(id)arg1 assetCollectionChangeDetails:(id)arg2 sectionsWithKeyAssetChanges:(id)arg3 previousCollectionsCount:(long long)arg4 assetCollectionToSectionCache:(id)arg5 originatingPhotoLibraryChange:(id)arg6 fromIdentifier:(unsigned long long)arg7 toIdentifier:(unsigned long long)arg8 ;
-(void)prepareIfNeeded;
-(PXSectionedDataSourceChangeDetails *)sectionedDataSourceChangeDetails;
-(void)_prepareIncrementalDetails;
-(id)indexPathAfterRevertingIncrementalChangeDetailsFromIndexPath:(id)arg1 ;
-(BOOL)changesAreNoOp;
-(id)indexPathAfterApplyingIncrementalChangesToIndexPath:(id)arg1 ;
-(PHChange *)originatingPhotoLibraryChange;
-(NSArray *)deletedIndexPaths;
-(NSArray *)favoriteChangedIndexPaths;
-(NSArray *)contentChangedIndexPaths;
-(id)description;
-(NSIndexSet *)sectionsWithKeyAssetChanges;
-(BOOL)hasIncrementalChanges;
-(NSIndexSet *)deletedSections;
-(NSIndexSet *)changedSections;
-(BOOL)affectsSectionsInRange:(NSRange)arg1 ;
-(id)initWithFromIdentifier:(unsigned long long)arg1 toIdentifier:(unsigned long long)arg2 ;
-(BOOL)_shouldPerformFullReloadForCollectionListChangeNotifications:(id)arg1 collectionChangeNotifications:(id)arg2 ;
-(NSArray *)insertedIndexPaths;
-(NSIndexSet *)insertedSections;
-(NSArray *)changedIndexPaths;
@end

