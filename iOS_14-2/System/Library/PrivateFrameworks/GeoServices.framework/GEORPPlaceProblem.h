/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPPlaceProblem : PBCodable <NSCopying> {

	unsigned _componentIndex;
	unsigned _componentValueIndex;
	unsigned _problematicDepartureSequenceIndex;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasComponentIndex; 
@property (assign,nonatomic) unsigned componentIndex; 
@property (assign,nonatomic) BOOL hasComponentValueIndex; 
@property (assign,nonatomic) unsigned componentValueIndex; 
@property (assign,nonatomic) BOOL hasProblematicDepartureSequenceIndex; 
@property (assign,nonatomic) unsigned problematicDepartureSequenceIndex; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setComponentIndex:(unsigned)arg1 ;
-(void)setComponentValueIndex:(unsigned)arg1 ;
-(unsigned)componentIndex;
-(void)setProblematicDepartureSequenceIndex:(unsigned)arg1 ;
-(void)setHasComponentIndex:(BOOL)arg1 ;
-(BOOL)hasComponentIndex;
-(unsigned)componentValueIndex;
-(void)setHasComponentValueIndex:(BOOL)arg1 ;
-(BOOL)hasComponentValueIndex;
-(unsigned)problematicDepartureSequenceIndex;
-(void)setHasProblematicDepartureSequenceIndex:(BOOL)arg1 ;
-(BOOL)hasProblematicDepartureSequenceIndex;
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

