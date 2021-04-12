/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDClientRankingFeatureTypeResult, GEOPDClientRankingFeatureTypeSource, GEOPDClientRankingFeatureFunctionTypeDiscrete, GEOPDClientRankingFeatureFunctionTypeLinear;

@interface GEOPDClientRankingFeatureMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDClientRankingFeatureTypeResult* _featureTypeResult;
	GEOPDClientRankingFeatureTypeSource* _featureTypeSource;
	GEOPDClientRankingFeatureFunctionTypeDiscrete* _functionTypeDiscrete;
	GEOPDClientRankingFeatureFunctionTypeLinear* _functionTypeLinear;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _featureType;
	int _functionType;
	struct {
		unsigned has_featureType : 1;
		unsigned has_functionType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_featureTypeResult : 1;
		unsigned read_featureTypeSource : 1;
		unsigned read_functionTypeDiscrete : 1;
		unsigned read_functionTypeLinear : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasFeatureType; 
@property (assign,nonatomic) int featureType; 
@property (nonatomic,readonly) BOOL hasFeatureTypeSource; 
@property (nonatomic,retain) GEOPDClientRankingFeatureTypeSource * featureTypeSource; 
@property (nonatomic,readonly) BOOL hasFeatureTypeResult; 
@property (nonatomic,retain) GEOPDClientRankingFeatureTypeResult * featureTypeResult; 
@property (assign,nonatomic) BOOL hasFunctionType; 
@property (assign,nonatomic) int functionType; 
@property (nonatomic,readonly) BOOL hasFunctionTypeLinear; 
@property (nonatomic,retain) GEOPDClientRankingFeatureFunctionTypeLinear * functionTypeLinear; 
@property (nonatomic,readonly) BOOL hasFunctionTypeDiscrete; 
@property (nonatomic,retain) GEOPDClientRankingFeatureFunctionTypeDiscrete * functionTypeDiscrete; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)functionType;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDClientRankingFeatureTypeSource *)featureTypeSource;
-(GEOPDClientRankingFeatureTypeResult *)featureTypeResult;
-(GEOPDClientRankingFeatureFunctionTypeLinear *)functionTypeLinear;
-(GEOPDClientRankingFeatureFunctionTypeDiscrete *)functionTypeDiscrete;
-(void)setFeatureTypeSource:(GEOPDClientRankingFeatureTypeSource *)arg1 ;
-(void)setFeatureTypeResult:(GEOPDClientRankingFeatureTypeResult *)arg1 ;
-(void)setFunctionType:(int)arg1 ;
-(void)setFunctionTypeLinear:(GEOPDClientRankingFeatureFunctionTypeLinear *)arg1 ;
-(void)setFunctionTypeDiscrete:(GEOPDClientRankingFeatureFunctionTypeDiscrete *)arg1 ;
-(BOOL)hasFeatureTypeSource;
-(BOOL)hasFeatureTypeResult;
-(void)setHasFunctionType:(BOOL)arg1 ;
-(BOOL)hasFunctionType;
-(id)functionTypeAsString:(int)arg1 ;
-(int)StringAsFunctionType:(id)arg1 ;
-(BOOL)hasFunctionTypeLinear;
-(BOOL)hasFunctionTypeDiscrete;
-(void)readAll:(BOOL)arg1 ;
-(void)setFeatureType:(int)arg1 ;
-(void)setHasFeatureType:(BOOL)arg1 ;
-(BOOL)hasFeatureType;
-(id)featureTypeAsString:(int)arg1 ;
-(int)StringAsFeatureType:(id)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(int)featureType;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end
