/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTraversalTimes : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _aggressiveEstimatedSeconds;
	unsigned _conservativeEstimatedSeconds;
	unsigned _estimatedSeconds;
	unsigned _freeflowEstimatedSeconds;
	unsigned _historicalEstimatedSeconds;
	struct {
		unsigned has_aggressiveEstimatedSeconds : 1;
		unsigned has_conservativeEstimatedSeconds : 1;
		unsigned has_estimatedSeconds : 1;
		unsigned has_freeflowEstimatedSeconds : 1;
		unsigned has_historicalEstimatedSeconds : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasEstimatedSeconds; 
@property (assign,nonatomic) unsigned estimatedSeconds; 
@property (assign,nonatomic) BOOL hasHistoricalEstimatedSeconds; 
@property (assign,nonatomic) unsigned historicalEstimatedSeconds; 
@property (assign,nonatomic) BOOL hasFreeflowEstimatedSeconds; 
@property (assign,nonatomic) unsigned freeflowEstimatedSeconds; 
@property (assign,nonatomic) BOOL hasAggressiveEstimatedSeconds; 
@property (assign,nonatomic) unsigned aggressiveEstimatedSeconds; 
@property (assign,nonatomic) BOOL hasConservativeEstimatedSeconds; 
@property (assign,nonatomic) unsigned conservativeEstimatedSeconds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned)estimatedSeconds;
-(unsigned)historicalEstimatedSeconds;
-(unsigned)freeflowEstimatedSeconds;
-(unsigned)aggressiveEstimatedSeconds;
-(unsigned)conservativeEstimatedSeconds;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setEstimatedSeconds:(unsigned)arg1 ;
-(void)setHistoricalEstimatedSeconds:(unsigned)arg1 ;
-(void)setFreeflowEstimatedSeconds:(unsigned)arg1 ;
-(BOOL)hasEstimatedSeconds;
-(void)setAggressiveEstimatedSeconds:(unsigned)arg1 ;
-(void)setConservativeEstimatedSeconds:(unsigned)arg1 ;
-(void)setHasEstimatedSeconds:(BOOL)arg1 ;
-(void)setHasHistoricalEstimatedSeconds:(BOOL)arg1 ;
-(BOOL)hasHistoricalEstimatedSeconds;
-(void)setHasFreeflowEstimatedSeconds:(BOOL)arg1 ;
-(BOOL)hasFreeflowEstimatedSeconds;
-(BOOL)hasAggressiveEstimatedSeconds;
-(void)setHasAggressiveEstimatedSeconds:(BOOL)arg1 ;
-(void)setHasConservativeEstimatedSeconds:(BOOL)arg1 ;
-(BOOL)hasConservativeEstimatedSeconds;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

