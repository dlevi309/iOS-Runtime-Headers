/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@protocol WebBookmarkInMemoryChangeFilter;
@class NSString, NSArray;

@interface WebBookmarkListQuery : NSObject {

	NSString* _query;
	NSString* _queryWithOrderBy;
	NSString* _orderBy;
	NSArray* _titleWordPrefixes;
	NSArray* _titleWordPrefixesForInMemoryFiltering;
	NSString* _urlFilter;
	BOOL _includeHidden;
	BOOL _countShouldUseNumChildrenIfPossible;
	BOOL _customQuery;
	int _folderID;
	id<WebBookmarkInMemoryChangeFilter> _inMemoryFilter;

}

@property (getter=isCustomQuery,nonatomic,readonly) BOOL customQuery;                         //@synthesize customQuery=_customQuery - In the implementation block
@property (nonatomic,readonly) int folderID;                                                  //@synthesize folderID=_folderID - In the implementation block
@property (nonatomic,retain) id<WebBookmarkInMemoryChangeFilter> inMemoryFilter;              //@synthesize inMemoryFilter=_inMemoryFilter - In the implementation block
-(id<WebBookmarkInMemoryChangeFilter>)inMemoryFilter;
-(int)_inMemoryAddedChildrenCountForBookmarkFolder:(int)arg1 collection:(id)arg2 skipCountingBookmarksThatAreDeletedInMemory:(BOOL)arg3 ;
-(id)initWithBookmarksWhere:(id)arg1 orderBy:(id)arg2 usingFilter:(id)arg3 ;
-(id)init;
-(id)_sqliteNotInConditionForInMemoryModifiedAndDeleted:(BOOL)arg1 bookmarksInFolder:(int)arg2 collection:(id)arg3 ;
-(int)folderID;
-(id)_filterBookmarks:(id)arg1 ;
-(void)setInMemoryFilter:(id<WebBookmarkInMemoryChangeFilter>)arg1 ;
-(int)_childCountInDatabaseForFolderFetchInCollection:(id)arg1 skipCountingInDatabaseBookmarksThatAreDeletedInMemory:(BOOL)arg2 ;
-(id)bookmarksInCollection:(id)arg1 fromIndex:(unsigned)arg2 toIndex:(unsigned)arg3 ;
-(id)debugDescription;
-(id)initWithBookmarksWhere:(id)arg1 folderID:(int)arg2 orderBy:(id)arg3 usingFilter:(id)arg4 ;
-(int)countInCollection:(id)arg1 ;
-(void)_preparePrefixesFromNormalizedString:(id)arg1 ;
-(BOOL)isCustomQuery;
-(id)_sqliteInConditionForInMemoryModifiedBookmarksInFolder:(int)arg1 collection:(id)arg2 ;
-(id)_normalizeUserTypedString:(id)arg1 ;
-(id)initWithFolderID:(int)arg1 inCollection:(id)arg2 includeHidden:(BOOL)arg3 usingFilter:(id)arg4 ;
-(long long)_listQueryType;
@end

