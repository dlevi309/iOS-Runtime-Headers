/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/

#import <libobjc.A.dylib/WBBookmarkProvider.h>

@class WebBookmarkCollection, NSString;

@interface WebBookmarkReadonlyCollection : NSObject <WBBookmarkProvider> {

	WebBookmarkCollection* _collection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bookmarkWithID:(int)arg1 ;
-(id)readingListWithUnreadOnly:(BOOL)arg1 filteredUsingString:(id)arg2 ;
-(void)enumerateBookmarks:(BOOL)arg1 andReadingListItems:(BOOL)arg2 matchingString:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)bookmarksMatchingString:(id)arg1 ;
-(id)readingListBookmarksMatchingString:(id)arg1 maxResults:(unsigned)arg2 onlyArchivedBookmarks:(BOOL)arg3 ;
-(id)databaseHealthInformation;
-(unsigned long long)leafChildCountForBookmarksInFolderWithID:(int)arg1 ;
-(id)leafChildCountForFoldersInFolderWithID:(int)arg1 ;
-(id)initReadonlySafariBookmarkCollection;
@end

