/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOFormattedString;

@interface GEOClickableAdvisory : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _incidentIndexs;
	GEOFormattedString* _advisoryMessage;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_incidentIndexs : 1;
		unsigned read_advisoryMessage : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAdvisoryMessage; 
@property (nonatomic,retain) GEOFormattedString * advisoryMessage; 
@property (nonatomic,readonly) unsigned long long incidentIndexsCount; 
@property (nonatomic,readonly) unsigned* incidentIndexs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)addIncidentIndex:(unsigned)arg1 ;
-(void)clearIncidentIndexs;
-(unsigned*)incidentIndexs;
-(void)setIncidentIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setAdvisoryMessage:(GEOFormattedString *)arg1 ;
-(BOOL)hasAdvisoryMessage;
-(unsigned long long)incidentIndexsCount;
-(unsigned)incidentIndexAtIndex:(unsigned long long)arg1 ;
-(GEOFormattedString *)advisoryMessage;
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
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

