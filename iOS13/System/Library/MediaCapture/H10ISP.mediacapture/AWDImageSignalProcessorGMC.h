/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/MediaCapture/H10ISP.mediacapture
*/

#import <H10ISP.mediacapture/H10ISP.mediacapture-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDImageSignalProcessorGMC : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	int _eflPctDiffFromAssemblyTimes100;
	int _errorCode;
	int _rotationAngleX;
	int _rotationAngleY;
	int _rotationAngleZ;
	unsigned _scanModeStep;
	unsigned _spatialCoverage;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                                       //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasSpatialCoverage; 
@property (assign,nonatomic) unsigned spatialCoverage;                            //@synthesize spatialCoverage=_spatialCoverage - In the implementation block
@property (assign,nonatomic) BOOL hasRotationAngleX; 
@property (assign,nonatomic) int rotationAngleX;                                  //@synthesize rotationAngleX=_rotationAngleX - In the implementation block
@property (assign,nonatomic) BOOL hasRotationAngleY; 
@property (assign,nonatomic) int rotationAngleY;                                  //@synthesize rotationAngleY=_rotationAngleY - In the implementation block
@property (assign,nonatomic) BOOL hasRotationAngleZ; 
@property (assign,nonatomic) int rotationAngleZ;                                  //@synthesize rotationAngleZ=_rotationAngleZ - In the implementation block
@property (assign,nonatomic) BOOL hasEflPctDiffFromAssemblyTimes100; 
@property (assign,nonatomic) int eflPctDiffFromAssemblyTimes100;                  //@synthesize eflPctDiffFromAssemblyTimes100=_eflPctDiffFromAssemblyTimes100 - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasScanModeStep; 
@property (assign,nonatomic) unsigned scanModeStep;                               //@synthesize scanModeStep=_scanModeStep - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(int)errorCode;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setErrorCode:(int)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setRotationAngleY:(int)arg1 ;
-(int)rotationAngleY;
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
-(void)setSpatialCoverage:(unsigned)arg1 ;
-(void)setEflPctDiffFromAssemblyTimes100:(int)arg1 ;
-(void)setScanModeStep:(unsigned)arg1 ;
-(void)setHasSpatialCoverage:(BOOL)arg1 ;
-(BOOL)hasSpatialCoverage;
-(void)setHasEflPctDiffFromAssemblyTimes100:(BOOL)arg1 ;
-(BOOL)hasEflPctDiffFromAssemblyTimes100;
-(void)setHasScanModeStep:(BOOL)arg1 ;
-(BOOL)hasScanModeStep;
-(unsigned)spatialCoverage;
-(int)eflPctDiffFromAssemblyTimes100;
-(unsigned)scanModeStep;
@end

