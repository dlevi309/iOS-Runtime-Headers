/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_offlineMarkets : 1;
		unsigned wrote_transitMarkets : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSArray * queryItems; 
@property (nonatomic,readonly) NSDictionary * queryParameters; 
@property (nonatomic,retain) NSMutableArray * transitMarkets; 
@property (nonatomic,retain) NSMutableArray * offlineMarkets; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)additionalEnabledMarkets;
+(Class)transitMarketType;
+(Class)offlineMarketType;
+(id)_additionalEnabledTransitMarkets;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSArray *)queryItems;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)reload;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSDictionary *)queryParameters;
-(void)_readTransitMarkets;
-(void)_addNoFlagsTransitMarket:(id)arg1 ;
-(void)_readOfflineMarkets;
-(void)_addNoFlagsOfflineMarket:(id)arg1 ;
-(NSMutableArray *)transitMarkets;
-(NSMutableArray *)offlineMarkets;
-(unsigned long long)transitMarketsCount;
-(void)clearTransitMarkets;
-(id)transitMarketAtIndex:(unsigned long long)arg1 ;
-(void)addTransitMarket:(id)arg1 ;
-(unsigned long long)offlineMarketsCount;
-(void)clearOfflineMarkets;
-(id)offlineMarketAtIndex:(unsigned long long)arg1 ;
-(void)addOfflineMarket:(id)arg1 ;
-(void)setTransitMarkets:(NSMutableArray *)arg1 ;
-(void)setOfflineMarkets:(NSMutableArray *)arg1 ;
@end

