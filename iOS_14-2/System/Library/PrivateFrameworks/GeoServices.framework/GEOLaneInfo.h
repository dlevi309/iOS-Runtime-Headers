/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOLaneInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _arrows;
	BOOL _hov;
	BOOL _preferredForMultipleManeuvers;
	BOOL _supportsManeuver;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasSupportsManeuver; 
@property (assign,nonatomic) BOOL supportsManeuver; 
@property (assign,nonatomic) BOOL hasPreferredForMultipleManeuvers; 
@property (assign,nonatomic) BOOL preferredForMultipleManeuvers; 
@property (assign,nonatomic) BOOL hasHov; 
@property (assign,nonatomic) BOOL hov; 
@property (nonatomic,retain) NSMutableArray * arrows; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)arrowType;
-(BOOL)hov;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasHov;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setHov:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasHov:(BOOL)arg1 ;
-(NSMutableArray *)arrows;
-(void)addArrow:(id)arg1 ;
-(void)setSupportsManeuver:(BOOL)arg1 ;
-(void)clearArrows;
-(void)setPreferredForMultipleManeuvers:(BOOL)arg1 ;
-(void)setHasSupportsManeuver:(BOOL)arg1 ;
-(BOOL)hasSupportsManeuver;
-(void)setHasPreferredForMultipleManeuvers:(BOOL)arg1 ;
-(BOOL)hasPreferredForMultipleManeuvers;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)arrowsCount;
-(id)arrowAtIndex:(unsigned long long)arg1 ;
-(BOOL)supportsManeuver;
-(BOOL)preferredForMultipleManeuvers;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setArrows:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

