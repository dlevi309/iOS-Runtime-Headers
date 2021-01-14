/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@class NSMutableArray, WebBookmarkListQuery, WebBookmarkCollection;

@interface WebBookmarkList : NSObject {

	NSMutableArray* _bookmarks;
	unsigned _bookmarkCount;
	unsigned _skipOffset;
	WebBookmarkListQuery* _query;
	WebBookmarkCollection* _collection;

}

@property (nonatomic,readonly) int folderID; 
-(unsigned)_reverseOrderIndex:(unsigned)arg1 ;
-(int)folderID;
-(id)differenceFromList:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(unsigned)bookmarkCount;
-(id)_bookmarkAtIndex:(unsigned)arg1 paginate:(BOOL)arg2 ;
-(id)initWithQuery:(id)arg1 skipOffset:(unsigned)arg2 collection:(id)arg3 ;
-(id)_arrayForDifferenceCalculation;
-(id)bookmarkArrayRequestingCount:(unsigned)arg1 ;
-(void)_loadBookmarksForDifferenceFromList:(id)arg1 ;
-(id)bookmarkAtIndex:(unsigned)arg1 ;
-(void)_moveBookmarkAtIndex:(unsigned)arg1 toIndex:(unsigned)arg2 ;
-(id)bookmarkArray;
@end

