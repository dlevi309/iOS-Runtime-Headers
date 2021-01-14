/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPArtist, NSString, MIPSeries;

@interface MIPPodcast : PBCodable <NSCopying> {

	MIPArtist* _artist;
	NSString* _externalGuid;
	NSString* _feedUrl;
	MIPSeries* _series;

}

@property (nonatomic,readonly) BOOL hasArtist; 
@property (nonatomic,retain) MIPArtist * artist;                   //@synthesize artist=_artist - In the implementation block
@property (nonatomic,readonly) BOOL hasSeries; 
@property (nonatomic,retain) MIPSeries * series;                   //@synthesize series=_series - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalGuid; 
@property (nonatomic,retain) NSString * externalGuid;              //@synthesize externalGuid=_externalGuid - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedUrl; 
@property (nonatomic,retain) NSString * feedUrl;                   //@synthesize feedUrl=_feedUrl - In the implementation block
-(id)dictionaryRepresentation;
-(MIPArtist *)artist;
-(void)mergeFrom:(id)arg1 ;
-(MIPSeries *)series;
-(id)description;
-(NSString *)feedUrl;
-(BOOL)hasArtist;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setArtist:(MIPArtist *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSeries:(MIPSeries *)arg1 ;
-(BOOL)hasSeries;
-(void)setExternalGuid:(NSString *)arg1 ;
-(void)setFeedUrl:(NSString *)arg1 ;
-(BOOL)hasExternalGuid;
-(BOOL)hasFeedUrl;
-(NSString *)externalGuid;
@end

