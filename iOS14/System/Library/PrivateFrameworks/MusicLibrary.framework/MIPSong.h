/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPAlbum, MIPArtist, MIPGenre, NSString, MIPPlaybackInfo;

@interface MIPSong : PBCodable <NSCopying> {

	long long _geniusId;
	MIPAlbum* _album;
	MIPArtist* _artist;
	int _audioFormat;
	MIPArtist* _composer;
	int _discNumber;
	MIPGenre* _genre;
	NSString* _hlsPlaylistURL;
	NSString* _lyrics;
	int _lyricsChecksum;
	MIPPlaybackInfo* _playbackInfo;
	int _trackNumber;
	int _userRating;
	BOOL _excludeFromShuffle;
	BOOL _hasVideo;
	SCD_Struct_MI2 _has;

}

@property (nonatomic,readonly) BOOL hasAlbum; 
@property (nonatomic,retain) MIPAlbum * album;                            //@synthesize album=_album - In the implementation block
@property (nonatomic,readonly) BOOL hasArtist; 
@property (nonatomic,retain) MIPArtist * artist;                          //@synthesize artist=_artist - In the implementation block
@property (nonatomic,readonly) BOOL hasComposer; 
@property (nonatomic,retain) MIPArtist * composer;                        //@synthesize composer=_composer - In the implementation block
@property (nonatomic,readonly) BOOL hasGenre; 
@property (nonatomic,retain) MIPGenre * genre;                            //@synthesize genre=_genre - In the implementation block
@property (assign,nonatomic) BOOL hasDiscNumber; 
@property (assign,nonatomic) int discNumber;                              //@synthesize discNumber=_discNumber - In the implementation block
@property (assign,nonatomic) BOOL hasTrackNumber; 
@property (assign,nonatomic) int trackNumber;                             //@synthesize trackNumber=_trackNumber - In the implementation block
@property (assign,nonatomic) BOOL hasUserRating; 
@property (assign,nonatomic) int userRating;                              //@synthesize userRating=_userRating - In the implementation block
@property (assign,nonatomic) BOOL hasExcludeFromShuffle; 
@property (assign,nonatomic) BOOL excludeFromShuffle;                     //@synthesize excludeFromShuffle=_excludeFromShuffle - In the implementation block
@property (assign,nonatomic) BOOL hasGeniusId; 
@property (assign,nonatomic) long long geniusId;                          //@synthesize geniusId=_geniusId - In the implementation block
@property (assign,nonatomic) BOOL hasAudioFormat; 
@property (assign,nonatomic) int audioFormat;                             //@synthesize audioFormat=_audioFormat - In the implementation block
@property (assign,nonatomic) BOOL hasHasVideo; 
@property (assign,nonatomic) BOOL hasVideo;                               //@synthesize hasVideo=_hasVideo - In the implementation block
@property (nonatomic,readonly) BOOL hasLyrics; 
@property (nonatomic,retain) NSString * lyrics;                           //@synthesize lyrics=_lyrics - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackInfo; 
@property (nonatomic,retain) MIPPlaybackInfo * playbackInfo;              //@synthesize playbackInfo=_playbackInfo - In the implementation block
@property (assign,nonatomic) BOOL hasLyricsChecksum; 
@property (assign,nonatomic) int lyricsChecksum;                          //@synthesize lyricsChecksum=_lyricsChecksum - In the implementation block
@property (nonatomic,readonly) BOOL hasHlsPlaylistURL; 
@property (nonatomic,retain) NSString * hlsPlaylistURL;                   //@synthesize hlsPlaylistURL=_hlsPlaylistURL - In the implementation block
-(MIPArtist *)composer;
-(void)setComposer:(MIPArtist *)arg1 ;
-(id)dictionaryRepresentation;
-(MIPGenre *)genre;
-(BOOL)hasLyrics;
-(NSString *)lyrics;
-(int)trackNumber;
-(void)setDiscNumber:(int)arg1 ;
-(void)setUserRating:(int)arg1 ;
-(MIPArtist *)artist;
-(void)setTrackNumber:(int)arg1 ;
-(void)setHasVideo:(BOOL)arg1 ;
-(void)setGenre:(MIPGenre *)arg1 ;
-(void)setPlaybackInfo:(MIPPlaybackInfo *)arg1 ;
-(NSString *)hlsPlaylistURL;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTrackNumber:(BOOL)arg1 ;
-(void)setHlsPlaylistURL:(NSString *)arg1 ;
-(void)setHasHasVideo:(BOOL)arg1 ;
-(BOOL)hasTrackNumber;
-(id)description;
-(int)discNumber;
-(MIPPlaybackInfo *)playbackInfo;
-(int)audioFormat;
-(BOOL)hasHasVideo;
-(BOOL)hasArtist;
-(BOOL)hasAlbum;
-(void)setAlbum:(MIPAlbum *)arg1 ;
-(MIPAlbum *)album;
-(BOOL)hasDiscNumber;
-(unsigned long long)hash;
-(void)setHasDiscNumber:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setArtist:(MIPArtist *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)userRating;
-(BOOL)hasGenre;
-(long long)geniusId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLyrics:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasVideo;
-(BOOL)hasComposer;
-(void)setHasUserRating:(BOOL)arg1 ;
-(BOOL)hasUserRating;
-(void)setExcludeFromShuffle:(BOOL)arg1 ;
-(void)setHasExcludeFromShuffle:(BOOL)arg1 ;
-(BOOL)hasExcludeFromShuffle;
-(void)setGeniusId:(long long)arg1 ;
-(void)setHasGeniusId:(BOOL)arg1 ;
-(BOOL)hasGeniusId;
-(void)setAudioFormat:(int)arg1 ;
-(void)setHasAudioFormat:(BOOL)arg1 ;
-(BOOL)hasAudioFormat;
-(BOOL)hasPlaybackInfo;
-(void)setLyricsChecksum:(int)arg1 ;
-(void)setHasLyricsChecksum:(BOOL)arg1 ;
-(BOOL)hasLyricsChecksum;
-(BOOL)hasHlsPlaylistURL;
-(BOOL)excludeFromShuffle;
-(int)lyricsChecksum;
@end

