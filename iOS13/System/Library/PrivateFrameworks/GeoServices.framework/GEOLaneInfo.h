/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE85 _flags;

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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)arrowsCount;
-(id)arrowAtIndex:(unsigned long long)arg1 ;
-(BOOL)supportsManeuver;
-(BOOL)hov;
-(BOOL)preferredForMultipleManeuvers;
-(void)addArrow:(id)arg1 ;
-(void)clearArrows;
-(NSMutableArray *)arrows;
-(void)setSupportsManeuver:(BOOL)arg1 ;
-(void)setHasSupportsManeuver:(BOOL)arg1 ;
-(BOOL)hasSupportsManeuver;
-(void)setPreferredForMultipleManeuvers:(BOOL)arg1 ;
-(void)setHasPreferredForMultipleManeuvers:(BOOL)arg1 ;
-(BOOL)hasPreferredForMultipleManeuvers;
-(void)setHov:(BOOL)arg1 ;
-(void)setHasHov:(BOOL)arg1 ;
-(BOOL)hasHov;
-(void)setArrows:(NSMutableArray *)arg1 ;
@end

