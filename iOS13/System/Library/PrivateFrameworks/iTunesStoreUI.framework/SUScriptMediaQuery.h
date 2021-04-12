/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, MPMediaQuery, NSString;

@interface SUScriptMediaQuery : SUScriptObject {

	NSArray* _collections;
	NSArray* _filterPredicates;
	NSArray* _items;
	BOOL _watchingLibrary;

}

@property (nonatomic,readonly) MPMediaQuery * nativeQuery; 
@property (readonly) NSArray * collections; 
@property (copy) id filterPredicates; 
@property (copy) NSString * groupingType; 
@property (readonly) NSArray * items; 
@property (readonly) NSString * comparisonTypeContains; 
@property (readonly) NSString * comparisonTypeEquals; 
@property (readonly) NSString * groupingTypeAlbum; 
@property (readonly) NSString * groupingTypeAlbumArtist; 
@property (readonly) NSString * groupingTypeArtist; 
@property (readonly) NSString * groupingTypeComposer; 
@property (readonly) NSString * groupingTypeGenre; 
@property (readonly) NSString * groupingTypePlaylist; 
@property (readonly) NSString * groupingTypePodcastTitle; 
@property (readonly) NSString * groupingTypeTitle; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)_className;
-(NSArray *)items;
-(id)attributeKeys;
-(void)_resetCaches;
-(NSArray *)collections;
-(id)canFilterByProperty:(id)arg1 ;
-(id)filterPredicates;
-(void)setFilterPredicates:(id)arg1 ;
-(void)addFilterPredicate:(id)arg1 ;
-(void)removeFilterPredicate:(id)arg1 ;
-(NSString *)groupingType;
-(void)setGroupingType:(NSString *)arg1 ;
-(id)scriptAttributeKeys;
-(void)_libraryChangedNotification:(id)arg1 ;
-(void)_beginWatchingLibraryIfNecessary;
-(id)makeFilterPredicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3 ;
-(MPMediaQuery *)nativeQuery;
-(NSString *)comparisonTypeContains;
-(NSString *)comparisonTypeEquals;
-(NSString *)groupingTypeAlbum;
-(NSString *)groupingTypeAlbumArtist;
-(NSString *)groupingTypeArtist;
-(NSString *)groupingTypeComposer;
-(NSString *)groupingTypeGenre;
-(NSString *)groupingTypePlaylist;
-(NSString *)groupingTypePodcastTitle;
-(NSString *)groupingTypeTitle;
@end

