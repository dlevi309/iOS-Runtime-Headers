/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOPDMerchantBrandLookupResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE92* _abstractOfBrandMuids;
	SCD_Struct_GE92* _childBrandMuids;
	SCD_Struct_GE92* _variantBrandMuids;
	NSMutableArray* _geoHashs;
	unsigned long long _muid;
	unsigned long long _relatedGlobalBrandMuid;
	NSString* _scope;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _isPrimaryVariant;
	struct {
		unsigned has_muid : 1;
		unsigned has_relatedGlobalBrandMuid : 1;
		unsigned has_isPrimaryVariant : 1;
		unsigned read_unknownFields : 1;
		unsigned read_abstractOfBrandMuids : 1;
		unsigned read_childBrandMuids : 1;
		unsigned read_variantBrandMuids : 1;
		unsigned read_geoHashs : 1;
		unsigned read_scope : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasScope; 
@property (nonatomic,retain) NSString * scope; 
@property (nonatomic,retain) NSMutableArray * geoHashs; 
@property (nonatomic,readonly) unsigned long long childBrandMuidsCount; 
@property (nonatomic,readonly) unsigned long long* childBrandMuids; 
@property (nonatomic,readonly) unsigned long long variantBrandMuidsCount; 
@property (nonatomic,readonly) unsigned long long* variantBrandMuids; 
@property (assign,nonatomic) BOOL hasIsPrimaryVariant; 
@property (assign,nonatomic) BOOL isPrimaryVariant; 
@property (assign,nonatomic) BOOL hasRelatedGlobalBrandMuid; 
@property (assign,nonatomic) unsigned long long relatedGlobalBrandMuid; 
@property (nonatomic,readonly) unsigned long long abstractOfBrandMuidsCount; 
@property (nonatomic,readonly) unsigned long long* abstractOfBrandMuids; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)geoHashType;
-(BOOL)hasMuid;
-(void)setHasMuid:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)setScope:(NSString *)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)scope;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSMutableArray *)geoHashs;
-(BOOL)hasScope;
-(unsigned long long)hash;
-(void)addGeoHash:(id)arg1 ;
-(void)addVariantBrandMuid:(unsigned long long)arg1 ;
-(void)addChildBrandMuid:(unsigned long long)arg1 ;
-(void)setIsPrimaryVariant:(BOOL)arg1 ;
-(void)setRelatedGlobalBrandMuid:(unsigned long long)arg1 ;
-(void)addAbstractOfBrandMuid:(unsigned long long)arg1 ;
-(unsigned long long)geoHashsCount;
-(void)clearGeoHashs;
-(id)geoHashAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)childBrandMuidsCount;
-(void)clearChildBrandMuids;
-(unsigned long long)childBrandMuidAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)variantBrandMuidsCount;
-(void)clearVariantBrandMuids;
-(void)setGeoHashs:(NSMutableArray *)arg1 ;
-(unsigned long long)variantBrandMuidAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)abstractOfBrandMuidsCount;
-(void)clearAbstractOfBrandMuids;
-(unsigned long long)abstractOfBrandMuidAtIndex:(unsigned long long)arg1 ;
-(unsigned long long*)childBrandMuids;
-(void)setChildBrandMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long*)variantBrandMuids;
-(void)setVariantBrandMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)isPrimaryVariant;
-(void)setHasIsPrimaryVariant:(BOOL)arg1 ;
-(BOOL)hasIsPrimaryVariant;
-(unsigned long long)relatedGlobalBrandMuid;
-(void)setHasRelatedGlobalBrandMuid:(BOOL)arg1 ;
-(BOOL)hasRelatedGlobalBrandMuid;
-(unsigned long long*)abstractOfBrandMuids;
-(void)setAbstractOfBrandMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)muid;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

