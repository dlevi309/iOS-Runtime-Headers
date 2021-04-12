/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/AudioClip.h>

@class FMSongRendition, FMSong;

@interface FlexAudioClip : AudioClip {

	BOOL _lockedRendition;
	FMSongRendition* _songRendition;
	FMSong* _song;

}

@property (nonatomic,retain) FMSong * song;                                //@synthesize song=_song - In the implementation block
@property (nonatomic,retain) FMSongRendition * songRendition;              //@synthesize songRendition=_songRendition - In the implementation block
@property (nonatomic,readonly) int sampleRate; 
@property (assign,nonatomic) BOOL lockedRendition;                         //@synthesize lockedRendition=_lockedRendition - In the implementation block
+(id)backgroundClipWithSong:(id)arg1 ;
+(id)optionsForSong:(id)arg1 withDuration:(double)arg2 ;
-(FMSong *)song;
-(void)setDuration:(int)arg1 ;
-(id)init;
-(void)setSong:(FMSong *)arg1 ;
-(int)duration;
-(id)songUID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)sampleRate;
-(void)setSongUID:(id)arg1 ;
-(int)clipType;
-(FMSongRendition *)songRendition;
-(void)setLockedRendition:(BOOL)arg1 ;
-(int)rawSourceDuration;
-(id)plistRepresentationFromProject:(id)arg1 ;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(void)refreshSong;
-(void)generateEdits;
-(BOOL)lockedRendition;
-(void)setSongRendition:(FMSongRendition *)arg1 ;
-(void)outroStingerTime:(SCD_Struct_PM8*)arg1 earlyFadeStartTime:(SCD_Struct_PM8*)arg2 endTime:(SCD_Struct_PM8*)arg3 ;
@end

