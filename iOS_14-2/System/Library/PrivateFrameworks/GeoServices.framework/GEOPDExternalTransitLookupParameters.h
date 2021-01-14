/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString, GEOLocation;

@interface GEOPDExternalTransitLookupParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _externalTransitStationCodes;
	NSString* _sourceId;
	GEOLocation* _transactionLocation;
	double _transactionTimestamp;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_transactionTimestamp : 1;
		unsigned read_unknownFields : 1;
		unsigned read_externalTransitStationCodes : 1;
		unsigned read_sourceId : 1;
		unsigned read_transactionLocation : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTransactionTimestamp; 
@property (assign,nonatomic) double transactionTimestamp; 
@property (nonatomic,readonly) BOOL hasTransactionLocation; 
@property (nonatomic,retain) GEOLocation * transactionLocation; 
@property (nonatomic,readonly) BOOL hasSourceId; 
@property (nonatomic,retain) NSString * sourceId; 
@property (nonatomic,retain) NSMutableArray * externalTransitStationCodes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)externalTransitStationCodeType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)sourceId;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)clearSensitiveFields;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasSourceId;
-(unsigned long long)hash;
-(GEOLocation *)transactionLocation;
-(NSMutableArray *)externalTransitStationCodes;
-(void)setTransactionLocation:(GEOLocation *)arg1 ;
-(void)setTransactionTimestamp:(double)arg1 ;
-(void)addExternalTransitStationCode:(id)arg1 ;
-(BOOL)hasTransactionLocation;
-(unsigned long long)externalTransitStationCodesCount;
-(void)clearExternalTransitStationCodes;
-(double)transactionTimestamp;
-(id)externalTransitStationCodeAtIndex:(unsigned long long)arg1 ;
-(void)setHasTransactionTimestamp:(BOOL)arg1 ;
-(BOOL)hasTransactionTimestamp;
-(void)setExternalTransitStationCodes:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSourceId:(NSString *)arg1 ;
@end

