/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSIndexSet *)removedIndexes;
-(id)debugDescription;
-(NSIndexSet *)addedIndexes;
-(NSIndexSet *)commonIndexes;
-(void)setCommonIndexes:(NSIndexSet *)arg1 ;
-(void)setAddedIndexes:(NSIndexSet *)arg1 ;
-(void)setRemovedIndexes:(NSIndexSet *)arg1 ;
@end

