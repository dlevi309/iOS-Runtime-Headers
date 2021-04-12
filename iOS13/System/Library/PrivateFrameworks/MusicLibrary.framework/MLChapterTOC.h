/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface MLChapterTOC : NSObject
-(id)urlTitlePropertyOfChapterAtIndex:(unsigned)arg1 ;
-(id)urlPropertyOfChapterAtIndex:(unsigned)arg1 ;
-(id)titlePropertyOfChapterAtIndex:(unsigned)arg1 ;
-(unsigned)durationInMSOfGroupAtIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)timeLocationInMSOfChapterAtIndex:(unsigned)arg1 ;
-(unsigned)chapterIndexForGroupIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)countOfGroupsForProperty:(int)arg1 ;
-(unsigned)countOfChapters;
-(ChapterDataRef)chapterDataRef;
-(unsigned)chapterIndexAtTimeLocationInMS:(unsigned)arg1 ;
-(unsigned)groupIndexForChapterIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)groupIndexAtTimeLocationInMS:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)timeLocationInMSOfGroupAtIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(BOOL)hasDataForProperty:(int)arg1 ;
@end

