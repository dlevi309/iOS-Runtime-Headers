/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPArtist, NSString, MIPSeries;

@interface MIPTVShow : PBCodable <NSCopying> {

	MIPArtist* _artist;
	NSString* _episodeId;
	NSString* _episodeSortId;
	NSString* _networkName;
	int _seasonNumber;
	MIPSeries* _series;
	int _videoQuality;
	SCD_Struct_MI1 _has;

}

@property (nonatomic,readonly) BOOL hasArtist; 
@property (nonatomic,retain) MIPArtist * artist;                    //@synthesize artist=_artist - In the implementation block
@property (nonatomic,readonly) BOOL hasSeries; 
@property (nonatomic,retain) MIPSeries * series;                    //@synthesize series=_series - In the implementation block
@property (assign,nonatomic) BOOL hasSeasonNumber; 
@property (assign,nonatomic) int seasonNumber;                      //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasEpisodeId; 
@property (nonatomic,retain) NSString * episodeId;                  //@synthesize episodeId=_episodeId - In the implementation block
@property (nonatomic,readonly) BOOL hasEpisodeSortId; 
@property (nonatomic,retain) NSString * episodeSortId;              //@synthesize episodeSortId=_episodeSortId - In the implementation block
@property (assign,nonatomic) BOOL hasVideoQuality; 
@property (assign,nonatomic) int videoQuality;                      //@synthesize videoQuality=_videoQuality - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkName; 
@property (nonatomic,retain) NSString * networkName;                //@synthesize networkName=_networkName - In the implementation block
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
-(void)setNetworkName:(NSString *)arg1 ;
-(NSString *)networkName;
-(void)setArtist:(MIPArtist *)arg1 ;
-(BOOL)hasArtist;
-(int)seasonNumber;
-(void)setSeasonNumber:(int)arg1 ;
-(void)setHasSeasonNumber:(BOOL)arg1 ;
-(BOOL)hasSeasonNumber;
-(void)setSeries:(MIPSeries *)arg1 ;
-(void)setEpisodeId:(NSString *)arg1 ;
-(void)setEpisodeSortId:(NSString *)arg1 ;
-(BOOL)hasSeries;
-(BOOL)hasEpisodeId;
-(BOOL)hasEpisodeSortId;
-(void)setHasVideoQuality:(BOOL)arg1 ;
-(BOOL)hasVideoQuality;
-(BOOL)hasNetworkName;
-(MIPSeries *)series;
-(NSString *)episodeId;
-(NSString *)episodeSortId;
@end

