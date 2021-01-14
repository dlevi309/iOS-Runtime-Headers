/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDCategoryLookupParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	long long _industryCode;
	NSString* _mapsCategoryId;
	NSString* _walletCategoryId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_industryCode : 1;
		unsigned read_unknownFields : 1;
		unsigned read_mapsCategoryId : 1;
		unsigned read_walletCategoryId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMapsCategoryId; 
@property (nonatomic,retain) NSString * mapsCategoryId; 
@property (nonatomic,readonly) BOOL hasWalletCategoryId; 
@property (nonatomic,retain) NSString * walletCategoryId; 
@property (assign,nonatomic) BOOL hasIndustryCode; 
@property (assign,nonatomic) long long industryCode; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasMapsCategoryId;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)mapsCategoryId;
-(id)initWithDictionary:(id)arg1 ;
-(void)setWalletCategoryId:(NSString *)arg1 ;
-(id)description;
-(void)setMapsCategoryId:(NSString *)arg1 ;
-(BOOL)hasWalletCategoryId;
-(NSString *)walletCategoryId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIndustryCode:(long long)arg1 ;
-(long long)industryCode;
-(BOOL)hasIndustryCode;
-(void)setHasIndustryCode:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

