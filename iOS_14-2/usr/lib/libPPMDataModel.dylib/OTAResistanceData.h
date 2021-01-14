/*
* Generated on Thursday, January 14, 2021 at 2:29:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libPPMDataModel.dylib
*/

#import <libPPMDataModel.dylib/libPPMDataModel.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OTAResistanceData : PBCodable <NSCopying> {

	SCD_Struct_OT1* _resistance25Cs;
	SCD_Struct_OT1* _temperatureCoeffs;

}

@property (nonatomic,readonly) unsigned long long resistance25CsCount; 
@property (nonatomic,readonly) float* resistance25Cs; 
@property (nonatomic,readonly) unsigned long long temperatureCoeffsCount; 
@property (nonatomic,readonly) float* temperatureCoeffs; 
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)resistance25CsCount;
-(void)clearResistance25Cs;
-(float)resistance25CAtIndex:(unsigned long long)arg1 ;
-(void)addResistance25C:(float)arg1 ;
-(unsigned long long)temperatureCoeffsCount;
-(void)clearTemperatureCoeffs;
-(float)temperatureCoeffAtIndex:(unsigned long long)arg1 ;
-(void)addTemperatureCoeff:(float)arg1 ;
-(float*)resistance25Cs;
-(void)setResistance25Cs:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)temperatureCoeffs;
-(void)setTemperatureCoeffs:(float*)arg1 count:(unsigned long long)arg2 ;
@end

