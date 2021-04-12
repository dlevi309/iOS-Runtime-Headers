/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)folderID;
-(unsigned)bookmarkCount;
-(id)bookmarkArray;
-(id)bookmarkAtIndex:(unsigned)arg1 ;
-(id)initWithQuery:(id)arg1 skipOffset:(unsigned)arg2 collection:(id)arg3 ;
-(void)_moveBookmarkAtIndex:(unsigned)arg1 toIndex:(unsigned)arg2 ;
-(unsigned)_reverseOrderIndex:(unsigned)arg1 ;
-(id)_bookmarkAtIndex:(unsigned)arg1 paginate:(BOOL)arg2 ;
-(void)_loadBookmarksForDifferenceFromList:(id)arg1 ;
-(id)_arrayForDifferenceCalculation;
-(id)bookmarkArrayRequestingCount:(unsigned)arg1 ;
-(id)differenceFromList:(id)arg1 withOptions:(unsigned long long)arg2 ;
@end

