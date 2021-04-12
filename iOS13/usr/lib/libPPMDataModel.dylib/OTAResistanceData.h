/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
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

