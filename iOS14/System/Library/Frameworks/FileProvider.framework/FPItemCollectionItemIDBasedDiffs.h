/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableArray *)deletedItemIDs;
-(void)setDeletedItemIDs:(NSMutableArray *)arg1 ;
-(BOOL)containsChanges;
-(NSMutableDictionary *)replacedItemsByFormerID;
-(void)setReplacedItemsByFormerID:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)updatedItems;
-(void)setUpdatedItems:(NSMutableArray *)arg1 ;
@end

