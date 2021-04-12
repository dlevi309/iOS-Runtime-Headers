/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@protocol WBBookmarkProvider <NSObject>
@required
-(id)bookmarkWithID:(int)arg1;
-(id)readingListWithUnreadOnly:(BOOL)arg1 filteredUsingString:(id)arg2;
-(void)enumerateBookmarks:(BOOL)arg1 andReadingListItems:(BOOL)arg2 matchingString:(id)arg3 usingBlock:(/*^block*/id)arg4;
-(id)bookmarksMatchingString:(id)arg1;
-(id)readingListBookmarksMatchingString:(id)arg1 maxResults:(unsigned)arg2 onlyArchivedBookmarks:(BOOL)arg3;
-(id)databaseHealthInformation;
-(unsigned long long)leafChildCountForBookmarksInFolderWithID:(int)arg1;
-(id)leafChildCountForFoldersInFolderWithID:(int)arg1;

@end

