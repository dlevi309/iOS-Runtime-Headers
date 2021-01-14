/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOVLFLocalizationAlgorithmDetails : PBCodable <NSCopying> {

	unsigned _numberOfInliers;
	unsigned _numberOfKeypoints;
	unsigned _numberOfMatches;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasNumberOfKeypoints; 
@property (assign,nonatomic) unsigned numberOfKeypoints; 
@property (assign,nonatomic) BOOL hasNumberOfMatches; 
@property (assign,nonatomic) unsigned numberOfMatches; 
@property (assign,nonatomic) BOOL hasNumberOfInliers; 
@property (assign,nonatomic) unsigned numberOfInliers; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)numberOfMatches;
-(void)setNumberOfKeypoints:(unsigned)arg1 ;
-(void)setNumberOfMatches:(unsigned)arg1 ;
-(void)setNumberOfInliers:(unsigned)arg1 ;
-(unsigned)numberOfInliers;
-(unsigned)numberOfKeypoints;
-(void)setHasNumberOfKeypoints:(BOOL)arg1 ;
-(BOOL)hasNumberOfKeypoints;
-(void)setHasNumberOfMatches:(BOOL)arg1 ;
-(BOOL)hasNumberOfMatches;
-(void)setHasNumberOfInliers:(BOOL)arg1 ;
-(BOOL)hasNumberOfInliers;
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

