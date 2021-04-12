/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@interface WBBookmarksDatabaseHealthInformation : NSObject {

	unsigned long long _topLevelDuplicateBookmarksCount;
	unsigned long long _allDuplicateBookmarksCount;

}

@property (nonatomic,readonly) unsigned long long topLevelDuplicateBookmarksCount;              //@synthesize topLevelDuplicateBookmarksCount=_topLevelDuplicateBookmarksCount - In the implementation block
@property (nonatomic,readonly) unsigned long long allDuplicateBookmarksCount;                   //@synthesize allDuplicateBookmarksCount=_allDuplicateBookmarksCount - In the implementation block
-(id)initWithTopLevelDuplicateBookmarksCount:(unsigned long long)arg1 allDuplicateBookmarksCount:(unsigned long long)arg2 ;
-(unsigned long long)topLevelDuplicateBookmarksCount;
-(unsigned long long)allDuplicateBookmarksCount;
@end

