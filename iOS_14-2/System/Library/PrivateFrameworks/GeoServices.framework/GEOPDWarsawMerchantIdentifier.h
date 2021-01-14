/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDWarsawMerchantIdentifier : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _merchantDomain;
	NSString* _merchantId;
	NSString* _merchantName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_merchantDomain : 1;
		unsigned read_merchantId : 1;
		unsigned read_merchantName : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMerchantDomain; 
@property (nonatomic,retain) NSString * merchantDomain; 
@property (nonatomic,readonly) BOOL hasMerchantName; 
@property (nonatomic,retain) NSString * merchantName; 
@property (nonatomic,readonly) BOOL hasMerchantId; 
@property (nonatomic,retain) NSString * merchantId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)merchantId;
-(void)setMerchantId:(NSString *)arg1 ;
-(BOOL)hasMerchantId;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)merchantDomain;
-(NSString *)merchantName;
-(void)setMerchantDomain:(NSString *)arg1 ;
-(void)setMerchantName:(NSString *)arg1 ;
-(BOOL)hasMerchantDomain;
-(BOOL)hasMerchantName;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

