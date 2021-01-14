/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)leafChildCountForFoldersInFolderWithID:(int)arg1 ;
-(id)_collection;
-(id)bookmarksMatchingString:(id)arg1 ;
-(id)initReadonlySafariBookmarkCollection;
-(unsigned long long)leafChildCountForBookmarksInFolderWithID:(int)arg1 ;
-(id)readingListWithUnreadOnly:(BOOL)arg1 filteredUsingString:(id)arg2 ;
-(void)enumerateBookmarks:(BOOL)arg1 andReadingListItems:(BOOL)arg2 matchingString:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)readingListBookmarksMatchingString:(id)arg1 maxResults:(unsigned)arg2 onlyArchivedBookmarks:(BOOL)arg3 ;
-(id)databaseHealthInformation;
-(id)bookmarkWithID:(int)arg1 ;
@end

