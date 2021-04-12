/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOAdvisoryCard, GEOFormattedString;

@interface GEOAdvisoryNotice : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _incidentIndexs;
	GEOAdvisoryCard* _advisoryCard;
	GEOFormattedString* _noticeText;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _shouldAlwaysShowAdvisoryCard;
	struct {
		unsigned has_shouldAlwaysShowAdvisoryCard : 1;
		unsigned read_unknownFields : 1;
		unsigned read_incidentIndexs : 1;
		unsigned read_advisoryCard : 1;
		unsigned read_noticeText : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasNoticeText; 
@property (nonatomic,retain) GEOFormattedString * noticeText; 
@property (nonatomic,readonly) unsigned long long incidentIndexsCount; 
@property (nonatomic,readonly) unsigned* incidentIndexs; 
@property (nonatomic,readonly) BOOL hasAdvisoryCard; 
@property (nonatomic,retain) GEOAdvisoryCard * advisoryCard; 
@property (assign,nonatomic) BOOL hasShouldAlwaysShowAdvisoryCard; 
@property (assign,nonatomic) BOOL shouldAlwaysShowAdvisoryCard; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(GEOAdvisoryCard *)advisoryCard;
-(void)setNoticeText:(GEOFormattedString *)arg1 ;
-(void)addIncidentIndex:(unsigned)arg1 ;
-(void)setAdvisoryCard:(GEOAdvisoryCard *)arg1 ;
-(void)setShouldAlwaysShowAdvisoryCard:(BOOL)arg1 ;
-(void)clearIncidentIndexs;
-(BOOL)hasNoticeText;
-(unsigned*)incidentIndexs;
-(void)setIncidentIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasAdvisoryCard;
-(BOOL)shouldAlwaysShowAdvisoryCard;
-(void)setHasShouldAlwaysShowAdvisoryCard:(BOOL)arg1 ;
-(BOOL)hasShouldAlwaysShowAdvisoryCard;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)incidentIndexsCount;
-(unsigned)incidentIndexAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(GEOFormattedString *)noticeText;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

