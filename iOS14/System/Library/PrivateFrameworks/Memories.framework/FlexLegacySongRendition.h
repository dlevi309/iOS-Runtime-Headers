/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSegments:(NSArray *)arg1 ;
-(NSArray *)segments;
-(id)_buildOutroFadeoutMixParams;
-(void)setDurationOfUsedOutro:(long long)arg1 ;
-(void)setDurationOfFullOutro:(long long)arg1 ;
-(void)_buildTracksFromSegments:(id)arg1 ;
-(long long)durationOfUsedOutro;
-(long long)durationOfFullOutro;
-(id)initWithSong:(id)arg1 segments:(id)arg2 withOptions:(id)arg3 ;
@end

