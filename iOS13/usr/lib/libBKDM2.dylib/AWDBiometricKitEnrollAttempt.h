/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libBKDM2.dylib
*/

#import <libBKDM2.dylib/libBKDM2.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDBiometricKitEnrollAttempt : PBCodable <NSCopying> {

	unsigned long long _overallTime;
	long long _rfcFrameIndex;
	long long _rfcSetIndex;
	unsigned long long _timestamp;
	int _ambientLux;
	unsigned _bioCaptureSequenceCount;
	int _cameraErr;
	unsigned _deviceOrientation;
	unsigned _doubleErrorCountsBinCovered;
	unsigned _doubleErrorCountsFaceOutOfFOV;
	unsigned _doubleErrorCountsFaceTooClose;
	unsigned _doubleErrorCountsFaceTooFar;
	unsigned _doubleErrorCountsMoreFrames;
	unsigned _doubleErrorCountsMultipleFaces;
	unsigned _doubleErrorCountsNoFace;
	unsigned _doubleErrorCountsOK;
	unsigned _doubleErrorCountsOccluded;
	unsigned _doubleErrorCountsPoseOutRange;
	unsigned _enrollFeatureVectorError;
	unsigned _enrollResult;
	unsigned _enrolledIdentityCount;
	unsigned _faceDistance;
	unsigned _featureGenerationError;
	int _frameCountBin00;
	int _frameCountBin01;
	int _frameCountBin02;
	int _frameCountBin10;
	int _frameCountBin11;
	int _frameCountBin12;
	int _frameCountBin20;
	int _frameCountBin21;
	int _frameCountBin22;
	unsigned _frameErrorCountsBinCovered;
	unsigned _frameErrorCountsFaceOutOfFOV;
	unsigned _frameErrorCountsFaceTooClose;
	unsigned _frameErrorCountsFaceTooFar;
	unsigned _frameErrorCountsMoreFrames;
	unsigned _frameErrorCountsMultipleFaces;
	unsigned _frameErrorCountsNoFace;
	unsigned _frameErrorCountsOK;
	unsigned _frameErrorCountsOccluded;
	unsigned _frameErrorCountsPoseOutRange;
	int _sensorTemperature;
	BOOL _failedNoFace;
	BOOL _overallResult;
	SCD_Struct_AW17 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasOverallResult; 
@property (assign,nonatomic) BOOL overallResult;                                   //@synthesize overallResult=_overallResult - In the implementation block
@property (assign,nonatomic) BOOL hasOverallTime; 
@property (assign,nonatomic) unsigned long long overallTime;                       //@synthesize overallTime=_overallTime - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleErrorCountsOK; 
@property (assign,nonatomic) unsigned doubleErrorCountsOK;                         //@synthesize doubleErrorCountsOK=_doubleErrorCountsOK - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleErrorCountsMoreFrames; 
@property (assign,nonatomic) unsigned doubleErrorCountsMoreFrames;                 //@synthesize doubleErrorCountsMoreFrames=_doubleErrorCountsMoreFrames - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleErrorCountsNoFace; 
@property (assign,nonatomic) unsigned doubleErrorCountsNoFace;                     //@synthesize doubleErrorCountsNoFace=_doubleErrorCountsNoFace - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleErrorCountsFaceOutOfFOV; 
@property (assign,nonatomic) unsigned doubleErrorCountsFaceOutOfFOV;               //@synthesize doubleErrorCountsFaceOutOfFOV=_doubleErrorCountsFaceOutOfFOV - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleErrorCountsMultipleFaces; 
@property (assign,nonatomic) unsigned doubleErrorCountsMultipleFaces;              //@synthesize doubleErrorCountsMultipleFaces=_doubleErrorCountsMultipleFaces - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleErrorCountsFaceTooClose; 
@property (assign,nonatomic) unsigned doubleErrorCountsFaceTooClose;               //@synthesize doubleErrorCountsFaceTooClose=_doubleErrorCountsFaceTooClose - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleErrorCountsFaceTooFar; 
@property (assign,nonatomic) unsigned doubleErrorCountsFaceTooFar;                 //@synthesize doubleErrorCountsFaceTooFar=_doubleErrorCountsFaceTooFar - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleErrorCountsPoseOutRange; 
@property (assign,nonatomic) unsigned doubleErrorCountsPoseOutRange;               //@synthesize doubleErrorCountsPoseOutRange=_doubleErrorCountsPoseOutRange - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleErrorCountsBinCovered; 
@property (assign,nonatomic) unsigned doubleErrorCountsBinCovered;                 //@synthesize doubleErrorCountsBinCovered=_doubleErrorCountsBinCovered - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleErrorCountsOccluded; 
@property (assign,nonatomic) unsigned doubleErrorCountsOccluded;                   //@synthesize doubleErrorCountsOccluded=_doubleErrorCountsOccluded - In the implementation block
@property (assign,nonatomic) BOOL hasFrameErrorCountsOK; 
@property (assign,nonatomic) unsigned frameErrorCountsOK;                          //@synthesize frameErrorCountsOK=_frameErrorCountsOK - In the implementation block
@property (assign,nonatomic) BOOL hasFrameErrorCountsMoreFrames; 
@property (assign,nonatomic) unsigned frameErrorCountsMoreFrames;                  //@synthesize frameErrorCountsMoreFrames=_frameErrorCountsMoreFrames - In the implementation block
@property (assign,nonatomic) BOOL hasFrameErrorCountsNoFace; 
@property (assign,nonatomic) unsigned frameErrorCountsNoFace;                      //@synthesize frameErrorCountsNoFace=_frameErrorCountsNoFace - In the implementation block
@property (assign,nonatomic) BOOL hasFrameErrorCountsFaceOutOfFOV; 
@property (assign,nonatomic) unsigned frameErrorCountsFaceOutOfFOV;                //@synthesize frameErrorCountsFaceOutOfFOV=_frameErrorCountsFaceOutOfFOV - In the implementation block
@property (assign,nonatomic) BOOL hasFrameErrorCountsMultipleFaces; 
@property (assign,nonatomic) unsigned frameErrorCountsMultipleFaces;               //@synthesize frameErrorCountsMultipleFaces=_frameErrorCountsMultipleFaces - In the implementation block
@property (assign,nonatomic) BOOL hasFrameErrorCountsFaceTooClose; 
@property (assign,nonatomic) unsigned frameErrorCountsFaceTooClose;                //@synthesize frameErrorCountsFaceTooClose=_frameErrorCountsFaceTooClose - In the implementation block
@property (assign,nonatomic) BOOL hasFrameErrorCountsFaceTooFar; 
@property (assign,nonatomic) unsigned frameErrorCountsFaceTooFar;                  //@synthesize frameErrorCountsFaceTooFar=_frameErrorCountsFaceTooFar - In the implementation block
@property (assign,nonatomic) BOOL hasFrameErrorCountsPoseOutRange; 
@property (assign,nonatomic) unsigned frameErrorCountsPoseOutRange;                //@synthesize frameErrorCountsPoseOutRange=_frameErrorCountsPoseOutRange - In the implementation block
@property (assign,nonatomic) BOOL hasFrameErrorCountsBinCovered; 
@property (assign,nonatomic) unsigned frameErrorCountsBinCovered;                  //@synthesize frameErrorCountsBinCovered=_frameErrorCountsBinCovered - In the implementation block
@property (assign,nonatomic) BOOL hasFrameErrorCountsOccluded; 
@property (assign,nonatomic) unsigned frameErrorCountsOccluded;                    //@synthesize frameErrorCountsOccluded=_frameErrorCountsOccluded - In the implementation block
@property (assign,nonatomic) BOOL hasFrameCountBin00; 
@property (assign,nonatomic) int frameCountBin00;                                  //@synthesize frameCountBin00=_frameCountBin00 - In the implementation block
@property (assign,nonatomic) BOOL hasFrameCountBin01; 
@property (assign,nonatomic) int frameCountBin01;                                  //@synthesize frameCountBin01=_frameCountBin01 - In the implementation block
@property (assign,nonatomic) BOOL hasFrameCountBin02; 
@property (assign,nonatomic) int frameCountBin02;                                  //@synthesize frameCountBin02=_frameCountBin02 - In the implementation block
@property (assign,nonatomic) BOOL hasFrameCountBin10; 
@property (assign,nonatomic) int frameCountBin10;                                  //@synthesize frameCountBin10=_frameCountBin10 - In the implementation block
@property (assign,nonatomic) BOOL hasFrameCountBin11; 
@property (assign,nonatomic) int frameCountBin11;                                  //@synthesize frameCountBin11=_frameCountBin11 - In the implementation block
@property (assign,nonatomic) BOOL hasFrameCountBin12; 
@property (assign,nonatomic) int frameCountBin12;                                  //@synthesize frameCountBin12=_frameCountBin12 - In the implementation block
@property (assign,nonatomic) BOOL hasFrameCountBin20; 
@property (assign,nonatomic) int frameCountBin20;                                  //@synthesize frameCountBin20=_frameCountBin20 - In the implementation block
@property (assign,nonatomic) BOOL hasFrameCountBin21; 
@property (assign,nonatomic) int frameCountBin21;                                  //@synthesize frameCountBin21=_frameCountBin21 - In the implementation block
@property (assign,nonatomic) BOOL hasFrameCountBin22; 
@property (assign,nonatomic) int frameCountBin22;                                  //@synthesize frameCountBin22=_frameCountBin22 - In the implementation block
@property (assign,nonatomic) BOOL hasBioCaptureSequenceCount; 
@property (assign,nonatomic) unsigned bioCaptureSequenceCount;                     //@synthesize bioCaptureSequenceCount=_bioCaptureSequenceCount - In the implementation block
@property (assign,nonatomic) BOOL hasAmbientLux; 
@property (assign,nonatomic) int ambientLux;                                       //@synthesize ambientLux=_ambientLux - In the implementation block
@property (assign,nonatomic) BOOL hasFeatureGenerationError; 
@property (assign,nonatomic) unsigned featureGenerationError;                      //@synthesize featureGenerationError=_featureGenerationError - In the implementation block
@property (assign,nonatomic) BOOL hasEnrollFeatureVectorError; 
@property (assign,nonatomic) unsigned enrollFeatureVectorError;                    //@synthesize enrollFeatureVectorError=_enrollFeatureVectorError - In the implementation block
@property (assign,nonatomic) BOOL hasCameraErr; 
@property (assign,nonatomic) int cameraErr;                                        //@synthesize cameraErr=_cameraErr - In the implementation block
@property (assign,nonatomic) BOOL hasEnrollResult; 
@property (assign,nonatomic) unsigned enrollResult;                                //@synthesize enrollResult=_enrollResult - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDistance; 
@property (assign,nonatomic) unsigned faceDistance;                                //@synthesize faceDistance=_faceDistance - In the implementation block
@property (assign,nonatomic) BOOL hasSensorTemperature; 
@property (assign,nonatomic) int sensorTemperature;                                //@synthesize sensorTemperature=_sensorTemperature - In the implementation block
@property (assign,nonatomic) BOOL hasRfcSetIndex; 
@property (assign,nonatomic) long long rfcSetIndex;                                //@synthesize rfcSetIndex=_rfcSetIndex - In the implementation block
@property (assign,nonatomic) BOOL hasRfcFrameIndex; 
@property (assign,nonatomic) long long rfcFrameIndex;                              //@synthesize rfcFrameIndex=_rfcFrameIndex - In the implementation block
@property (assign,nonatomic) BOOL hasFailedNoFace; 
@property (assign,nonatomic) BOOL failedNoFace;                                    //@synthesize failedNoFace=_failedNoFace - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceOrientation; 
@property (assign,nonatomic) unsigned deviceOrientation;                           //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (assign,nonatomic) BOOL hasEnrolledIdentityCount; 
@property (assign,nonatomic) unsigned enrolledIdentityCount;                       //@synthesize enrolledIdentityCount=_enrolledIdentityCount - In the implementation block
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
-(unsigned)deviceOrientation;
-(void)setDeviceOrientation:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(int)sensorTemperature;
-(void)setSensorTemperature:(int)arg1 ;
-(void)setHasDeviceOrientation:(BOOL)arg1 ;
-(BOOL)hasDeviceOrientation;
-(void)setOverallTime:(unsigned long long)arg1 ;
-(unsigned long long)overallTime;
-(void)setHasOverallTime:(BOOL)arg1 ;
-(BOOL)hasOverallTime;
-(void)setAmbientLux:(int)arg1 ;
-(void)setHasAmbientLux:(BOOL)arg1 ;
-(BOOL)hasAmbientLux;
-(void)setCameraErr:(int)arg1 ;
-(void)setHasCameraErr:(BOOL)arg1 ;
-(BOOL)hasCameraErr;
-(void)setHasSensorTemperature:(BOOL)arg1 ;
-(BOOL)hasSensorTemperature;
-(void)setFaceDistance:(unsigned)arg1 ;
-(void)setHasFaceDistance:(BOOL)arg1 ;
-(BOOL)hasFaceDistance;
-(int)ambientLux;
-(int)cameraErr;
-(unsigned)faceDistance;
-(void)setOverallResult:(BOOL)arg1 ;
-(void)setFeatureGenerationError:(unsigned)arg1 ;
-(void)setRfcSetIndex:(long long)arg1 ;
-(void)setRfcFrameIndex:(long long)arg1 ;
-(void)setHasRfcSetIndex:(BOOL)arg1 ;
-(void)setHasRfcFrameIndex:(BOOL)arg1 ;
-(void)setDoubleErrorCountsOK:(unsigned)arg1 ;
-(void)setDoubleErrorCountsMoreFrames:(unsigned)arg1 ;
-(void)setDoubleErrorCountsNoFace:(unsigned)arg1 ;
-(void)setDoubleErrorCountsFaceOutOfFOV:(unsigned)arg1 ;
-(void)setDoubleErrorCountsMultipleFaces:(unsigned)arg1 ;
-(void)setDoubleErrorCountsFaceTooClose:(unsigned)arg1 ;
-(void)setDoubleErrorCountsFaceTooFar:(unsigned)arg1 ;
-(void)setDoubleErrorCountsPoseOutRange:(unsigned)arg1 ;
-(void)setDoubleErrorCountsBinCovered:(unsigned)arg1 ;
-(void)setDoubleErrorCountsOccluded:(unsigned)arg1 ;
-(void)setFrameErrorCountsOK:(unsigned)arg1 ;
-(void)setFrameErrorCountsMoreFrames:(unsigned)arg1 ;
-(void)setFrameErrorCountsNoFace:(unsigned)arg1 ;
-(void)setFrameErrorCountsFaceOutOfFOV:(unsigned)arg1 ;
-(void)setFrameErrorCountsMultipleFaces:(unsigned)arg1 ;
-(void)setFrameErrorCountsFaceTooClose:(unsigned)arg1 ;
-(void)setFrameErrorCountsFaceTooFar:(unsigned)arg1 ;
-(void)setFrameErrorCountsPoseOutRange:(unsigned)arg1 ;
-(void)setFrameErrorCountsBinCovered:(unsigned)arg1 ;
-(void)setFrameErrorCountsOccluded:(unsigned)arg1 ;
-(void)setFrameCountBin00:(int)arg1 ;
-(void)setFrameCountBin01:(int)arg1 ;
-(void)setFrameCountBin02:(int)arg1 ;
-(void)setFrameCountBin10:(int)arg1 ;
-(void)setFrameCountBin11:(int)arg1 ;
-(void)setFrameCountBin12:(int)arg1 ;
-(void)setFrameCountBin20:(int)arg1 ;
-(void)setFrameCountBin21:(int)arg1 ;
-(void)setFrameCountBin22:(int)arg1 ;
-(void)setBioCaptureSequenceCount:(unsigned)arg1 ;
-(void)setEnrollFeatureVectorError:(unsigned)arg1 ;
-(void)setEnrollResult:(unsigned)arg1 ;
-(void)setEnrolledIdentityCount:(unsigned)arg1 ;
-(void)setFailedNoFace:(BOOL)arg1 ;
-(void)setHasOverallResult:(BOOL)arg1 ;
-(BOOL)hasOverallResult;
-(void)setHasDoubleErrorCountsOK:(BOOL)arg1 ;
-(BOOL)hasDoubleErrorCountsOK;
-(void)setHasDoubleErrorCountsMoreFrames:(BOOL)arg1 ;
-(BOOL)hasDoubleErrorCountsMoreFrames;
-(void)setHasDoubleErrorCountsNoFace:(BOOL)arg1 ;
-(BOOL)hasDoubleErrorCountsNoFace;
-(void)setHasDoubleErrorCountsFaceOutOfFOV:(BOOL)arg1 ;
-(BOOL)hasDoubleErrorCountsFaceOutOfFOV;
-(void)setHasDoubleErrorCountsMultipleFaces:(BOOL)arg1 ;
-(BOOL)hasDoubleErrorCountsMultipleFaces;
-(void)setHasDoubleErrorCountsFaceTooClose:(BOOL)arg1 ;
-(BOOL)hasDoubleErrorCountsFaceTooClose;
-(void)setHasDoubleErrorCountsFaceTooFar:(BOOL)arg1 ;
-(BOOL)hasDoubleErrorCountsFaceTooFar;
-(void)setHasDoubleErrorCountsPoseOutRange:(BOOL)arg1 ;
-(BOOL)hasDoubleErrorCountsPoseOutRange;
-(void)setHasDoubleErrorCountsBinCovered:(BOOL)arg1 ;
-(BOOL)hasDoubleErrorCountsBinCovered;
-(void)setHasDoubleErrorCountsOccluded:(BOOL)arg1 ;
-(BOOL)hasDoubleErrorCountsOccluded;
-(void)setHasFrameErrorCountsOK:(BOOL)arg1 ;
-(BOOL)hasFrameErrorCountsOK;
-(void)setHasFrameErrorCountsMoreFrames:(BOOL)arg1 ;
-(BOOL)hasFrameErrorCountsMoreFrames;
-(void)setHasFrameErrorCountsNoFace:(BOOL)arg1 ;
-(BOOL)hasFrameErrorCountsNoFace;
-(void)setHasFrameErrorCountsFaceOutOfFOV:(BOOL)arg1 ;
-(BOOL)hasFrameErrorCountsFaceOutOfFOV;
-(void)setHasFrameErrorCountsMultipleFaces:(BOOL)arg1 ;
-(BOOL)hasFrameErrorCountsMultipleFaces;
-(void)setHasFrameErrorCountsFaceTooClose:(BOOL)arg1 ;
-(BOOL)hasFrameErrorCountsFaceTooClose;
-(void)setHasFrameErrorCountsFaceTooFar:(BOOL)arg1 ;
-(BOOL)hasFrameErrorCountsFaceTooFar;
-(void)setHasFrameErrorCountsPoseOutRange:(BOOL)arg1 ;
-(BOOL)hasFrameErrorCountsPoseOutRange;
-(void)setHasFrameErrorCountsBinCovered:(BOOL)arg1 ;
-(BOOL)hasFrameErrorCountsBinCovered;
-(void)setHasFrameErrorCountsOccluded:(BOOL)arg1 ;
-(BOOL)hasFrameErrorCountsOccluded;
-(void)setHasFrameCountBin00:(BOOL)arg1 ;
-(BOOL)hasFrameCountBin00;
-(void)setHasFrameCountBin01:(BOOL)arg1 ;
-(BOOL)hasFrameCountBin01;
-(void)setHasFrameCountBin02:(BOOL)arg1 ;
-(BOOL)hasFrameCountBin02;
-(void)setHasFrameCountBin10:(BOOL)arg1 ;
-(BOOL)hasFrameCountBin10;
-(void)setHasFrameCountBin11:(BOOL)arg1 ;
-(BOOL)hasFrameCountBin11;
-(void)setHasFrameCountBin12:(BOOL)arg1 ;
-(BOOL)hasFrameCountBin12;
-(void)setHasFrameCountBin20:(BOOL)arg1 ;
-(BOOL)hasFrameCountBin20;
-(void)setHasFrameCountBin21:(BOOL)arg1 ;
-(BOOL)hasFrameCountBin21;
-(void)setHasFrameCountBin22:(BOOL)arg1 ;
-(BOOL)hasFrameCountBin22;
-(void)setHasBioCaptureSequenceCount:(BOOL)arg1 ;
-(BOOL)hasBioCaptureSequenceCount;
-(void)setHasFeatureGenerationError:(BOOL)arg1 ;
-(BOOL)hasFeatureGenerationError;
-(void)setHasEnrollFeatureVectorError:(BOOL)arg1 ;
-(BOOL)hasEnrollFeatureVectorError;
-(void)setHasEnrollResult:(BOOL)arg1 ;
-(BOOL)hasEnrollResult;
-(BOOL)hasRfcSetIndex;
-(BOOL)hasRfcFrameIndex;
-(void)setHasFailedNoFace:(BOOL)arg1 ;
-(BOOL)hasFailedNoFace;
-(void)setHasEnrolledIdentityCount:(BOOL)arg1 ;
-(BOOL)hasEnrolledIdentityCount;
-(BOOL)overallResult;
-(unsigned)doubleErrorCountsOK;
-(unsigned)doubleErrorCountsMoreFrames;
-(unsigned)doubleErrorCountsNoFace;
-(unsigned)doubleErrorCountsFaceOutOfFOV;
-(unsigned)doubleErrorCountsMultipleFaces;
-(unsigned)doubleErrorCountsFaceTooClose;
-(unsigned)doubleErrorCountsFaceTooFar;
-(unsigned)doubleErrorCountsPoseOutRange;
-(unsigned)doubleErrorCountsBinCovered;
-(unsigned)doubleErrorCountsOccluded;
-(unsigned)frameErrorCountsOK;
-(unsigned)frameErrorCountsMoreFrames;
-(unsigned)frameErrorCountsNoFace;
-(unsigned)frameErrorCountsFaceOutOfFOV;
-(unsigned)frameErrorCountsMultipleFaces;
-(unsigned)frameErrorCountsFaceTooClose;
-(unsigned)frameErrorCountsFaceTooFar;
-(unsigned)frameErrorCountsPoseOutRange;
-(unsigned)frameErrorCountsBinCovered;
-(unsigned)frameErrorCountsOccluded;
-(int)frameCountBin00;
-(int)frameCountBin01;
-(int)frameCountBin02;
-(int)frameCountBin10;
-(int)frameCountBin11;
-(int)frameCountBin12;
-(int)frameCountBin20;
-(int)frameCountBin21;
-(int)frameCountBin22;
-(unsigned)bioCaptureSequenceCount;
-(unsigned)featureGenerationError;
-(unsigned)enrollFeatureVectorError;
-(unsigned)enrollResult;
-(long long)rfcSetIndex;
-(long long)rfcFrameIndex;
-(BOOL)failedNoFace;
-(unsigned)enrolledIdentityCount;
@end

