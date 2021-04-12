/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPSatelliteInfo : PBCodable <NSCopying> {

	SCD_Struct_CL5* _azimuths;
	SCD_Struct_CL5* _cnos;
	SCD_Struct_CL5* _elevations;
	SCD_Struct_CL14* _isUsedInFixes;
	SCD_Struct_CL5* _satIds;

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
-(unsigned long long)satIdsCount;
-(void)clearSatIds;
-(int)satIdsAtIndex:(unsigned long long)arg1 ;
-(void)addSatIds:(int)arg1 ;
-(unsigned long long)cnosCount;
-(void)clearCnos;
-(int)cnosAtIndex:(unsigned long long)arg1 ;
-(void)addCnos:(int)arg1 ;
-(unsigned long long)azimuthsCount;
-(void)clearAzimuths;
-(int)azimuthsAtIndex:(unsigned long long)arg1 ;
-(void)addAzimuths:(int)arg1 ;
-(unsigned long long)elevationsCount;
-(void)clearElevations;
-(int)elevationsAtIndex:(unsigned long long)arg1 ;
-(void)addElevations:(int)arg1 ;
-(unsigned long long)isUsedInFixesCount;
-(void)clearIsUsedInFixes;
-(BOOL)isUsedInFixesAtIndex:(unsigned long long)arg1 ;
-(void)addIsUsedInFixes:(BOOL)arg1 ;
-(int*)satIds;
-(void)setSatIds:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)cnos;
-(void)setCnos:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)azimuths;
-(void)setAzimuths:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)elevations;
-(void)setElevations:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL*)isUsedInFixes;
-(void)setIsUsedInFixes:(BOOL*)arg1 count:(unsigned long long)arg2 ;
@end

