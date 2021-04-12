/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/MediaCapture/H10ISP.mediacapture
*/

#import <H10ISP.mediacapture/H10ISP.mediacapture-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDImageSignalProcessorRGBIR : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	int _calculationMode;
	int _confidence;
	int _errorCode;
	int _rotationAngleX;
	int _rotationAngleY;
	int _rotationAngleZ;
	int _selectedMode;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedMode; 
@property (assign,nonatomic) int selectedMode;                          //@synthesize selectedMode=_selectedMode - In the implementation block
@property (assign,nonatomic) BOOL hasRotationAngleX; 
@property (assign,nonatomic) int rotationAngleX;                        //@synthesize rotationAngleX=_rotationAngleX - In the implementation block
@property (assign,nonatomic) BOOL hasRotationAngleY; 
@property (assign,nonatomic) int rotationAngleY;                        //@synthesize rotationAngleY=_rotationAngleY - In the implementation block
@property (assign,nonatomic) BOOL hasRotationAngleZ; 
@property (assign,nonatomic) int rotationAngleZ;                        //@synthesize rotationAngleZ=_rotationAngleZ - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) int confidence;                            //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) BOOL hasCalculationMode; 
@property (assign,nonatomic) int calculationMode;                       //@synthesize calculationMode=_calculationMode - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                             //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;               //@synthesize duration=_duration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)confidence;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfidence:(int)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setCalculationMode:(int)arg1 ;
-(int)errorCode;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(void)setErrorCode:(int)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(int)calculationMode;
-(void)setRotationAngleY:(int)arg1 ;
-(int)rotationAngleY;
-(void)setSelectedMode:(int)arg1 ;
-(int)selectedMode;
-(void)setRotationAngleX:(int)arg1 ;
-(void)setHasRotationAngleX:(BOOL)arg1 ;
-(BOOL)hasRotationAngleX;
-(void)setHasRotationAngleY:(BOOL)arg1 ;
-(BOOL)hasRotationAngleY;
-(void)setRotationAngleZ:(int)arg1 ;
-(void)setHasRotationAngleZ:(BOOL)arg1 ;
-(BOOL)hasRotationAngleZ;
-(int)rotationAngleX;
-(int)rotationAngleZ;
-(void)setHasSelectedMode:(BOOL)arg1 ;
-(BOOL)hasSelectedMode;
-(id)selectedModeAsString:(int)arg1 ;
-(int)StringAsSelectedMode:(id)arg1 ;
-(void)setHasCalculationMode:(BOOL)arg1 ;
-(BOOL)hasCalculationMode;
@end

