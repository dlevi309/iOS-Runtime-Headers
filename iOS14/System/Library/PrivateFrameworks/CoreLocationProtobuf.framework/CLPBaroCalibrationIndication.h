/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPBaroCalibrationIndication : PBCodable <NSCopying> {

	BOOL _isCalibratedBarometricAlt;
	BOOL _isMapMatched;
	BOOL _isOutdoorContext;
	SCD_Struct_CL1 _has;

}

@property (assign,nonatomic) BOOL hasIsCalibratedBarometricAlt; 
@property (assign,nonatomic) BOOL isCalibratedBarometricAlt;                 //@synthesize isCalibratedBarometricAlt=_isCalibratedBarometricAlt - In the implementation block
@property (assign,nonatomic) BOOL hasIsMapMatched; 
@property (assign,nonatomic) BOOL isMapMatched;                              //@synthesize isMapMatched=_isMapMatched - In the implementation block
@property (assign,nonatomic) BOOL hasIsOutdoorContext; 
@property (assign,nonatomic) BOOL isOutdoorContext;                          //@synthesize isOutdoorContext=_isOutdoorContext - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isMapMatched;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIsCalibratedBarometricAlt:(BOOL)arg1 ;
-(void)setHasIsCalibratedBarometricAlt:(BOOL)arg1 ;
-(BOOL)hasIsCalibratedBarometricAlt;
-(void)setIsMapMatched:(BOOL)arg1 ;
-(void)setHasIsMapMatched:(BOOL)arg1 ;
-(BOOL)hasIsMapMatched;
-(void)setIsOutdoorContext:(BOOL)arg1 ;
-(void)setHasIsOutdoorContext:(BOOL)arg1 ;
-(BOOL)hasIsOutdoorContext;
-(BOOL)isCalibratedBarometricAlt;
-(BOOL)isOutdoorContext;
@end

