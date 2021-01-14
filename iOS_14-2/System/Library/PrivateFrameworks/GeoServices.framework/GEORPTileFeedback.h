/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPCorrectedCoordinate, GEORPCorrectedLabel;

@interface GEORPTileFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPCorrectedCoordinate* _coordinate;
	GEORPCorrectedLabel* _label;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _type;
	struct {
		unsigned has_type : 1;
		unsigned read_unknownFields : 1;
		unsigned read_coordinate : 1;
		unsigned read_label : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) GEORPCorrectedLabel * label; 
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEORPCorrectedCoordinate * coordinate; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasCoordinate;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(id)init;
-(BOOL)hasLabel;
-(int)StringAsType:(id)arg1 ;
-(id)jsonRepresentation;
-(GEORPCorrectedCoordinate *)coordinate;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setCoordinate:(GEORPCorrectedCoordinate *)arg1 ;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLabel:(GEORPCorrectedLabel *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEORPCorrectedLabel *)label;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

