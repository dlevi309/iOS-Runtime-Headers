/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)changes;
-(BOOL)isBookmarkDeleted:(int)arg1 ;
-(id)modifiedBookmarksInBookmarkFolder:(int)arg1 ;
-(id)init;
-(void)_readPersistedChanges;
-(void)_addChange:(id)arg1 ;
-(void)removeChange:(id)arg1 ;
-(BOOL)bookmarkIsAddedInMemory:(int)arg1 ;
-(void)updateAddChangesWithInMemoryBookmarkID:(int)arg1 toDatabaseGeneratedID:(int)arg2 ;
-(id)addedBookmarksInBookmarkFolder:(int)arg1 ;
-(NSURL *)fileURL;
-(void)persistChangesWithCompletion:(/*^block*/id)arg1 ;
-(void)_removeAllChanges;
-(id)initWithFileURL:(id)arg1 ;
-(unsigned long long)numberOfAddedBookmarksInBookmarkFolder:(int)arg1 ;
-(void)addChange:(id)arg1 ;
-(int)nextBookmarkIDForAddingBookmarkInMemory;
-(void)removeAllChanges;
-(long long)replayChangesToBookmark:(id)arg1 ;
-(id)deletedBookmarkIDsInBookmarkFolder:(int)arg1 ;
@end

