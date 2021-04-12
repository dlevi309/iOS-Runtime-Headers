/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/FMSongRendition.h>

@class NSArray;

@interface FlexLegacySongRendition : FMSongRendition {

	NSArray* _segments;
	long long _durationOfUsedOutro;
	long long _durationOfFullOutro;

}

@property (nonatomic,retain) NSArray * segments;                         //@synthesize segments=_segments - In the implementation block
@property (assign,nonatomic) long long durationOfUsedOutro;              //@synthesize durationOfUsedOutro=_durationOfUsedOutro - In the implementation block
@property (assign,nonatomic) long long durationOfFullOutro;              //@synthesize durationOfFullOutro=_durationOfFullOutro - In the implementation block
+(long long)_durationOfOutroForPlaylist:(id)arg1 onlyUsedDuration:(BOOL)arg2 ;
-(NSArray *)segments;
-(void)setSegments:(NSArray *)arg1 ;
-(void)setDurationOfUsedOutro:(long long)arg1 ;
-(void)setDurationOfFullOutro:(long long)arg1 ;
-(void)_buildTracksFromSegments:(id)arg1 ;
-(long long)durationOfUsedOutro;
-(long long)durationOfFullOutro;
-(id)_buildOutroFadeoutMixParams;
-(id)initWithSong:(id)arg1 segments:(id)arg2 withOptions:(id)arg3 ;
@end

