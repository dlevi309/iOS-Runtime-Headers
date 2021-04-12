/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOEVInfo, GEOLPRInfo;

@interface GEOVehicleSpecifications : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOEVInfo* _evInfo;
	GEOLPRInfo* _lprInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _lprPlateMissingReason;
	struct {
		unsigned has_lprPlateMissingReason : 1;
		unsigned read_unknownFields : 1;
		unsigned read_evInfo : 1;
		unsigned read_lprInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLprInfo; 
@property (nonatomic,retain) GEOLPRInfo * lprInfo; 
@property (nonatomic,readonly) BOOL hasEvInfo; 
@property (nonatomic,retain) GEOEVInfo * evInfo; 
@property (assign,nonatomic) BOOL hasLprPlateMissingReason; 
@property (assign,nonatomic) int lprPlateMissingReason; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(GEOEVInfo *)evInfo;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(GEOLPRInfo *)lprInfo;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setLprInfo:(GEOLPRInfo *)arg1 ;
-(BOOL)hasLprInfo;
-(void)setLprPlateMissingReason:(int)arg1 ;
-(int)lprPlateMissingReason;
-(void)setHasLprPlateMissingReason:(BOOL)arg1 ;
-(BOOL)hasLprPlateMissingReason;
-(id)lprPlateMissingReasonAsString:(int)arg1 ;
-(int)StringAsLprPlateMissingReason:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasEvInfo;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setEvInfo:(GEOEVInfo *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

