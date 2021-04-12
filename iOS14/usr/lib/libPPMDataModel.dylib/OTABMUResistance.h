/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libPPMDataModel.dylib
*/

#import <libPPMDataModel.dylib/libPPMDataModel.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OTABMUResistance : PBCodable <NSCopying> {

	float _downstreamCommonResistance;
	float _downstreamNorthResistance;
	float _systemEquivalentResistance;
	float _traceResistance25C;
	float _traceResistanceTemperatureCoeff;
	SCD_Struct_OT3 _has;

}

@property (assign,nonatomic) BOOL hasTraceResistance25C; 
@property (assign,nonatomic) float traceResistance25C;                             //@synthesize traceResistance25C=_traceResistance25C - In the implementation block
@property (assign,nonatomic) BOOL hasTraceResistanceTemperatureCoeff; 
@property (assign,nonatomic) float traceResistanceTemperatureCoeff;                //@synthesize traceResistanceTemperatureCoeff=_traceResistanceTemperatureCoeff - In the implementation block
@property (assign,nonatomic) BOOL hasSystemEquivalentResistance; 
@property (assign,nonatomic) float systemEquivalentResistance;                     //@synthesize systemEquivalentResistance=_systemEquivalentResistance - In the implementation block
@property (assign,nonatomic) BOOL hasDownstreamCommonResistance; 
@property (assign,nonatomic) float downstreamCommonResistance;                     //@synthesize downstreamCommonResistance=_downstreamCommonResistance - In the implementation block
@property (assign,nonatomic) BOOL hasDownstreamNorthResistance; 
@property (assign,nonatomic) float downstreamNorthResistance;                      //@synthesize downstreamNorthResistance=_downstreamNorthResistance - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTraceResistance25C:(float)arg1 ;
-(void)setHasTraceResistance25C:(BOOL)arg1 ;
-(BOOL)hasTraceResistance25C;
-(void)setTraceResistanceTemperatureCoeff:(float)arg1 ;
-(void)setHasTraceResistanceTemperatureCoeff:(BOOL)arg1 ;
-(BOOL)hasTraceResistanceTemperatureCoeff;
-(void)setSystemEquivalentResistance:(float)arg1 ;
-(void)setHasSystemEquivalentResistance:(BOOL)arg1 ;
-(BOOL)hasSystemEquivalentResistance;
-(void)setDownstreamCommonResistance:(float)arg1 ;
-(void)setHasDownstreamCommonResistance:(BOOL)arg1 ;
-(BOOL)hasDownstreamCommonResistance;
-(void)setDownstreamNorthResistance:(float)arg1 ;
-(void)setHasDownstreamNorthResistance:(BOOL)arg1 ;
-(BOOL)hasDownstreamNorthResistance;
-(float)traceResistance25C;
-(float)traceResistanceTemperatureCoeff;
-(float)systemEquivalentResistance;
-(float)downstreamCommonResistance;
-(float)downstreamNorthResistance;
@end

