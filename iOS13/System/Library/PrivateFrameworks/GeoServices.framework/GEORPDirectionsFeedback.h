/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_directionsContext : 1;
		unsigned wrote_directionsCorrections : 1;
		unsigned wrote_correctionType : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)correctionType;
-(void)setCorrectionType:(int)arg1 ;
-(void)setHasCorrectionType:(BOOL)arg1 ;
-(BOOL)hasCorrectionType;
-(id)correctionTypeAsString:(int)arg1 ;
-(int)StringAsCorrectionType:(id)arg1 ;
-(void)_readDirectionsContext;
-(void)_readDirectionsCorrections;
-(GEORPDirectionsFeedbackContext *)directionsContext;
-(GEORPDirectionsCorrections *)directionsCorrections;
-(void)setDirectionsContext:(GEORPDirectionsFeedbackContext *)arg1 ;
-(void)setDirectionsCorrections:(GEORPDirectionsCorrections *)arg1 ;
-(BOOL)hasDirectionsContext;
-(BOOL)hasDirectionsCorrections;
@end

