/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/MediaCapture/H10ISP.mediacapture
*/

#import <H10ISP.mediacapture/H10ISP.mediacapture-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDImageSignalProcessorISF : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _errorCode;
	int _inputMode;
	int _miConfidence;
	int _miSelectedMode;
	int _rotationAngleX;
	int _rotationAngleY;
	int _rotationAngleZ;
	int _stereoGMCerrorCode;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                             //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasRotationAngleX; 
@property (assign,nonatomic) int rotationAngleX;                        //@synthesize rotationAngleX=_rotationAngleX - In the implementation block
@property (assign,nonatomic) BOOL hasRotationAngleY; 
@property (assign,nonatomic) int rotationAngleY;                        //@synthesize rotationAngleY=_rotationAngleY - In the implementation block
@property (assign,nonatomic) BOOL hasRotationAngleZ; 
@property (assign,nonatomic) int rotationAngleZ;                        //@synthesize rotationAngleZ=_rotationAngleZ - In the implementation block
@property (assign,nonatomic) BOOL hasInputMode; 
@property (assign,nonatomic) int inputMode;                             //@synthesize inputMode=_inputMode - In the implementation block
@property (assign,nonatomic) BOOL hasMiSelectedMode; 
@property (assign,nonatomic) int miSelectedMode;                        //@synthesize miSelectedMode=_miSelectedMode - In the implementation block
@property (assign,nonatomic) BOOL hasStereoGMCerrorCode; 
@property (assign,nonatomic) int stereoGMCerrorCode;                    //@synthesize stereoGMCerrorCode=_stereoGMCerrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasMiConfidence; 
@property (assign,nonatomic) int miConfidence;                          //@synthesize miConfidence=_miConfidence - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setInputMode:(int)arg1 ;
-(int)inputMode;
-(int)errorCode;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setErrorCode:(int)arg1 ;
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
-(void)setHasInputMode:(BOOL)arg1 ;
-(BOOL)hasInputMode;
-(id)inputModeAsString:(int)arg1 ;
-(int)StringAsInputMode:(id)arg1 ;
-(int)miSelectedMode;
-(void)setMiSelectedMode:(int)arg1 ;
-(void)setHasMiSelectedMode:(BOOL)arg1 ;
-(BOOL)hasMiSelectedMode;
-(id)miSelectedModeAsString:(int)arg1 ;
-(int)StringAsMiSelectedMode:(id)arg1 ;
-(void)setStereoGMCerrorCode:(int)arg1 ;
-(void)setHasStereoGMCerrorCode:(BOOL)arg1 ;
-(BOOL)hasStereoGMCerrorCode;
-(void)setMiConfidence:(int)arg1 ;
-(void)setHasMiConfidence:(BOOL)arg1 ;
-(BOOL)hasMiConfidence;
-(int)rotationAngleX;
-(int)rotationAngleZ;
-(int)stereoGMCerrorCode;
-(int)miConfidence;
@end

