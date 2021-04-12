/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

