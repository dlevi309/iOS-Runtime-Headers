/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@class NSHashTable, NSMapTable, NSDictionary, NSArray, NSMutableArray;

@interface FPStitchingManager : NSObject {

	NSHashTable* _stitchingSessions;
	NSMapTable* _bouncedItems;

}

@property (nonatomic,readonly) NSDictionary * allPlaceholderItemsByParentIdentifierAndName; 
@property (nonatomic,readonly) NSArray * allPlaceholderReplacementsIDs; 
@property (nonatomic,readonly) NSDictionary * stitchedFieldsAndItemsByItemIDs; 
@property (nonatomic,readonly) NSMutableArray * allDeletedIDs; 
+(id)sharedInstance;
+(id)parentIdNameKeyForItem:(id)arg1 ;
-(id)init;
-(NSMutableArray *)allDeletedIDs;
-(NSDictionary *)allPlaceholderItemsByParentIdentifierAndName;
-(NSArray *)allPlaceholderReplacementsIDs;
-(NSDictionary *)stitchedFieldsAndItemsByItemIDs;
-(id)stitchedItemsForParentID:(id)arg1 ;
-(void)addBouncedItem:(id)arg1 ;
-(void)registerStitchingSession:(id)arg1 ;
-(void)removeBouncedItemsWithIDs:(id)arg1 ;
-(BOOL)cleanStitchedForItemID:(id)arg1 ;
@end

