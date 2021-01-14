/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEORPIncidentAnnotationDetails, GEORPNewIncidentDetails;

@interface GEORPIncidentFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEORPIncidentAnnotationDetails* _incidentAnnotationDetails;
	GEORPNewIncidentDetails* _newIncidentDetails;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _type;
	struct {
		unsigned has_type : 1;
		unsigned read_incidentAnnotationDetails : 1;
		unsigned read_newIncidentDetails : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasNewIncidentDetails; 
@property (nonatomic,retain) GEORPNewIncidentDetails * newIncidentDetails; 
@property (nonatomic,readonly) BOOL hasIncidentAnnotationDetails; 
@property (nonatomic,retain) GEORPIncidentAnnotationDetails * incidentAnnotationDetails; 
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
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(GEORPNewIncidentDetails *)newIncidentDetails;
-(GEORPIncidentAnnotationDetails *)incidentAnnotationDetails;
-(void)setNewIncidentDetails:(GEORPNewIncidentDetails *)arg1 ;
-(void)setIncidentAnnotationDetails:(GEORPIncidentAnnotationDetails *)arg1 ;
-(BOOL)hasNewIncidentDetails;
-(BOOL)hasIncidentAnnotationDetails;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

