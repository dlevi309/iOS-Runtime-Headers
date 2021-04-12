/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDPlaceCollectionFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _expectedResultCount;
	BOOL _isCollectionView;
	BOOL _partiallyClientize;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasExpectedResultCount; 
@property (assign,nonatomic) unsigned expectedResultCount; 
@property (assign,nonatomic) BOOL hasPartiallyClientize; 
@property (assign,nonatomic) BOOL partiallyClientize; 
@property (assign,nonatomic) BOOL hasIsCollectionView; 
@property (assign,nonatomic) BOOL isCollectionView; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setExpectedResultCount:(unsigned)arg1 ;
-(void)setPartiallyClientize:(BOOL)arg1 ;
-(void)setIsCollectionView:(BOOL)arg1 ;
-(unsigned)expectedResultCount;
-(void)setHasExpectedResultCount:(BOOL)arg1 ;
-(BOOL)hasExpectedResultCount;
-(BOOL)partiallyClientize;
-(void)setHasPartiallyClientize:(BOOL)arg1 ;
-(BOOL)hasPartiallyClientize;
-(BOOL)isCollectionView;
-(void)setHasIsCollectionView:(BOOL)arg1 ;
-(BOOL)hasIsCollectionView;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

