/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@class NSHashTable, NSMapTable, NSDictionary, NSArray;

@interface FPStitchingManager : NSObject {

	NSHashTable* _stitchingSessions;
	NSMapTable* _bouncedItems;

}

@property (nonatomic,readonly) NSDictionary * allPlaceholderItemsByParentIdentifierAndName; 
@property (nonatomic,readonly) NSArray * allPlaceholderReplacementsIDs; 
@property (nonatomic,readonly) NSDictionary * stitchedFieldsAndItemsByItemIDs; 
+(id)sharedInstance;
+(id)parentIdNameKeyForItem:(id)arg1 ;
-(id)init;
-(NSDictionary *)allPlaceholderItemsByParentIdentifierAndName;
-(NSArray *)allPlaceholderReplacementsIDs;
-(NSDictionary *)stitchedFieldsAndItemsByItemIDs;
-(void)addBouncedItem:(id)arg1 ;
-(void)registerStitchingSession:(id)arg1 ;
-(void)removeBouncedItemsWithIDs:(id)arg1 ;
@end

