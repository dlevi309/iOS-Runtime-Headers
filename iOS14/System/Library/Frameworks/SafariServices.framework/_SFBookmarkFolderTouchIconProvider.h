/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)displayableFolderContentsForRequest:(id)arg1 ;
-(BOOL)canHandleRequest:(id)arg1 ;
-(void)_folderContentsDidChange:(id)arg1 ;
-(id)backgroundColor;
-(id)touchIconRequestForBookmark:(id)arg1 inFolderWithRequest:(id)arg2 ;
-(id)bookmarkUUIDForRequest:(id)arg1 ;
-(id)defaultFolderIconForRequest:(id)arg1 ;
@end

