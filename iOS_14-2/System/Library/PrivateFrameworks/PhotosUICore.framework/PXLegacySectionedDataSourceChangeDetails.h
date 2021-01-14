/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSIndexSet, NSArray, PXSectionedDataSourceChangeDetails;

@interface PXLegacySectionedDataSourceChangeDetails : NSObject {

	NSIndexSet* _deletedSections;
	NSIndexSet* _insertedSections;
	NSIndexSet* _changedSections;
	NSArray* _deletedIndexPaths;
	NSArray* _insertedIndexPaths;
	NSArray* _changedIndexPaths;
	NSArray* _contentChangedIndexPaths;
	long long _shiftingSectionLocation;
	BOOL _prepared;
	BOOL _hasIncrementalChanges;
	BOOL _hasMoves;
	PXSectionedDataSourceChangeDetails* _sectionedDataSourceChangeDetails;
	NSArray* _contentItemsChangedIndexPaths;

}

@property (nonatomic,readonly) PXSectionedDataSourceChangeDetails * sectionedDataSourceChangeDetails;              //@synthesize sectionedDataSourceChangeDetails=_sectionedDataSourceChangeDetails - In the implementation block
@property (nonatomic,readonly) BOOL hasIncrementalChanges; 
@property (nonatomic,readonly) NSIndexSet * deletedSections; 
@property (nonatomic,readonly) NSIndexSet * insertedSections; 
@property (nonatomic,readonly) NSIndexSet * changedSections; 
@property (nonatomic,readonly) NSArray * deletedItemsIndexPaths; 
@property (nonatomic,readonly) NSArray * insertedItemsIndexPaths; 
@property (nonatomic,readonly) NSArray * changedItemsIndexPaths; 
@property (nonatomic,readonly) NSArray * contentItemsChangedIndexPaths;                                            //@synthesize contentItemsChangedIndexPaths=_contentItemsChangedIndexPaths - In the implementation block
@property (nonatomic,readonly) BOOL hasMoves; 
-(void)prepareIfNeeded;
-(PXSectionedDataSourceChangeDetails *)sectionedDataSourceChangeDetails;
-(void)_prepareIncrementalDetails;
-(id)description;
-(BOOL)hasIncrementalChanges;
-(NSArray *)insertedItemsIndexPaths;
-(NSArray *)changedItemsIndexPaths;
-(NSArray *)contentItemsChangedIndexPaths;
-(NSArray *)deletedItemsIndexPaths;
-(id)initWithSectionedDataSourceChangeDetails:(id)arg1 shiftedSection:(long long)arg2 ;
-(BOOL)hasMoves;
-(NSIndexSet *)deletedSections;
-(NSIndexSet *)changedSections;
-(void)enumerateMovedIndexPathsUsingBlock:(/*^block*/id)arg1 ;
-(id)contentChangedItemsIndexPaths;
-(NSIndexSet *)insertedSections;
@end

