/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableIndexSet *)deletedIndexes;
-(NSMutableIndexSet *)insertedIndexes;
-(void)setUpdatedIndexes:(NSMutableIndexSet *)arg1 ;
-(void)setInsertedIndexes:(NSMutableIndexSet *)arg1 ;
-(void)setDeletedIndexes:(NSMutableIndexSet *)arg1 ;
-(BOOL)containsChanges;
-(NSMutableArray *)movedSourceIndexPaths;
-(NSMutableArray *)movedDestinationIndexPaths;
-(void)setMovedSourceIndexPaths:(NSMutableArray *)arg1 ;
-(void)setMovedDestinationIndexPaths:(NSMutableArray *)arg1 ;
-(NSMutableIndexSet *)updatedIndexes;
@end

