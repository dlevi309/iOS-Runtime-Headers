/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPItemCollectionDiffs.h>

@class NSMutableArray, NSMutableDictionary;

@interface FPItemCollectionItemIDBasedDiffs : FPItemCollectionDiffs {

	NSMutableArray* _deletedItemIDs;
	NSMutableArray* _updatedItems;
	NSMutableDictionary* _replacedItemsByFormerID;

}

@property (retain) NSMutableArray * deletedItemIDs;                            //@synthesize deletedItemIDs=_deletedItemIDs - In the implementation block
@property (retain) NSMutableArray * updatedItems;                              //@synthesize updatedItems=_updatedItems - In the implementation block
@property (retain) NSMutableDictionary * replacedItemsByFormerID;              //@synthesize replacedItemsByFormerID=_replacedItemsByFormerID - In the implementation block
-(NSMutableArray *)updatedItems;
-(void)setUpdatedItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)deletedItemIDs;
-(void)setDeletedItemIDs:(NSMutableArray *)arg1 ;
-(BOOL)containsChanges;
-(NSMutableDictionary *)replacedItemsByFormerID;
-(void)setReplacedItemsByFormerID:(NSMutableDictionary *)arg1 ;
@end

