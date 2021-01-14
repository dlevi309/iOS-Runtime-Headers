/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLocation;

@interface GEOPDGroundViewLabelParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _locationId;
	GEOLocation* _location;
	struct {
		unsigned has_locationId : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasLocationId; 
@property (assign,nonatomic) unsigned long long locationId; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)clearSensitiveFields;
-(GEOLocation *)location;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(id)description;
-(BOOL)hasLocation;
-(unsigned long long)locationId;
-(unsigned long long)hash;
-(void)setLocationId:(unsigned long long)arg1 ;
-(void)setHasLocationId:(BOOL)arg1 ;
-(BOOL)hasLocationId;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

