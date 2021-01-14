/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSIndexSet, NSDictionary;

@interface IKChangeSet : NSObject {

	BOOL _reducing;
	NSIndexSet* _addedIndexes;
	NSIndexSet* _removedIndexes;
	NSDictionary* _movedIndexesByNewIndex;
	NSDictionary* _updatedIndexesByNewIndex;

}

@property (getter=isReducing,nonatomic,readonly) BOOL reducing;                           //@synthesize reducing=_reducing - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * addedIndexes;                            //@synthesize addedIndexes=_addedIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * removedIndexes;                          //@synthesize removedIndexes=_removedIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * movedIndexesByNewIndex;                //@synthesize movedIndexesByNewIndex=_movedIndexesByNewIndex - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * updatedIndexesByNewIndex;              //@synthesize updatedIndexesByNewIndex=_updatedIndexesByNewIndex - In the implementation block
-(NSIndexSet *)removedIndexes;
-(NSDictionary *)updatedIndexesByNewIndex;
-(NSIndexSet *)addedIndexes;
-(NSDictionary *)movedIndexesByNewIndex;
-(id)initWithAddedIndexes:(id)arg1 removedIndexes:(id)arg2 movedIndexesByNewIndex:(id)arg3 updatedIndexesByNewIndex:(id)arg4 ;
-(long long)oldIndexForNewIndex:(long long)arg1 ;
-(id)changeSetByConcatenatingChangeSet:(id)arg1 ;
-(long long)newIndexForOldIndex:(long long)arg1 ;
-(BOOL)isReducing;
-(id)inverseChangeSet;
-(long long)newIndexByShiftingOldIndex:(long long)arg1 grouped:(BOOL)arg2 ;
-(id)changeSetBySubtractingChangeSet:(id)arg1 ;
-(id)changeSetByConvertingOldIndexesUsingChangeSet:(id)arg1 andNewIndexesUsingChangeSet:(id)arg2 ;
@end

