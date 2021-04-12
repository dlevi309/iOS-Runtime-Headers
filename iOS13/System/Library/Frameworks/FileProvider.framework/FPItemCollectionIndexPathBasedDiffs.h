/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPItemCollectionDiffs.h>

@class NSMutableArray, NSMutableIndexSet;

@interface FPItemCollectionIndexPathBasedDiffs : FPItemCollectionDiffs {

	NSMutableArray* _movedSourceIndexPaths;
	NSMutableArray* _movedDestinationIndexPaths;
	NSMutableIndexSet* _deletedIndexes;
	NSMutableIndexSet* _insertedIndexes;
	NSMutableIndexSet* _updatedIndexes;

}

@property (retain) NSMutableArray * movedSourceIndexPaths;                   //@synthesize movedSourceIndexPaths=_movedSourceIndexPaths - In the implementation block
@property (retain) NSMutableArray * movedDestinationIndexPaths;              //@synthesize movedDestinationIndexPaths=_movedDestinationIndexPaths - In the implementation block
@property (retain) NSMutableIndexSet * deletedIndexes;                       //@synthesize deletedIndexes=_deletedIndexes - In the implementation block
@property (retain) NSMutableIndexSet * insertedIndexes;                      //@synthesize insertedIndexes=_insertedIndexes - In the implementation block
@property (retain) NSMutableIndexSet * updatedIndexes;                       //@synthesize updatedIndexes=_updatedIndexes - In the implementation block
-(NSMutableIndexSet *)insertedIndexes;
-(NSMutableIndexSet *)deletedIndexes;
-(NSMutableIndexSet *)updatedIndexes;
-(BOOL)containsChanges;
-(NSMutableArray *)movedSourceIndexPaths;
-(NSMutableArray *)movedDestinationIndexPaths;
-(void)setMovedSourceIndexPaths:(NSMutableArray *)arg1 ;
-(void)setMovedDestinationIndexPaths:(NSMutableArray *)arg1 ;
-(void)setDeletedIndexes:(NSMutableIndexSet *)arg1 ;
-(void)setInsertedIndexes:(NSMutableIndexSet *)arg1 ;
-(void)setUpdatedIndexes:(NSMutableIndexSet *)arg1 ;
@end

