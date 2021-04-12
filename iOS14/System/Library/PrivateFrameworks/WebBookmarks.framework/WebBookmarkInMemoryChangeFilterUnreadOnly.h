/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/

#import <WebBookmarks/WebBookmarkInMemoryChangeFilter.h>

@class NSString;

@interface WebBookmarkInMemoryChangeFilterUnreadOnly : NSObject <WebBookmarkInMemoryChangeFilter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bookmarkIDsModifiedInMemoryNotPassingFilterFromChangeSet:(id)arg1 inFolder:(int)arg2 ;
-(id)bookmarkIDsModifiedInMemoryPassingFilterFromChangeSet:(id)arg1 inFolder:(int)arg2 ;
-(id)_bookmarksIDsFromBookmarks:(id)arg1 fromChangeSet:(id)arg2 withFilter:(/*^block*/id)arg3 ;
@end

