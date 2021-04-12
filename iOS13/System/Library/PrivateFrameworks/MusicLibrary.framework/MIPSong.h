/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(MIPGenre *)genre;
-(void)writeTo:(id)arg1 ;
-(MIPAlbum *)album;
-(MIPArtist *)artist;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(MIPArtist *)composer;
-(void)setComposer:(MIPArtist *)arg1 ;
-(BOOL)hasVideo;
-(void)setHasVideo:(BOOL)arg1 ;
-(NSString *)lyrics;
-(void)setAlbum:(MIPAlbum *)arg1 ;
-(void)setArtist:(MIPArtist *)arg1 ;
-(BOOL)hasArtist;
-(int)discNumber;
-(int)userRating;
-(MIPPlaybackInfo *)playbackInfo;
-(BOOL)hasLyrics;
-(int)trackNumber;
-(void)setGenre:(MIPGenre *)arg1 ;
-(void)setUserRating:(int)arg1 ;
-(void)setDiscNumber:(int)arg1 ;
-(void)setTrackNumber:(int)arg1 ;
-(void)setLyrics:(NSString *)arg1 ;
-(int)audioFormat;
-(void)setPlaybackInfo:(MIPPlaybackInfo *)arg1 ;
-(NSString *)hlsPlaylistURL;
-(void)setHlsPlaylistURL:(NSString *)arg1 ;
-(BOOL)hasAlbum;
-(BOOL)hasComposer;
-(void)setHasDiscNumber:(BOOL)arg1 ;
-(BOOL)hasDiscNumber;
-(BOOL)hasGenre;
-(void)setHasTrackNumber:(BOOL)arg1 ;
-(BOOL)hasTrackNumber;
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
-(void)setHasHasVideo:(BOOL)arg1 ;
-(BOOL)hasHasVideo;
-(BOOL)hasPlaybackInfo;
-(void)setLyricsChecksum:(int)arg1 ;
-(void)setHasLyricsChecksum:(BOOL)arg1 ;
-(BOOL)hasLyricsChecksum;
-(BOOL)hasHlsPlaylistURL;
-(BOOL)excludeFromShuffle;
-(long long)geniusId;
-(int)lyricsChecksum;
@end

