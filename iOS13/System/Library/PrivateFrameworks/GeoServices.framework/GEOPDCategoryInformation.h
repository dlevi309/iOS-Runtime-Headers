/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOLocalizedString, NSString, GEOStyleAttributes;

@interface GEOPDCategoryInformation : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOLocalizedString* _localizedMapsCategoryName;
	NSString* _mapsCategoryId;
	GEOStyleAttributes* _mapsCategoryStyleAttributes;
	NSString* _walletCategoryId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_localizedMapsCategoryName : 1;
		unsigned read_mapsCategoryId : 1;
		unsigned read_mapsCategoryStyleAttributes : 1;
		unsigned read_walletCategoryId : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_localizedMapsCategoryName : 1;
		unsigned wrote_mapsCategoryId : 1;
		unsigned wrote_mapsCategoryStyleAttributes : 1;
		unsigned wrote_walletCategoryId : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasWalletCategoryId; 
@property (nonatomic,retain) NSString * walletCategoryId; 
@property (nonatomic,readonly) BOOL hasMapsCategoryId; 
@property (nonatomic,retain) NSString * mapsCategoryId; 
@property (nonatomic,readonly) BOOL hasLocalizedMapsCategoryName; 
@property (nonatomic,retain) GEOLocalizedString * localizedMapsCategoryName; 
@property (nonatomic,readonly) BOOL hasMapsCategoryStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * mapsCategoryStyleAttributes; 
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
-(void)_readMapsCategoryId;
-(void)_readWalletCategoryId;
-(NSString *)mapsCategoryId;
-(NSString *)walletCategoryId;
-(void)setMapsCategoryId:(NSString *)arg1 ;
-(void)setWalletCategoryId:(NSString *)arg1 ;
-(BOOL)hasMapsCategoryId;
-(BOOL)hasWalletCategoryId;
-(void)_readLocalizedMapsCategoryName;
-(void)_readMapsCategoryStyleAttributes;
-(GEOLocalizedString *)localizedMapsCategoryName;
-(GEOStyleAttributes *)mapsCategoryStyleAttributes;
-(void)setLocalizedMapsCategoryName:(GEOLocalizedString *)arg1 ;
-(void)setMapsCategoryStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(BOOL)hasLocalizedMapsCategoryName;
-(BOOL)hasMapsCategoryStyleAttributes;
@end

