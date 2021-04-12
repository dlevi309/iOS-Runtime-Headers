/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEORPIncidentLocation, GEORPUserLocationDetails;

@interface GEORPNewIncidentDetails : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEORPIncidentLocation* _incidentLocation;
	GEORPUserLocationDetails* _userLocation;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _type;
	struct {
		unsigned has_type : 1;
		unsigned read_incidentLocation : 1;
		unsigned read_userLocation : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasUserLocation; 
@property (nonatomic,retain) GEORPUserLocationDetails * userLocation; 
@property (nonatomic,readonly) BOOL hasIncidentLocation; 
@property (nonatomic,retain) GEORPIncidentLocation * incidentLocation; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(id)init;
-(int)StringAsType:(id)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setUserLocation:(GEORPUserLocationDetails *)arg1 ;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(GEORPUserLocationDetails *)userLocation;
-(BOOL)hasUserLocation;
-(GEORPIncidentLocation *)incidentLocation;
-(void)setIncidentLocation:(GEORPIncidentLocation *)arg1 ;
-(BOOL)hasIncidentLocation;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

