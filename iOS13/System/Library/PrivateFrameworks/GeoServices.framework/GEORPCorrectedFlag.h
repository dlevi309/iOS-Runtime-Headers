/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPCorrectedFlag : PBCodable <NSCopying> {

	int _flag;
	BOOL _correctedValue;
	BOOL _originalValue;
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasFlag; 
@property (assign,nonatomic) int flag; 
@property (assign,nonatomic) BOOL hasOriginalValue; 
@property (assign,nonatomic) BOOL originalValue; 
@property (assign,nonatomic) BOOL hasCorrectedValue; 
@property (assign,nonatomic) BOOL correctedValue; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFlag:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)originalValue;
-(BOOL)correctedValue;
-(void)setOriginalValue:(BOOL)arg1 ;
-(void)setCorrectedValue:(BOOL)arg1 ;
-(BOOL)hasOriginalValue;
-(BOOL)hasCorrectedValue;
-(int)flag;
-(void)setHasFlag:(BOOL)arg1 ;
-(BOOL)hasFlag;
-(id)flagAsString:(int)arg1 ;
-(int)StringAsFlag:(id)arg1 ;
-(void)setHasOriginalValue:(BOOL)arg1 ;
-(void)setHasCorrectedValue:(BOOL)arg1 ;
@end

