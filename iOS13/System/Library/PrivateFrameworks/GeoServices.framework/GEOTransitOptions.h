/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOFareOptions;

@interface GEOTransitOptions : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _avoidedModes;
	GEOFareOptions* _fareOptions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _prioritization;
	int _routingBehavior;
	struct {
		unsigned has_prioritization : 1;
		unsigned has_routingBehavior : 1;
		unsigned read_unknownFields : 1;
		unsigned read_avoidedModes : 1;
		unsigned read_fareOptions : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_avoidedModes : 1;
		unsigned wrote_fareOptions : 1;
		unsigned wrote_prioritization : 1;
		unsigned wrote_routingBehavior : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long avoidedModesCount; 
@property (nonatomic,readonly) int* avoidedModes; 
@property (assign,nonatomic) BOOL hasPrioritization; 
@property (assign,nonatomic) int prioritization; 
@property (nonatomic,readonly) BOOL hasFareOptions; 
@property (nonatomic,retain) GEOFareOptions * fareOptions; 
@property (assign,nonatomic) BOOL hasRoutingBehavior; 
@property (assign,nonatomic) int routingBehavior; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)avoidedModesCount;
-(int)avoidedModeAtIndex:(unsigned long long)arg1 ;
-(id)avoidedModesAsString:(int)arg1 ;
-(void)_readAvoidedModes;
-(void)_addNoFlagsAvoidedMode:(int)arg1 ;
-(void)_readFareOptions;
-(GEOFareOptions *)fareOptions;
-(void)clearAvoidedModes;
-(void)addAvoidedMode:(int)arg1 ;
-(void)setFareOptions:(GEOFareOptions *)arg1 ;
-(int*)avoidedModes;
-(void)setAvoidedModes:(int*)arg1 count:(unsigned long long)arg2 ;
-(int)StringAsAvoidedModes:(id)arg1 ;
-(int)prioritization;
-(void)setPrioritization:(int)arg1 ;
-(void)setHasPrioritization:(BOOL)arg1 ;
-(BOOL)hasPrioritization;
-(id)prioritizationAsString:(int)arg1 ;
-(int)StringAsPrioritization:(id)arg1 ;
-(BOOL)hasFareOptions;
-(int)routingBehavior;
-(void)setRoutingBehavior:(int)arg1 ;
-(void)setHasRoutingBehavior:(BOOL)arg1 ;
-(BOOL)hasRoutingBehavior;
-(id)routingBehaviorAsString:(int)arg1 ;
-(int)StringAsRoutingBehavior:(id)arg1 ;
@end

