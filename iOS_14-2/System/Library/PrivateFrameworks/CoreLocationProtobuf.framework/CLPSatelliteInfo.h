/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPSatelliteInfo : PBCodable <NSCopying> {

	SCD_Struct_CL6* _azimuths;
	SCD_Struct_CL6* _cnos;
	SCD_Struct_CL6* _elevations;
	SCD_Struct_CL16* _isUsedInFixes;
	SCD_Struct_CL6* _satIds;

}

@property (nonatomic,readonly) unsigned long long satIdsCount; 
@property (nonatomic,readonly) int* satIds; 
@property (nonatomic,readonly) unsigned long long cnosCount; 
@property (nonatomic,readonly) int* cnos; 
@property (nonatomic,readonly) unsigned long long azimuthsCount; 
@property (nonatomic,readonly) int* azimuths; 
@property (nonatomic,readonly) unsigned long long elevationsCount; 
@property (nonatomic,readonly) int* elevations; 
@property (nonatomic,readonly) unsigned long long isUsedInFixesCount; 
@property (nonatomic,readonly) BOOL* isUsedInFixes; 
-(id)dictionaryRepresentation;
-(void)setIsUsedInFixes:(BOOL*)arg1 count:(unsigned long long)arg2 ;
-(void)clearIsUsedInFixes;
-(int*)cnos;
-(void)clearCnos;
-(void)addIsUsedInFixes:(BOOL)arg1 ;
-(unsigned long long)elevationsCount;
-(void)addAzimuths:(int)arg1 ;
-(unsigned long long)azimuthsCount;
-(void)mergeFrom:(id)arg1 ;
-(int*)satIds;
-(BOOL)isUsedInFixesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)satIdsCount;
-(id)description;
-(void)clearSatIds;
-(int)elevationsAtIndex:(unsigned long long)arg1 ;
-(void)clearAzimuths;
-(void)addSatIds:(int)arg1 ;
-(void)addElevations:(int)arg1 ;
-(int)satIdsAtIndex:(unsigned long long)arg1 ;
-(int*)azimuths;
-(unsigned long long)hash;
-(int)azimuthsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)isUsedInFixesCount;
-(void)setElevations:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)cnosCount;
-(int)cnosAtIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)clearElevations;
-(void)writeTo:(id)arg1 ;
-(void)setCnos:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSatIds:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setAzimuths:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL*)isUsedInFixes;
-(int*)elevations;
-(void)addCnos:(int)arg1 ;
@end

