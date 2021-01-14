/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDClientRankingFeatureTypeResult : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _resultFeature;
	struct {
		unsigned has_resultFeature : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasResultFeature; 
@property (assign,nonatomic) int resultFeature; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)resultFeature;
-(void)setResultFeature:(int)arg1 ;
-(void)setHasResultFeature:(BOOL)arg1 ;
-(BOOL)hasResultFeature;
-(id)resultFeatureAsString:(int)arg1 ;
-(int)StringAsResultFeature:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
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

