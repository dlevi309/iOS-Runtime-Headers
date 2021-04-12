/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/


@class NSIndexSet;

@interface MFArrayDiff : NSObject {

	NSIndexSet* _commonIndexes;
	NSIndexSet* _addedIndexes;
	NSIndexSet* _removedIndexes;

}

@property (nonatomic,retain) NSIndexSet * commonIndexes;               //@synthesize commonIndexes=_commonIndexes - In the implementation block
@property (nonatomic,retain) NSIndexSet * addedIndexes;                //@synthesize addedIndexes=_addedIndexes - In the implementation block
@property (nonatomic,retain) NSIndexSet * removedIndexes;              //@synthesize removedIndexes=_removedIndexes - In the implementation block
-(id)debugDescription;
-(NSIndexSet *)removedIndexes;
-(NSIndexSet *)addedIndexes;
-(NSIndexSet *)commonIndexes;
-(void)setCommonIndexes:(NSIndexSet *)arg1 ;
-(void)setAddedIndexes:(NSIndexSet *)arg1 ;
-(void)setRemovedIndexes:(NSIndexSet *)arg1 ;
@end

