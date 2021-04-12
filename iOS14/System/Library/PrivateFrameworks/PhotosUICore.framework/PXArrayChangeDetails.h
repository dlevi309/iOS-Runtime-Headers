/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexSet, NSDictionary;

@interface PXArrayChangeDetails : NSObject <NSMutableCopying, NSCopying> {

	NSIndexSet* _removedIndexes;
	NSIndexSet* _insertedIndexes;
	NSIndexSet* _movesToIndexes;
	const CFArrayRef _movesFromIndexes;
	NSIndexSet* _changedIndexes;
	NSDictionary* _indexesWithChangesByProperty;

}

@property (nonatomic,retain) NSDictionary * indexesWithChangesByProperty;              //@synthesize indexesWithChangesByProperty=_indexesWithChangesByProperty - In the implementation block
@property (nonatomic,readonly) BOOL hasIncrementalChanges; 
@property (nonatomic,readonly) NSIndexSet * removedIndexes;                            //@synthesize removedIndexes=_removedIndexes - In the implementation block
@property (nonatomic,readonly) NSIndexSet * insertedIndexes;                           //@synthesize insertedIndexes=_insertedIndexes - In the implementation block
@property (nonatomic,readonly) BOOL hasMoves; 
@property (nonatomic,readonly) NSIndexSet * movesToIndexes;                            //@synthesize movesToIndexes=_movesToIndexes - In the implementation block
@property (nonatomic,readonly) const CFArrayRef movesFromIndexes;                      //@synthesize movesFromIndexes=_movesFromIndexes - In the implementation block
@property (nonatomic,readonly) NSIndexSet * changedIndexes;                            //@synthesize changedIndexes=_changedIndexes - In the implementation block
@property (nonatomic,readonly) BOOL hasAnyChanges; 
@property (nonatomic,readonly) BOOL hasAnyInsertionsRemovalsOrMoves; 
+(BOOL)_mutableCopyInputs;
+(id)changeDetailsFromArray:(id)arg1 toArray:(id)arg2 changedObjects:(id)arg3 ;
+(id)changeDetailsFromFetchResultChangeDetails:(id)arg1 ;
+(id)changeDetailsFromArray:(id)arg1 toArray:(id)arg2 changedObjects:(id)arg3 objectComparator:(/*^block*/id)arg4 ;
+(id)changeDetailsFromFetchResultChangeDetails:(id)arg1 originatingChange:(id)arg2 ;
+(id)changeDetailsWithNoChanges;
+(id)changeDetailsWithInsertedIndexRange:(NSRange)arg1 ;
+(id)changeDetailsWithRemovedIndexRange:(NSRange)arg1 ;
+(id)changeDetailsWithChangedIndexRange:(NSRange)arg1 ;
+(id)changeDetailsWithChangedIndexes:(id)arg1 ;
+(id)changeDetailsWithMovedFromIndexRange:(NSRange)arg1 toIndexRange:(NSRange)arg2 ;
+(unsigned long long)indexAfterApplyingChanges:(id)arg1 toIndex:(unsigned long long)arg2 objectChanged:(out BOOL*)arg3 ;
+(id)changeDetailsWithOldKeyItemIndex:(long long)arg1 oldCount:(long long)arg2 newKeyItemIndex:(long long)arg3 newCount:(long long)arg4 ;
+(unsigned long long)indexAfterRevertingChanges:(id)arg1 fromIndex:(unsigned long long)arg2 objectChanged:(out BOOL*)arg3 ;
+(id)changeDetailsWithNoIncrementalChanges;
-(NSIndexSet *)insertedIndexes;
-(void)setIndexesWithChangesByProperty:(NSDictionary *)arg1 ;
-(NSIndexSet *)removedIndexes;
-(id)init;
-(void)enumerateMovedRangesUsingBlock:(/*^block*/id)arg1 ;
-(id)indexSetAfterApplyingChangesToIndexSet:(id)arg1 ;
-(id)changeDetailsShiftedBy:(long long)arg1 scaledBy:(long long)arg2 ;
-(void)applyToIndexSet:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)hasAnyInsertionsRemovalsOrMoves;
-(void)applyToDictionary:(id)arg1 removalHandler:(/*^block*/id)arg2 moveHandler:(/*^block*/id)arg3 ;
-(id)changeDetailsByAddingChangeDetails:(id)arg1 ;
-(id)description;
-(id)indexSetAfterRevertingChangesToIndexSet:(id)arg1 ;
-(NSDictionary *)indexesWithChangesByProperty;
-(id)changeDetailsShiftedBy:(long long)arg1 ;
-(BOOL)hasIncrementalChanges;
-(BOOL)hasMoves;
-(id)initWithIncrementalChangeDetailsRemovedIndexes:(id)arg1 insertedIndexes:(id)arg2 movesToIndexes:(id)arg3 movesFromIndexes:(const CFArrayRef)arg4 changedIndexes:(id)arg5 indexesWithChangesByProperty:(id)arg6 ;
-(id)initWithIncrementalChangeDetailsRemovedIndexes:(id)arg1 insertedIndexes:(id)arg2 movesToIndexes:(id)arg3 movesFromIndexes:(const CFArrayRef)arg4 changedIndexes:(id)arg5 ;
-(const CFArrayRef)movesFromIndexes;
-(id)changeDetailsByAddingChangedIndexes:(id)arg1 ;
-(id)changedPropertiesForIndex:(long long)arg1 ;
-(NSIndexSet *)movesToIndexes;
-(void)enumerateMovedIndexesUsingBlock:(/*^block*/id)arg1 ;
-(id)indexesWithChangesToProperty:(id)arg1 ;
-(unsigned long long)indexAfterApplyingChangesToIndex:(unsigned long long)arg1 ;
-(BOOL)isOnlyInsertionAtEnd:(BOOL*)arg1 orRemovalAtEnd:(BOOL*)arg2 countBeforeChange:(long long)arg3 countAfterChange:(long long)arg4 ;
-(NSIndexSet *)changedIndexes;
-(BOOL)hasAnyChanges;
-(BOOL)canPreserveIncrementalChangesWhenAddingChangeDetails:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)indexAfterRevertingChangesFromIndex:(unsigned long long)arg1 ;
@end

