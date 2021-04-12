/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/MLChapterTOC.h>

@interface MLITChapterTOC : MLChapterTOC {

	unsigned _totalTimeInMS;
	ChapterDataRef _chapterDataRef;
	unsigned* _picCookieIndexMap;
	unsigned* _urlCookieIndexMap;
	unsigned* _nameCookieIndexMap;

}
+(void)enumerateArtworkCacheIDsInFlattenedChapterData:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(void)enumerateChapterTimesInFlattenedChapterData:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(unsigned*)_chapterDataCookieIndexMapForProperty:(int)arg1 ofChapterTOC:(id)arg2 ;
-(void)dealloc;
-(id)urlTitleTrimmingCharacterSet;
-(id)urlTitlePropertyOfChapterAtIndex:(unsigned)arg1 ;
-(id)urlPropertyOfChapterAtIndex:(unsigned)arg1 ;
-(id)titlePropertyOfChapterAtIndex:(unsigned)arg1 ;
-(unsigned)durationInMSOfGroupAtIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)timeLocationInMSOfChapterAtIndex:(unsigned)arg1 ;
-(unsigned)chapterIndexForGroupIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)countOfGroupsForProperty:(int)arg1 ;
-(unsigned)countOfChapters;
-(id)initWithChapterDataRef:(ChapterDataRef)arg1 totalTimeInMS:(unsigned)arg2 ;
-(ChapterDataRef)chapterDataRef;
-(unsigned*)_cachedCookieIndexMapForProperty:(int)arg1 createIfNecessary:(BOOL)arg2 ;
-(unsigned)totalTimeInMS;
-(unsigned)groupIndexForChapterIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)groupIndexAtTimeLocationInMS:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)timeLocationInMSOfGroupAtIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
@end

