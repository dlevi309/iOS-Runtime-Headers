/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPDirectionsFeedbackContext, GEORPDirectionsCorrections;

@interface GEORPDirectionsFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPDirectionsFeedbackContext* _directionsContext;
	GEORPDirectionsCorrections* _directionsCorrections;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _correctionType;
	struct {
		unsigned has_correctionType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_directionsContext : 1;
		unsigned read_directionsCorrections : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDirectionsContext; 
@property (nonatomic,retain) GEORPDirectionsFeedbackContext * directionsContext; 
@property (nonatomic,readonly) BOOL hasDirectionsCorrections; 
@property (nonatomic,retain) GEORPDirectionsCorrections * directionsCorrections; 
@property (assign,nonatomic) BOOL hasCorrectionType; 
@property (assign,nonatomic) int correctionType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setCorrectionType:(int)arg1 ;
-(int)correctionType;
-(void)setHasCorrectionType:(BOOL)arg1 ;
-(BOOL)hasCorrectionType;
-(id)correctionTypeAsString:(int)arg1 ;
-(int)StringAsCorrectionType:(id)arg1 ;
-(GEORPDirectionsFeedbackContext *)directionsContext;
-(GEORPDirectionsCorrections *)directionsCorrections;
-(void)setDirectionsContext:(GEORPDirectionsFeedbackContext *)arg1 ;
-(void)setDirectionsCorrections:(GEORPDirectionsCorrections *)arg1 ;
-(BOOL)hasDirectionsContext;
-(BOOL)hasDirectionsCorrections;
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
@end

