/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@class WebBookmarkCollection, WebBookmark;

@interface BABookmarkItem : NSObject {

	WebBookmarkCollection* _collection;
	WebBookmark* _bookmark;

}

@property (nonatomic,readonly) WebBookmarkCollection * collection;              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) WebBookmark * bookmark;                            //@synthesize bookmark=_bookmark - In the implementation block
-(id)description;
-(WebBookmarkCollection *)collection;
-(WebBookmark *)bookmark;
-(void)setBookmark:(WebBookmark *)arg1 ;
-(id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2 ;
@end

