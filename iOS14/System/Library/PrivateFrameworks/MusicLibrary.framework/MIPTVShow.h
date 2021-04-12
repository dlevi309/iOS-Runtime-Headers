/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)networkName;
-(id)dictionaryRepresentation;
-(int)seasonNumber;
-(void)setSeasonNumber:(int)arg1 ;
-(MIPArtist *)artist;
-(void)setNetworkName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(MIPSeries *)series;
-(id)description;
-(void)setHasSeasonNumber:(BOOL)arg1 ;
-(BOOL)hasArtist;
-(unsigned long long)hash;
-(int)videoQuality;
-(BOOL)readFrom:(id)arg1 ;
-(void)setArtist:(MIPArtist *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasSeasonNumber;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setVideoQuality:(int)arg1 ;
-(void)setSeries:(MIPSeries *)arg1 ;
-(void)setEpisodeId:(NSString *)arg1 ;
-(void)setEpisodeSortId:(NSString *)arg1 ;
-(BOOL)hasSeries;
-(BOOL)hasEpisodeId;
-(BOOL)hasEpisodeSortId;
-(void)setHasVideoQuality:(BOOL)arg1 ;
-(BOOL)hasVideoQuality;
-(BOOL)hasNetworkName;
-(NSString *)episodeId;
-(NSString *)episodeSortId;
@end

