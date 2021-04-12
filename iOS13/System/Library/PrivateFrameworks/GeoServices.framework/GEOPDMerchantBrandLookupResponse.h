/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOPDMerchantBrandLookupResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE68* _childBrandMuids;
	SCD_Struct_GE68* _variantBrandMuids;
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
		unsigned read_childBrandMuids : 1;
		unsigned read_variantBrandMuids : 1;
		unsigned read_geoHashs : 1;
		unsigned read_scope : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_childBrandMuids : 1;
		unsigned wrote_variantBrandMuids : 1;
		unsigned wrote_geoHashs : 1;
		unsigned wrote_muid : 1;
		unsigned wrote_relatedGlobalBrandMuid : 1;
		unsigned wrote_scope : 1;
		unsigned wrote_isPrimaryVariant : 1;
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
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)geoHashType;
-(id)init;
-(void)dealloc;
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
-(NSString *)scope;
-(void)setScope:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(void)_readScope;
-(void)_readGeoHashs;
-(void)_addNoFlagsGeoHash:(id)arg1 ;
-(void)_readChildBrandMuids;
-(void)_addNoFlagsChildBrandMuid:(unsigned long long)arg1 ;
-(void)_readVariantBrandMuids;
-(void)_addNoFlagsVariantBrandMuid:(unsigned long long)arg1 ;
-(NSMutableArray *)geoHashs;
-(unsigned long long)geoHashsCount;
-(void)clearGeoHashs;
-(id)geoHashAtIndex:(unsigned long long)arg1 ;
-(void)addGeoHash:(id)arg1 ;
-(unsigned long long)childBrandMuidsCount;
-(void)clearChildBrandMuids;
-(unsigned long long)childBrandMuidAtIndex:(unsigned long long)arg1 ;
-(void)addChildBrandMuid:(unsigned long long)arg1 ;
-(unsigned long long)variantBrandMuidsCount;
-(void)clearVariantBrandMuids;
-(unsigned long long)variantBrandMuidAtIndex:(unsigned long long)arg1 ;
-(void)addVariantBrandMuid:(unsigned long long)arg1 ;
-(BOOL)hasScope;
-(void)setGeoHashs:(NSMutableArray *)arg1 ;
-(unsigned long long*)childBrandMuids;
-(void)setChildBrandMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long*)variantBrandMuids;
-(void)setVariantBrandMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)isPrimaryVariant;
-(void)setIsPrimaryVariant:(BOOL)arg1 ;
-(void)setHasIsPrimaryVariant:(BOOL)arg1 ;
-(BOOL)hasIsPrimaryVariant;
-(unsigned long long)relatedGlobalBrandMuid;
-(void)setRelatedGlobalBrandMuid:(unsigned long long)arg1 ;
-(void)setHasRelatedGlobalBrandMuid:(BOOL)arg1 ;
-(BOOL)hasRelatedGlobalBrandMuid;
@end

