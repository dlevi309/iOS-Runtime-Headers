/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSArray, NSDictionary;

@interface GEOAdditionalEnabledMarkets : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _offlineMarkets;
	NSMutableArray* _transitMarkets;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_offlineMarkets : 1;
		unsigned read_transitMarkets : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSArray * queryItems; 
@property (nonatomic,readonly) NSDictionary * queryParameters; 
@property (nonatomic,retain) NSMutableArray * transitMarkets; 
@property (nonatomic,retain) NSMutableArray * offlineMarkets; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)additionalEnabledMarkets;
+(BOOL)isValid:(id)arg1 ;
+(Class)offlineMarketType;
+(id)_additionalEnabledTransitMarkets;
+(Class)transitMarketType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)setTransitMarkets:(NSMutableArray *)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSArray *)queryItems;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)transitMarketAtIndex:(unsigned long long)arg1 ;
-(id)jsonRepresentation;
-(id)offlineMarketAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)transitMarkets;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)addTransitMarket:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableArray *)offlineMarkets;
-(id)description;
-(void)setOfflineMarkets:(NSMutableArray *)arg1 ;
-(void)reload;
-(void)clearOfflineMarkets;
-(unsigned long long)offlineMarketsCount;
-(unsigned long long)hash;
-(NSDictionary *)queryParameters;
-(BOOL)readFrom:(id)arg1 ;
-(void)addOfflineMarket:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearTransitMarkets;
-(unsigned long long)transitMarketsCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

