/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


#import <Photos/Photos-Structs.h>
@class PHFetchResult, NSArray, NSIndexSet;

@interface PHFetchResultChangeDetails : NSObject {

	PHFetchResult* _fetchResultBeforeChanges;
	PHFetchResult* _fetchResultAfterChanges;
	NSArray* _previousObjects;
	NSArray* _currentObjects;
	NSIndexSet* _removedIndexes;
	NSIndexSet* _insertedIndexes;
	NSIndexSet* _movedIndexes;
	CFArrayRef _movedFromIndexes;
	NSArray* _changedOIDs;
	NSIndexSet* _changedIndexes;
	BOOL _skipIncrementalChanges;

}

@property (nonatomic,readonly) NSIndexSet * movedIndexes; 
@property (nonatomic,readonly) const CFArrayRef movedFromIndexes; 
@property (nonatomic,readonly) BOOL hasAnyChanges; 
@property (readonly) PHFetchResult * fetchResultBeforeChanges; 
@property (readonly) PHFetchResult * fetchResultAfterChanges; 
@property (readonly) BOOL hasIncrementalChanges; 
@property (readonly) NSIndexSet * removedIndexes; 
@property (readonly) NSArray * removedObjects; 
@property (readonly) NSIndexSet * insertedIndexes; 
@property (readonly) NSArray * insertedObjects; 
@property (readonly) NSIndexSet * changedIndexes; 
@property (readonly) NSArray * changedObjects; 
@property (readonly) BOOL hasMoves; 
+(id)_identifiersForPHObjects:(id)arg1 ;
+(id)changeDetailsFromFetchResult:(id)arg1 toFetchResult:(id)arg2 changedObjects:(id)arg3 ;
-(NSIndexSet *)insertedIndexes;
-(NSIndexSet *)removedIndexes;
-(void)calculateDiffsAndAccumulateInsertedCount:(unsigned long long*)arg1 updatedCount:(unsigned long long*)arg2 deletedCount:(unsigned long long*)arg3 ;
-(void)calculateDiffs;
-(BOOL)hasDiffs;
-(NSArray *)removedObjects;
-(NSArray *)insertedObjects;
-(BOOL)shouldReload;
-(PHFetchResult *)fetchResultBeforeChanges;
-(id)description;
-(id)initWithFetchResult:(id)arg1 currentFetchResult:(id)arg2 changedOIDs:(id)arg3 unknownMergeEvent:(BOOL)arg4 ;
-(BOOL)hasIncrementalChanges;
-(BOOL)hasMoves;
-(const CFArrayRef)movedFromIndexes;
-(NSArray *)changedObjects;
-(NSIndexSet *)movedIndexes;
-(unsigned long long)snapshotIndexForContainedObject:(id)arg1 ;
-(PHFetchResult *)fetchResultAfterChanges;
-(NSIndexSet *)changedIndexes;
-(BOOL)hasAnyChanges;
-(void)enumerateMovesWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)initWithManualFetchResultAfterChanges:(id)arg1 ;
@end

