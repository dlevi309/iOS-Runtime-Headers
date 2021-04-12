/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSArray, NSIndexSet;

@interface NSArrayIndexer : NSObject {

	NSArray* _initialArray;
	NSArray* _finalArray;
	NSIndexSet* _insertedIndexesAfterDeletions;
	NSIndexSet* _deletedIndexesBeforeInsertions;

}

@property (nonatomic,retain) NSIndexSet * insertedIndexesAfterDeletions;               //@synthesize insertedIndexesAfterDeletions=_insertedIndexesAfterDeletions - In the implementation block
@property (nonatomic,retain) NSIndexSet * deletedIndexesBeforeInsertions;              //@synthesize deletedIndexesBeforeInsertions=_deletedIndexesBeforeInsertions - In the implementation block
@property (nonatomic,retain) NSArray * initialArray;                                   //@synthesize initialArray=_initialArray - In the implementation block
@property (nonatomic,retain) NSArray * finalArray;                                     //@synthesize finalArray=_finalArray - In the implementation block
+(id)indexerWithInitialArray:(id)arg1 finalArray:(id)arg2 ;
-(void)analyze;
-(id)initWithInitialArray:(id)arg1 finalArray:(id)arg2 ;
-(void)setInitialArray:(NSArray *)arg1 ;
-(void)setFinalArray:(NSArray *)arg1 ;
-(NSArray *)initialArray;
-(NSArray *)finalArray;
-(NSIndexSet *)insertedIndexesAfterDeletions;
-(NSIndexSet *)deletedIndexesBeforeInsertions;
-(void)setInsertedIndexesAfterDeletions:(NSIndexSet *)arg1 ;
-(void)setDeletedIndexesBeforeInsertions:(NSIndexSet *)arg1 ;
@end

