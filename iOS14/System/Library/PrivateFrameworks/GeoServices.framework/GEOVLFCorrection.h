/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOVLFCorrection : PBCodable <NSCopying> {

	unsigned _headingCorrectionMagnitude;
	unsigned _locationCorrectionMagnitude;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasLocationCorrectionMagnitude; 
@property (assign,nonatomic) unsigned locationCorrectionMagnitude; 
@property (assign,nonatomic) BOOL hasHeadingCorrectionMagnitude; 
@property (assign,nonatomic) unsigned headingCorrectionMagnitude; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setLocationCorrectionMagnitude:(unsigned)arg1 ;
-(void)setHeadingCorrectionMagnitude:(unsigned)arg1 ;
-(unsigned)locationCorrectionMagnitude;
-(void)setHasLocationCorrectionMagnitude:(BOOL)arg1 ;
-(BOOL)hasLocationCorrectionMagnitude;
-(unsigned)headingCorrectionMagnitude;
-(void)setHasHeadingCorrectionMagnitude:(BOOL)arg1 ;
-(BOOL)hasHeadingCorrectionMagnitude;
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

