/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableOrderedSet, NSMutableDictionary, NSURL, NSArray;

@interface WebBookmarkChangeSet : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _lastBookmarkIDForAddingInMemoryBookmark;
	NSMutableOrderedSet* _changes;
	NSMutableDictionary* _bookmarkIDToChanges;
	NSMutableDictionary* _folderIDToDeletedChildrenChanges;
	NSMutableDictionary* _folderIDToAddedChildrenChanges;
	NSMutableDictionary* _folderIDToModifiedChildrenChanges;
	NSURL* _fileURL;

}

@property (nonatomic,copy,readonly) NSURL * fileURL;                //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * changes; 
+(void)setSharedChangeSet:(id)arg1 ;
+(id)sharedChangeSet;
-(id)init;
-(void)addChange:(id)arg1 ;
-(NSArray *)changes;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(void)persistChangesWithCompletion:(/*^block*/id)arg1 ;
-(id)modifiedBookmarksInBookmarkFolder:(int)arg1 ;
-(long long)replayChangesToBookmark:(id)arg1 ;
-(void)_readPersistedChanges;
-(void)_addChange:(id)arg1 ;
-(void)_removeAllChanges;
-(int)nextBookmarkIDForAddingBookmarkInMemory;
-(void)removeChange:(id)arg1 ;
-(void)removeAllChanges;
-(BOOL)isBookmarkDeleted:(int)arg1 ;
-(id)deletedBookmarkIDsInBookmarkFolder:(int)arg1 ;
-(id)addedBookmarksInBookmarkFolder:(int)arg1 ;
-(unsigned long long)numberOfAddedBookmarksInBookmarkFolder:(int)arg1 ;
-(void)updateAddChangesWithInMemoryBookmarkID:(int)arg1 toDatabaseGeneratedID:(int)arg2 ;
-(BOOL)bookmarkIsAddedInMemory:(int)arg1 ;
@end

