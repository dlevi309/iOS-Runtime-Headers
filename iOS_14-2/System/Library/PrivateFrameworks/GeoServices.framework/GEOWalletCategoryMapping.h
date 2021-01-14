/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOStyleAttributes, NSString;

@interface GEOWalletCategoryMapping : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOStyleAttributes* _stylesAttributes;
	NSString* _walletCategory;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasWalletCategory; 
@property (nonatomic,retain) NSString * walletCategory; 
@property (nonatomic,readonly) BOOL hasStylesAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * stylesAttributes; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)walletCategory;
-(GEOStyleAttributes *)stylesAttributes;
-(void)setWalletCategory:(NSString *)arg1 ;
-(void)setStylesAttributes:(GEOStyleAttributes *)arg1 ;
-(BOOL)hasWalletCategory;
-(BOOL)hasStylesAttributes;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

