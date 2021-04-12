/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLocation;

@interface GEORoutingPathPoint : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOLocation* _location;
	long long _roadId;
	unsigned _fow;
	unsigned _frc;
	int _type;
	struct {
		unsigned has_roadId : 1;
		unsigned has_fow : 1;
		unsigned has_frc : 1;
		unsigned has_type : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasRoadId; 
@property (assign,nonatomic) long long roadId; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (assign,nonatomic) BOOL hasFrc; 
@property (assign,nonatomic) unsigned frc; 
@property (assign,nonatomic) BOOL hasFow; 
@property (assign,nonatomic) unsigned fow; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(unsigned)frc;
-(unsigned)fow;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(id)jsonRepresentation;
-(long long)roadId;
-(BOOL)hasFrc;
-(BOOL)hasFow;
-(void)clearSensitiveFields;
-(GEOLocation *)location;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setFrc:(unsigned)arg1 ;
-(void)setFow:(unsigned)arg1 ;
-(void)setType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(id)description;
-(BOOL)hasRoadId;
-(void)setHasRoadId:(BOOL)arg1 ;
-(BOOL)hasLocation;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setRoadId:(long long)arg1 ;
-(void)setHasFrc:(BOOL)arg1 ;
-(void)setHasFow:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

