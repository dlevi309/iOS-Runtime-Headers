/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class NSMutableArray;

@interface PSSearchableItemManifest : NSObject {

	NSMutableArray* _searchableItems;

}

@property (nonatomic,retain) NSMutableArray * searchableItems;              //@synthesize searchableItems=_searchableItems - In the implementation block
-(id)init;
-(id)items;
-(NSMutableArray *)searchableItems;
-(void)setSearchableItems:(NSMutableArray *)arg1 ;
-(id)_stringKeyForString:(id)arg1 ;
-(void)addSearchableItem:(id)arg1 ;
-(id)_escapedStringForString:(id)arg1 ;
-(void)addSearchableItems:(id)arg1 ;
-(void)removeSearchableItem:(id)arg1 ;
-(BOOL)writeToPlistAndStringsFilesAtURL:(id)arg1 error:(id*)arg2 ;
@end

