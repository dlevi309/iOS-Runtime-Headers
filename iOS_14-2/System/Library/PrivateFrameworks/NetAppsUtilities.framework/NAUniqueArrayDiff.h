/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/


@class NSArray, NSIndexSet, NSSet;

@interface NAUniqueArrayDiff : NSObject {

	NSArray* _fromArray;
	NSArray* _toArray;
	NSIndexSet* _deletedIndexes;
	NSIndexSet* _insertedIndexes;
	NSIndexSet* _changedIndexes;
	NSSet* _movedIndexes;

}

@property (nonatomic,retain) NSArray * fromArray;                                  //@synthesize fromArray=_fromArray - In the implementation block
@property (nonatomic,retain) NSArray * toArray;                                    //@synthesize toArray=_toArray - In the implementation block
@property (nonatomic,retain) NSIndexSet * deletedIndexes;                          //@synthesize deletedIndexes=_deletedIndexes - In the implementation block
@property (nonatomic,retain) NSIndexSet * insertedIndexes;                         //@synthesize insertedIndexes=_insertedIndexes - In the implementation block
@property (nonatomic,retain) NSIndexSet * changedIndexes;                          //@synthesize changedIndexes=_changedIndexes - In the implementation block
@property (nonatomic,retain) NSSet * movedIndexes;                                 //@synthesize movedIndexes=_movedIndexes - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfOperations; 
+(id)diffFromArray:(id)arg1 toArray:(id)arg2 options:(id)arg3 ;
+(id)_createContainerSetFromArray:(id)arg1 options:(id)arg2 ;
-(NSIndexSet *)deletedIndexes;
-(NSIndexSet *)insertedIndexes;
-(void)enumerateInsertsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfOperations;
-(void)setInsertedIndexes:(NSIndexSet *)arg1 ;
-(void)setDeletedIndexes:(NSIndexSet *)arg1 ;
-(NSArray *)toArray;
-(void)enumerateChangesUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)fromArray;
-(void)setMovedIndexes:(NSSet *)arg1 ;
-(void)setChangedIndexes:(NSIndexSet *)arg1 ;
-(NSSet *)movedIndexes;
-(void)enumerateDeletesUsingBlock:(/*^block*/id)arg1 ;
-(NSIndexSet *)changedIndexes;
-(void)enumerateMovesUsingBlock:(/*^block*/id)arg1 ;
-(void)setFromArray:(NSArray *)arg1 ;
-(void)setToArray:(NSArray *)arg1 ;
@end

