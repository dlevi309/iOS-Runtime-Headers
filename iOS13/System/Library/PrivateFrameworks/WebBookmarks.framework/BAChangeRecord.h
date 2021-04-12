/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@class WebBookmarkCollection, WebBookmark;

@interface BAChangeRecord : NSObject {

	WebBookmarkCollection* _collection;
	WebBookmark* _bookmark;
	int _changeType;

}

@property (nonatomic,readonly) WebBookmarkCollection * collection;              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) WebBookmark * bookmark;                          //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) int changeType;                                  //@synthesize changeType=_changeType - In the implementation block
-(id)description;
-(int)changeType;
-(WebBookmarkCollection *)collection;
-(WebBookmark *)bookmark;
-(id)_changedAttributeDescription;
-(id)_changeTypeDescription;
-(id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2 changeType:(int)arg3 ;
@end

