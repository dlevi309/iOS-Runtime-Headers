/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@class WebBookmarkCollection, WebBookmark;

@interface BABookmarkItem : NSObject {

	WebBookmarkCollection* _collection;
	WebBookmark* _bookmark;

}

@property (nonatomic,readonly) WebBookmarkCollection * collection;              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) WebBookmark * bookmark;                            //@synthesize bookmark=_bookmark - In the implementation block
-(void)setBookmark:(WebBookmark *)arg1 ;
-(WebBookmark *)bookmark;
-(WebBookmarkCollection *)collection;
-(id)description;
-(id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2 ;
@end

