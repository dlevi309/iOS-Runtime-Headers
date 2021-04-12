/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXSectionedLayoutDataSourceChangeDetails.h>

@class PXArrayChangeDetails, NSIndexSet, NSDictionary, NSNumber, NSString;

@interface PXSectionedDataSourceChangeDetails : NSObject <PXSectionedLayoutDataSourceChangeDetails> {

	NSDictionary* _itemChangeDetailsBySection;
	NSDictionary* _itemsWithSubitemChangesBySection;
	NSDictionary* _subitemChangeDetailsByItemBySection;
	NSNumber* _hasAnyChangesCache;
	NSNumber* _hasAnyInsertionsRemovalsOrMovesCache;
	unsigned long long _fromDataSourceIdentifier;
	unsigned long long _toDataSourceIdentifier;
	PXArrayChangeDetails* _sectionChanges;
	NSIndexSet* _sectionsWithItemChanges;

}

@property (nonatomic,readonly) unsigned long long fromDataSourceIdentifier;              //@synthesize fromDataSourceIdentifier=_fromDataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long toDataSourceIdentifier;                //@synthesize toDataSourceIdentifier=_toDataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) PXArrayChangeDetails * sectionChanges;                    //@synthesize sectionChanges=_sectionChanges - In the implementation block
@property (nonatomic,readonly) NSIndexSet * sectionsWithItemChanges;                     //@synthesize sectionsWithItemChanges=_sectionsWithItemChanges - In the implementation block
@property (nonatomic,readonly) BOOL hasAnyChanges; 
@property (nonatomic,readonly) BOOL hasAnyInsertionsRemovalsOrMoves; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(PXSimpleIndexPath)indexPathAfterApplyingChanges:(id)arg1 toIndexPath:(PXSimpleIndexPath)arg2 hasIncrementalChanges:(out BOOL*)arg3 objectChanged:(out BOOL*)arg4 ;
+(PXSimpleIndexPath)indexPathAfterApplyingChanges:(id)arg1 toIndexPath:(PXSimpleIndexPath)arg2 hasIncrementalChanges:(out BOOL*)arg3 objectChanged:(out BOOL*)arg4 changedProperties:(id)arg5 ;
+(PXSimpleIndexPath)indexPathAfterRevertingChanges:(id)arg1 fromIndexPath:(PXSimpleIndexPath)arg2 hasIncrementalChanges:(out BOOL*)arg3 objectChanged:(out BOOL*)arg4 ;
+(PXSimpleIndexPath)indexPathAfterRevertingChanges:(id)arg1 fromIndexPath:(PXSimpleIndexPath)arg2 hasIncrementalChanges:(out BOOL*)arg3 objectChanged:(out BOOL*)arg4 changedProperties:(id)arg5 ;
+(id)indexPathSetAfterApplyingChanges:(id)arg1 toIndexPathSet:(id)arg2 hasIncrementalChanges:(out BOOL*)arg3 ;
+(BOOL)changesHaveAnyInsertionsRemovalsOrMoves:(id)arg1 ;
+(id)indexPathSetAfterRevertingChanges:(id)arg1 fromIndexPathSet:(id)arg2 hasIncrementalChanges:(out BOOL*)arg3 ;
+(id)changeDetailsWithoutIncrementalChangesFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 ;
+(id)changeDetailsWithNoChangesFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 ;
+(BOOL)changeDetailsAreOnlyInsertionsOrOnlyRemovalsAtEnd:(id)arg1 fromDataSource:(id)arg2 toDataSource:(id)arg3 ;
+(void)debug_assertValidChangeDetails:(id)arg1 fromDataSource:(id)arg2 toDataSource:(id)arg3 ;
-(id)init;
-(BOOL)hasAnyInsertionsRemovalsOrMoves;
-(NSString *)description;
-(PXArrayChangeDetails *)sectionChanges;
-(PXSimpleIndexPath)indexPathAfterApplyingChangesToIndexPath:(PXSimpleIndexPath)arg1 hasIncrementalChanges:(out BOOL*)arg2 objectChanged:(out BOOL*)arg3 ;
-(id)deletedItemsInSection:(long long)arg1 ;
-(id)initWithFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 sectionChanges:(id)arg3 itemChangeDetailsBySection:(id)arg4 subitemChangeDetailsByItemBySection:(id)arg5 ;
-(id)subitemChangesInItem:(long long)arg1 section:(long long)arg2 ;
-(unsigned long long)fromDataSourceIdentifier;
-(PXSimpleIndexPath)indexPathAfterApplyingChangesToIndexPath:(PXSimpleIndexPath)arg1 hasIncrementalChanges:(out BOOL*)arg2 objectChanged:(out BOOL*)arg3 changedProperties:(id)arg4 ;
-(PXSimpleIndexPath)indexPathAfterRevertingChangesFromIndexPath:(PXSimpleIndexPath)arg1 hasIncrementalChanges:(out BOOL*)arg2 objectChanged:(out BOOL*)arg3 ;
-(id)insertedItemsInSection:(long long)arg1 ;
-(PXSimpleIndexPath)indexPathAfterRevertingChangesFromIndexPath:(PXSimpleIndexPath)arg1 hasIncrementalChanges:(out BOOL*)arg2 objectChanged:(out BOOL*)arg3 changedProperties:(id)arg4 ;
-(id)indexPathSetAfterApplyingChangesToIndexPathSet:(id)arg1 hasIncrementalChanges:(out BOOL*)arg2 ;
-(id)changedItemsInSection:(long long)arg1 ;
-(unsigned long long)toDataSourceIdentifier;
-(id)indexPathSetAfterRevertingChangesFromIndexPathSet:(id)arg1 hasIncrementalChanges:(out BOOL*)arg2 ;
-(id)itemsWithSubitemChangesInSection:(long long)arg1 ;
-(NSIndexSet *)sectionsWithItemChanges;
-(id)itemChangesInSection:(long long)arg1 ;
-(BOOL)hasAnyChanges;
@end

