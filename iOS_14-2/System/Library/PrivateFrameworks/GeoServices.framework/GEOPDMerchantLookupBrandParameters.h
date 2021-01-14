/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDAdamAppIdentifier, NSString, GEOPDWarsawMerchantIdentifier;

@interface GEOPDMerchantLookupBrandParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDAdamAppIdentifier* _appIdentifier;
	NSString* _merchantCanl;
	NSString* _merchantCode;
	NSString* _merchantId;
	NSString* _rawMerchantCode;
	GEOPDWarsawMerchantIdentifier* _warsawIdentifier;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_appIdentifier : 1;
		unsigned read_merchantCanl : 1;
		unsigned read_merchantCode : 1;
		unsigned read_merchantId : 1;
		unsigned read_rawMerchantCode : 1;
		unsigned read_warsawIdentifier : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMerchantCode; 
@property (nonatomic,retain) NSString * merchantCode; 
@property (nonatomic,readonly) BOOL hasRawMerchantCode; 
@property (nonatomic,retain) NSString * rawMerchantCode; 
@property (nonatomic,readonly) BOOL hasWarsawIdentifier; 
@property (nonatomic,retain) GEOPDWarsawMerchantIdentifier * warsawIdentifier; 
@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) GEOPDAdamAppIdentifier * appIdentifier; 
@property (nonatomic,readonly) BOOL hasMerchantId; 
@property (nonatomic,retain) NSString * merchantId; 
@property (nonatomic,readonly) BOOL hasMerchantCanl; 
@property (nonatomic,retain) NSString * merchantCanl; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasAppIdentifier;
-(id)dictionaryRepresentation;
-(void)setAppIdentifier:(GEOPDAdamAppIdentifier *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDAdamAppIdentifier *)appIdentifier;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)merchantId;
-(NSString *)merchantCanl;
-(void)setMerchantId:(NSString *)arg1 ;
-(void)setMerchantCanl:(NSString *)arg1 ;
-(BOOL)hasMerchantId;
-(BOOL)hasMerchantCanl;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)merchantCode;
-(NSString *)rawMerchantCode;
-(GEOPDWarsawMerchantIdentifier *)warsawIdentifier;
-(void)setMerchantCode:(NSString *)arg1 ;
-(void)setRawMerchantCode:(NSString *)arg1 ;
-(void)setWarsawIdentifier:(GEOPDWarsawMerchantIdentifier *)arg1 ;
-(BOOL)hasMerchantCode;
-(BOOL)hasRawMerchantCode;
-(BOOL)hasWarsawIdentifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

