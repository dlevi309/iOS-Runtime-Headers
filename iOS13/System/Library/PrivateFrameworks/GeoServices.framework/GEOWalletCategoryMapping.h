/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	struct {
		unsigned read_stylesAttributes : 1;
		unsigned read_walletCategory : 1;
		unsigned wrote_stylesAttributes : 1;
		unsigned wrote_walletCategory : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasWalletCategory; 
@property (nonatomic,retain) NSString * walletCategory; 
@property (nonatomic,readonly) BOOL hasStylesAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * stylesAttributes; 
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
-(void)_readWalletCategory;
-(void)_readStylesAttributes;
-(NSString *)walletCategory;
-(GEOStyleAttributes *)stylesAttributes;
-(void)setWalletCategory:(NSString *)arg1 ;
-(void)setStylesAttributes:(GEOStyleAttributes *)arg1 ;
-(BOOL)hasWalletCategory;
-(BOOL)hasStylesAttributes;
@end

