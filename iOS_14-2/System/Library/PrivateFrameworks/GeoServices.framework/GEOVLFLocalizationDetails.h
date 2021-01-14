/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOVLFLocalizationAlgorithmDetails, GEOVLFFailureDetails, GEOVLFGravityVector, GEOVLFSuccessDetails, GEOVLFTileDetails;

@interface GEOVLFLocalizationDetails : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOVLFLocalizationAlgorithmDetails* _algorithmDetails;
	GEOVLFFailureDetails* _failureDetails;
	GEOVLFGravityVector* _gravityVector;
	GEOVLFSuccessDetails* _successDetails;
	GEOVLFTileDetails* _tileDetails;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _relativeTimestampMs;
	unsigned _runTimeMs;
	struct {
		unsigned has_relativeTimestampMs : 1;
		unsigned has_runTimeMs : 1;
		unsigned read_algorithmDetails : 1;
		unsigned read_failureDetails : 1;
		unsigned read_gravityVector : 1;
		unsigned read_successDetails : 1;
		unsigned read_tileDetails : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTileDetails; 
@property (nonatomic,retain) GEOVLFTileDetails * tileDetails; 
@property (assign,nonatomic) BOOL hasRelativeTimestampMs; 
@property (assign,nonatomic) unsigned relativeTimestampMs; 
@property (assign,nonatomic) BOOL hasRunTimeMs; 
@property (assign,nonatomic) unsigned runTimeMs; 
@property (nonatomic,readonly) BOOL hasAlgorithmDetails; 
@property (nonatomic,retain) GEOVLFLocalizationAlgorithmDetails * algorithmDetails; 
@property (nonatomic,readonly) BOOL hasSuccessDetails; 
@property (nonatomic,retain) GEOVLFSuccessDetails * successDetails; 
@property (nonatomic,readonly) BOOL hasFailureDetails; 
@property (nonatomic,retain) GEOVLFFailureDetails * failureDetails; 
@property (nonatomic,readonly) BOOL hasGravityVector; 
@property (nonatomic,retain) GEOVLFGravityVector * gravityVector; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned)runTimeMs;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(GEOVLFTileDetails *)tileDetails;
-(GEOVLFSuccessDetails *)successDetails;
-(id)initWithDictionary:(id)arg1 ;
-(GEOVLFLocalizationAlgorithmDetails *)algorithmDetails;
-(GEOVLFFailureDetails *)failureDetails;
-(GEOVLFGravityVector *)gravityVector;
-(void)setTileDetails:(GEOVLFTileDetails *)arg1 ;
-(BOOL)hasRunTimeMs;
-(void)setRelativeTimestampMs:(unsigned)arg1 ;
-(void)setRunTimeMs:(unsigned)arg1 ;
-(void)setAlgorithmDetails:(GEOVLFLocalizationAlgorithmDetails *)arg1 ;
-(void)setSuccessDetails:(GEOVLFSuccessDetails *)arg1 ;
-(BOOL)hasTileDetails;
-(void)setFailureDetails:(GEOVLFFailureDetails *)arg1 ;
-(void)setGravityVector:(GEOVLFGravityVector *)arg1 ;
-(unsigned)relativeTimestampMs;
-(void)setHasRelativeTimestampMs:(BOOL)arg1 ;
-(BOOL)hasRelativeTimestampMs;
-(void)setHasRunTimeMs:(BOOL)arg1 ;
-(BOOL)hasAlgorithmDetails;
-(BOOL)hasSuccessDetails;
-(BOOL)hasFailureDetails;
-(BOOL)hasGravityVector;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

