/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_externalTransitStationCodes : 1;
		unsigned wrote_sourceId : 1;
		unsigned wrote_transactionLocation : 1;
		unsigned wrote_transactionTimestamp : 1;
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
-(void)clearSensitiveFields;
-(void)_readSourceId;
-(NSString *)sourceId;
-(void)setSourceId:(NSString *)arg1 ;
-(BOOL)hasSourceId;
-(NSMutableArray *)externalTransitStationCodes;
-(void)_readTransactionLocation;
-(GEOLocation *)transactionLocation;
-(void)setTransactionLocation:(GEOLocation *)arg1 ;
-(BOOL)hasTransactionLocation;
-(double)transactionTimestamp;
-(void)setTransactionTimestamp:(double)arg1 ;
-(void)setHasTransactionTimestamp:(BOOL)arg1 ;
-(BOOL)hasTransactionTimestamp;
-(void)_readExternalTransitStationCodes;
-(void)_addNoFlagsExternalTransitStationCode:(id)arg1 ;
-(unsigned long long)externalTransitStationCodesCount;
-(void)clearExternalTransitStationCodes;
-(id)externalTransitStationCodeAtIndex:(unsigned long long)arg1 ;
-(void)addExternalTransitStationCode:(id)arg1 ;
-(void)setExternalTransitStationCodes:(NSMutableArray *)arg1 ;
@end

