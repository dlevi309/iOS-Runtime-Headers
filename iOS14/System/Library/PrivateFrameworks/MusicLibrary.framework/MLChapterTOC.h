/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface MLChapterTOC : NSObject
-(id)titlePropertyOfChapterAtIndex:(unsigned)arg1 ;
-(unsigned)countOfChapters;
-(id)urlTitlePropertyOfChapterAtIndex:(unsigned)arg1 ;
-(unsigned)timeLocationInMSOfChapterAtIndex:(unsigned)arg1 ;
-(unsigned)chapterIndexForGroupIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(id)urlPropertyOfChapterAtIndex:(unsigned)arg1 ;
-(unsigned)durationInMSOfGroupAtIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)countOfGroupsForProperty:(int)arg1 ;
-(ChapterDataRef)chapterDataRef;
-(unsigned)chapterIndexAtTimeLocationInMS:(unsigned)arg1 ;
-(unsigned)groupIndexForChapterIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)groupIndexAtTimeLocationInMS:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)timeLocationInMSOfGroupAtIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(BOOL)hasDataForProperty:(int)arg1 ;
@end

