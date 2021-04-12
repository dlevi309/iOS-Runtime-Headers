/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_industryCode : 1;
		unsigned wrote_mapsCategoryId : 1;
		unsigned wrote_walletCategoryId : 1;
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
-(long long)industryCode;
-(void)setIndustryCode:(long long)arg1 ;
-(void)setHasIndustryCode:(BOOL)arg1 ;
-(BOOL)hasIndustryCode;
@end

