/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOFormattedString;

@interface GEOElevationSegmentDescription : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOFormattedString* _formattedDescription;
	unsigned _endOffsetM;
	unsigned _startOffsetM;
	struct {
		unsigned has_endOffsetM : 1;
		unsigned has_startOffsetM : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStartOffsetM; 
@property (assign,nonatomic) unsigned startOffsetM; 
@property (assign,nonatomic) BOOL hasEndOffsetM; 
@property (assign,nonatomic) unsigned endOffsetM; 
@property (nonatomic,readonly) BOOL hasFormattedDescription; 
@property (nonatomic,retain) GEOFormattedString * formattedDescription; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned)endOffsetM;
-(void)setStartOffsetM:(unsigned)arg1 ;
-(unsigned)startOffsetM;
-(void)setEndOffsetM:(unsigned)arg1 ;
-(GEOFormattedString *)formattedDescription;
-(void)setFormattedDescription:(GEOFormattedString *)arg1 ;
-(void)setHasStartOffsetM:(BOOL)arg1 ;
-(BOOL)hasStartOffsetM;
-(void)setHasEndOffsetM:(BOOL)arg1 ;
-(BOOL)hasEndOffsetM;
-(BOOL)hasFormattedDescription;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

