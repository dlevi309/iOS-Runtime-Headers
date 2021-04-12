/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPPlaceProblem : PBCodable <NSCopying> {

	unsigned _componentIndex;
	unsigned _componentValueIndex;
	unsigned _problematicDepartureSequenceIndex;
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasComponentIndex; 
@property (assign,nonatomic) unsigned componentIndex; 
@property (assign,nonatomic) BOOL hasComponentValueIndex; 
@property (assign,nonatomic) unsigned componentValueIndex; 
@property (assign,nonatomic) BOOL hasProblematicDepartureSequenceIndex; 
@property (assign,nonatomic) unsigned problematicDepartureSequenceIndex; 
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
-(void)readAll:(BOOL)arg1 ;
-(unsigned)componentIndex;
-(void)setComponentIndex:(unsigned)arg1 ;
-(void)setHasComponentIndex:(BOOL)arg1 ;
-(BOOL)hasComponentIndex;
-(unsigned)componentValueIndex;
-(void)setComponentValueIndex:(unsigned)arg1 ;
-(void)setHasComponentValueIndex:(BOOL)arg1 ;
-(BOOL)hasComponentValueIndex;
-(unsigned)problematicDepartureSequenceIndex;
-(void)setProblematicDepartureSequenceIndex:(unsigned)arg1 ;
-(void)setHasProblematicDepartureSequenceIndex:(BOOL)arg1 ;
-(BOOL)hasProblematicDepartureSequenceIndex;
@end

