/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class NSMutableArray;

@interface PSSearchableItemManifest : NSObject {

	NSMutableArray* _searchableItems;

}

@property (nonatomic,retain) NSMutableArray * searchableItems;              //@synthesize searchableItems=_searchableItems - In the implementation block
-(id)init;
-(id)items;
-(void)setSearchableItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)searchableItems;
-(id)_stringKeyForString:(id)arg1 ;
-(id)_escapedStringForString:(id)arg1 ;
-(void)addSearchableItems:(id)arg1 ;
-(void)addSearchableItem:(id)arg1 ;
-(void)removeSearchableItem:(id)arg1 ;
-(BOOL)writeToPlistAndStringsFilesAtURL:(id)arg1 error:(id*)arg2 ;
@end

