/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPArtist, NSString, NSData;

@interface MIPMovie : PBCodable <NSCopying> {

	long long _rentalDuration;
	long long _rentalPlaybackDuration;
	long long _rentalPlaybackStartedDateTime;
	long long _rentalStartedDateTime;
	MIPArtist* _artist;
	int _audioLanguage;
	int _audioTrackId;
	int _audioTrackIndex;
	NSString* _extendedContentName;
	NSData* _flattenedChapterData;
	NSString* _movieInfo;
	int _subtitleLanguage;
	int _subtitleTrackIndex;
	int _videoQuality;
	BOOL _hasAlternateAudio;
	BOOL _hasChapterData;
	BOOL _hasSubtitles;
	BOOL _rental;
	SCD_Struct_MI16 _has;

}

@property (nonatomic,readonly) BOOL hasArtist; 
@property (nonatomic,retain) MIPArtist * artist;                                   //@synthesize artist=_artist - In the implementation block
@property (assign,nonatomic) BOOL hasVideoQuality; 
@property (assign,nonatomic) int videoQuality;                                     //@synthesize videoQuality=_videoQuality - In the implementation block
@property (assign,nonatomic) BOOL hasRental; 
@property (assign,nonatomic) BOOL rental;                                          //@synthesize rental=_rental - In the implementation block
@property (assign,nonatomic) BOOL hasHasChapterData; 
@property (assign,nonatomic) BOOL hasChapterData;                                  //@synthesize hasChapterData=_hasChapterData - In the implementation block
@property (nonatomic,readonly) BOOL hasExtendedContentName; 
@property (nonatomic,retain) NSString * extendedContentName;                       //@synthesize extendedContentName=_extendedContentName - In the implementation block
@property (nonatomic,readonly) BOOL hasMovieInfo; 
@property (nonatomic,retain) NSString * movieInfo;                                 //@synthesize movieInfo=_movieInfo - In the implementation block
@property (assign,nonatomic) BOOL hasHasAlternateAudio; 
@property (assign,nonatomic) BOOL hasAlternateAudio;                               //@synthesize hasAlternateAudio=_hasAlternateAudio - In the implementation block
@property (assign,nonatomic) BOOL hasHasSubtitles; 
@property (assign,nonatomic) BOOL hasSubtitles;                                    //@synthesize hasSubtitles=_hasSubtitles - In the implementation block
@property (assign,nonatomic) BOOL hasAudioLanguage; 
@property (assign,nonatomic) int audioLanguage;                                    //@synthesize audioLanguage=_audioLanguage - In the implementation block
@property (assign,nonatomic) BOOL hasAudioTrackIndex; 
@property (assign,nonatomic) int audioTrackIndex;                                  //@synthesize audioTrackIndex=_audioTrackIndex - In the implementation block
@property (assign,nonatomic) BOOL hasAudioTrackId; 
@property (assign,nonatomic) int audioTrackId;                                     //@synthesize audioTrackId=_audioTrackId - In the implementation block
@property (assign,nonatomic) BOOL hasSubtitleLanguage; 
@property (assign,nonatomic) int subtitleLanguage;                                 //@synthesize subtitleLanguage=_subtitleLanguage - In the implementation block
@property (assign,nonatomic) BOOL hasSubtitleTrackIndex; 
@property (assign,nonatomic) int subtitleTrackIndex;                               //@synthesize subtitleTrackIndex=_subtitleTrackIndex - In the implementation block
@property (assign,nonatomic) BOOL hasRentalDuration; 
@property (assign,nonatomic) long long rentalDuration;                             //@synthesize rentalDuration=_rentalDuration - In the implementation block
@property (assign,nonatomic) BOOL hasRentalPlaybackDuration; 
@property (assign,nonatomic) long long rentalPlaybackDuration;                     //@synthesize rentalPlaybackDuration=_rentalPlaybackDuration - In the implementation block
@property (assign,nonatomic) BOOL hasRentalPlaybackStartedDateTime; 
@property (assign,nonatomic) long long rentalPlaybackStartedDateTime;              //@synthesize rentalPlaybackStartedDateTime=_rentalPlaybackStartedDateTime - In the implementation block
@property (assign,nonatomic) BOOL hasRentalStartedDateTime; 
@property (assign,nonatomic) long long rentalStartedDateTime;                      //@synthesize rentalStartedDateTime=_rentalStartedDateTime - In the implementation block
@property (nonatomic,readonly) BOOL hasFlattenedChapterData; 
@property (nonatomic,retain) NSData * flattenedChapterData;                        //@synthesize flattenedChapterData=_flattenedChapterData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(MIPArtist *)artist;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)videoQuality;
-(void)setVideoQuality:(int)arg1 ;
-(long long)rentalDuration;
-(void)setArtist:(MIPArtist *)arg1 ;
-(BOOL)hasArtist;
-(void)setRentalDuration:(long long)arg1 ;
-(BOOL)hasRentalDuration;
-(void)setRental:(BOOL)arg1 ;
-(void)setHasVideoQuality:(BOOL)arg1 ;
-(BOOL)hasVideoQuality;
-(BOOL)rental;
-(BOOL)hasChapterData;
-(BOOL)hasAlternateAudio;
-(BOOL)hasSubtitles;
-(int)audioLanguage;
-(int)audioTrackIndex;
-(int)audioTrackId;
-(int)subtitleLanguage;
-(int)subtitleTrackIndex;
-(long long)rentalPlaybackDuration;
-(long long)rentalPlaybackStartedDateTime;
-(long long)rentalStartedDateTime;
-(NSData *)flattenedChapterData;
-(BOOL)hasRental;
-(BOOL)hasHasChapterData;
-(BOOL)hasExtendedContentName;
-(BOOL)hasHasAlternateAudio;
-(BOOL)hasHasSubtitles;
-(BOOL)hasAudioLanguage;
-(BOOL)hasAudioTrackIndex;
-(BOOL)hasAudioTrackId;
-(BOOL)hasSubtitleLanguage;
-(BOOL)hasSubtitleTrackIndex;
-(BOOL)hasRentalPlaybackDuration;
-(BOOL)hasRentalPlaybackStartedDateTime;
-(BOOL)hasRentalStartedDateTime;
-(BOOL)hasFlattenedChapterData;
-(NSString *)extendedContentName;
-(NSString *)movieInfo;
-(void)setExtendedContentName:(NSString *)arg1 ;
-(void)setMovieInfo:(NSString *)arg1 ;
-(void)setFlattenedChapterData:(NSData *)arg1 ;
-(void)setHasRental:(BOOL)arg1 ;
-(void)setHasChapterData:(BOOL)arg1 ;
-(void)setHasHasChapterData:(BOOL)arg1 ;
-(BOOL)hasMovieInfo;
-(void)setHasAlternateAudio:(BOOL)arg1 ;
-(void)setHasHasAlternateAudio:(BOOL)arg1 ;
-(void)setHasSubtitles:(BOOL)arg1 ;
-(void)setHasHasSubtitles:(BOOL)arg1 ;
-(void)setAudioLanguage:(int)arg1 ;
-(void)setHasAudioLanguage:(BOOL)arg1 ;
-(void)setAudioTrackIndex:(int)arg1 ;
-(void)setHasAudioTrackIndex:(BOOL)arg1 ;
-(void)setAudioTrackId:(int)arg1 ;
-(void)setHasAudioTrackId:(BOOL)arg1 ;
-(void)setSubtitleLanguage:(int)arg1 ;
-(void)setHasSubtitleLanguage:(BOOL)arg1 ;
-(void)setSubtitleTrackIndex:(int)arg1 ;
-(void)setHasSubtitleTrackIndex:(BOOL)arg1 ;
-(void)setHasRentalDuration:(BOOL)arg1 ;
-(void)setRentalPlaybackDuration:(long long)arg1 ;
-(void)setHasRentalPlaybackDuration:(BOOL)arg1 ;
-(void)setRentalPlaybackStartedDateTime:(long long)arg1 ;
-(void)setHasRentalPlaybackStartedDateTime:(BOOL)arg1 ;
-(void)setRentalStartedDateTime:(long long)arg1 ;
-(void)setHasRentalStartedDateTime:(BOOL)arg1 ;
@end

