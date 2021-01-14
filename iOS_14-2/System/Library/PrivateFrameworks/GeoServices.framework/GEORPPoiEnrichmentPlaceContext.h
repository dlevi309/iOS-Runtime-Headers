/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString, GEOLatLng, GEOPDMapsIdentifier;

@interface GEORPPoiEnrichmentPlaceContext : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _entityNames;
	NSMutableArray* _localizedAddress;
	NSString* _mapsCategoryId;
	GEOLatLng* _placeCenter;
	GEOPDMapsIdentifier* _placeId;
	NSString* _walletCategoryId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_entityNames : 1;
		unsigned read_localizedAddress : 1;
		unsigned read_mapsCategoryId : 1;
		unsigned read_placeCenter : 1;
		unsigned read_placeId : 1;
		unsigned read_walletCategoryId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPlaceId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * placeId; 
@property (nonatomic,retain) NSMutableArray * entityNames; 
@property (nonatomic,readonly) BOOL hasMapsCategoryId; 
@property (nonatomic,retain) NSString * mapsCategoryId; 
@property (nonatomic,readonly) BOOL hasWalletCategoryId; 
@property (nonatomic,retain) NSString * walletCategoryId; 
@property (nonatomic,retain) NSMutableArray * localizedAddress; 
@property (nonatomic,readonly) BOOL hasPlaceCenter; 
@property (nonatomic,retain) GEOLatLng * placeCenter; 
+(BOOL)isValid:(id)arg1 ;
+(Class)localizedAddressType;
+(id)buildPlaceContextWithPlaceData:(id)arg1 ;
+(Class)entityNameType;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasMapsCategoryId;
-(id)localizedAddressAtIndex:(unsigned long long)arg1 ;
-(GEOPDMapsIdentifier *)placeId;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)mapsCategoryId;
-(id)initWithDictionary:(id)arg1 ;
-(void)setWalletCategoryId:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)localizedAddressCount;
-(void)setMapsCategoryId:(NSString *)arg1 ;
-(BOOL)hasWalletCategoryId;
-(NSString *)walletCategoryId;
-(BOOL)hasPlaceId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)muid;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addLocalizedAddress:(id)arg1 ;
-(GEOLatLng *)placeCenter;
-(void)setPlaceId:(GEOPDMapsIdentifier *)arg1 ;
-(void)addEntityName:(id)arg1 ;
-(void)setPlaceCenter:(GEOLatLng *)arg1 ;
-(unsigned long long)entityNamesCount;
-(void)clearEntityNames;
-(id)entityNameAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)entityNames;
-(void)setEntityNames:(NSMutableArray *)arg1 ;
-(BOOL)hasPlaceCenter;
-(NSMutableArray *)localizedAddress;
-(void)clearLocalizedAddress;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocalizedAddress:(NSMutableArray *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

