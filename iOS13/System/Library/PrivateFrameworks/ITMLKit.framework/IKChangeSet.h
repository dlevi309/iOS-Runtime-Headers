/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSIndexSet, NSDictionary;

@interface IKChangeSet : NSObject {

	NSIndexSet* _addedIndexes;
	NSIndexSet* _removedIndexes;
	NSDictionary* _movedIndexesByNewIndex;
	NSDictionary* _updatedIndexesByNewIndex;

}

@property (nonatomic,copy,readonly) NSIndexSet * addedIndexes;                            //@synthesize addedIndexes=_addedIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * removedIndexes;                          //@synthesize removedIndexes=_removedIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * movedIndexesByNewIndex;                //@synthesize movedIndexesByNewIndex=_movedIndexesByNewIndex - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * updatedIndexesByNewIndex;              //@synthesize updatedIndexesByNewIndex=_updatedIndexesByNewIndex - In the implementation block
-(NSIndexSet *)removedIndexes;
-(id)initWithAddedIndexes:(id)arg1 removedIndexes:(id)arg2 movedIndexesByNewIndex:(id)arg3 updatedIndexesByNewIndex:(id)arg4 ;
-(NSDictionary *)movedIndexesByNewIndex;
-(NSIndexSet *)addedIndexes;
-(long long)oldIndexForNewIndex:(long long)arg1 ;
-(NSDictionary *)updatedIndexesByNewIndex;
-(id)changeSetByConcatenatingChangeSet:(id)arg1 ;
-(long long)newIndexForOldIndex:(long long)arg1 ;
-(id)changeSetByConvertingOldIndexesUsingChangeSet:(id)arg1 andNewIndexesUsingChangeSet:(id)arg2 ;
-(long long)newIndexByShiftingOldIndex:(long long)arg1 grouped:(BOOL)arg2 ;
-(id)changeSetBySubtractingChangeSet:(id)arg1 ;
@end

