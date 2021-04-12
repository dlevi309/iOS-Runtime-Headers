/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPCorrectedFlag : PBCodable <NSCopying> {

	int _flag;
	BOOL _correctedValue;
	BOOL _originalValue;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasFlag; 
@property (assign,nonatomic) int flag; 
@property (assign,nonatomic) BOOL hasOriginalValue; 
@property (assign,nonatomic) BOOL originalValue; 
@property (assign,nonatomic) BOOL hasCorrectedValue; 
@property (assign,nonatomic) BOOL correctedValue; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasFlag;
-(void)setHasFlag:(BOOL)arg1 ;
-(id)flagAsString:(int)arg1 ;
-(int)StringAsFlag:(id)arg1 ;
-(void)setHasOriginalValue:(BOOL)arg1 ;
-(void)setHasCorrectedValue:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)originalValue;
-(BOOL)correctedValue;
-(void)setOriginalValue:(BOOL)arg1 ;
-(void)setCorrectedValue:(BOOL)arg1 ;
-(BOOL)hasOriginalValue;
-(BOOL)hasCorrectedValue;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(int)flag;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setFlag:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

