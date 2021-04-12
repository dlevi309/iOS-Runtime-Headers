/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariSharedUI/WBSBookmarkFolderTouchIconProvider.h>

@protocol OS_dispatch_queue;
@class WebBookmarkCollection, NSObject;

@interface _SFBookmarkFolderTouchIconProvider : WBSBookmarkFolderTouchIconProvider {

	WebBookmarkCollection* _collection;
	NSObject*<OS_dispatch_queue> _bookmarkCollectionAccessQueue;

}
-(id)init;
-(BOOL)canHandleRequest:(id)arg1 ;
-(id)backgroundColor;
-(void)_folderContentsDidChange:(id)arg1 ;
-(id)defaultFolderIconForRequest:(id)arg1 ;
-(id)bookmarkUUIDForRequest:(id)arg1 ;
-(id)displayableFolderContentsForRequest:(id)arg1 ;
-(id)touchIconRequestForBookmark:(id)arg1 inFolderWithRequest:(id)arg2 ;
@end

