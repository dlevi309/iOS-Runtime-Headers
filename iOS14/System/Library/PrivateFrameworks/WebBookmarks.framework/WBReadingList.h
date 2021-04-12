/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@protocol OS_dispatch_queue;
@class WBReadingListPrivate, NSObject;

@interface WBReadingList : NSObject {

	WBReadingListPrivate* _private;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(BOOL)supportsURL:(id)arg1 ;
+(id)defaultReadingList;
-(id)init;
-(BOOL)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id*)arg4 ;
-(id)_init;
@end

