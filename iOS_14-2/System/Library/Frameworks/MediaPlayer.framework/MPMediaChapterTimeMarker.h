/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPTimeMarker.h>

@class NSArray;

@interface MPMediaChapterTimeMarker : MPTimeMarker {

	unsigned long long _chapterIndex;
	NSArray* _chapters;
	BOOL _hasArtworkAtPlaybackTime;

}

@property (assign,nonatomic) unsigned long long chapterIndex;              //@synthesize chapterIndex=_chapterIndex - In the implementation block
@property (nonatomic,retain) NSArray * chapters;                           //@synthesize chapters=_chapters - In the implementation block
@property (assign,nonatomic) BOOL hasArtworkAtPlaybackTime;                //@synthesize hasArtworkAtPlaybackTime=_hasArtworkAtPlaybackTime - In the implementation block
-(NSArray *)chapters;
-(BOOL)hasArtworkAtPlaybackTime;
-(unsigned long long)chapterIndex;
-(void)setChapterIndex:(unsigned long long)arg1 ;
-(void)setChapters:(NSArray *)arg1 ;
-(void)setHasArtworkAtPlaybackTime:(BOOL)arg1 ;
@end

