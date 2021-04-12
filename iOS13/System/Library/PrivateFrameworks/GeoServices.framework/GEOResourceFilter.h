/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields;

@interface GEOResourceFilter : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _scales;
	SCD_Struct_GE1* _scenarios;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_scales : 1;
		unsigned read_scenarios : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_scales : 1;
		unsigned wrote_scenarios : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long scalesCount; 
@property (nonatomic,readonly) int* scales; 
@property (nonatomic,readonly) unsigned long long scenariosCount; 
@property (nonatomic,readonly) int* scenarios; 
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
-(void)_readScales;
-(void)_addNoFlagsScale:(int)arg1 ;
-(void)_readScenarios;
-(void)_addNoFlagsScenario:(int)arg1 ;
-(unsigned long long)scalesCount;
-(void)clearScales;
-(int)scaleAtIndex:(unsigned long long)arg1 ;
-(void)addScale:(int)arg1 ;
-(unsigned long long)scenariosCount;
-(void)clearScenarios;
-(int)scenarioAtIndex:(unsigned long long)arg1 ;
-(void)addScenario:(int)arg1 ;
-(int*)scales;
-(void)setScales:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)scalesAsString:(int)arg1 ;
-(int)StringAsScales:(id)arg1 ;
-(int*)scenarios;
-(void)setScenarios:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)scenariosAsString:(int)arg1 ;
-(int)StringAsScenarios:(id)arg1 ;
@end

