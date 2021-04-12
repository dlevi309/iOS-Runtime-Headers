/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libBKDM2.dylib
*/

#import <libBKDM2.dylib/libBKDM2.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDBiometricKitAttentionCheck : PBCodable <NSCopying> {

	unsigned long long _overallTime;
	unsigned long long _timestamp;
	int _ambientLux;
	unsigned _camRectH;
	unsigned _camRectW;
	unsigned _camRectX;
	unsigned _camRectY;
	int _cameraErr;
	unsigned _deviceOrientation;
	unsigned _faceDetectFrameCount;
	unsigned _faceDetectFrameDenseCount;
	unsigned _faceDetectFrameFloodCount;
	unsigned _faceDetectFrameSparseCount;
	unsigned _faceDetectResult;
	unsigned _faceDistance;
	unsigned _faceOrientation;
	int _facePitch;
	int _faceRoll;
	int _faceYaw;
	unsigned _ppmAllocatedBudget;
	unsigned _ppmRequestedBudget;
	int _sensorTemperature;
	BOOL _attentionDetectFailed;
	BOOL _engagementInfoFeedbackCameraObstructed;
	BOOL _engagementInfoFeedbackFaceOccluded;
	BOOL _engagementInfoFeedbackFaceTooClose;
	BOOL _engagementInfoFeedbackFaceTooFar;
	BOOL _engagementInfoFeedbackNoAttention;
	BOOL _engagementInfoFeedbackNoFaceDetected;
	BOOL _engagementInfoFeedbackPartialOutOfFOV;
	BOOL _engagementInfoFeedbackPoseMarginal;
	BOOL _engagementInfoFeedbackPoseOutOfRange;
	BOOL _faceDetectFailed;
	BOOL _hasOcclusion;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasOverallTime; 
@property (assign,nonatomic) unsigned long long overallTime;                              //@synthesize overallTime=_overallTime - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDetectResult; 
@property (assign,nonatomic) unsigned faceDetectResult;                                   //@synthesize faceDetectResult=_faceDetectResult - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDetectFrameCount; 
@property (assign,nonatomic) unsigned faceDetectFrameCount;                               //@synthesize faceDetectFrameCount=_faceDetectFrameCount - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDetectFrameFloodCount; 
@property (assign,nonatomic) unsigned faceDetectFrameFloodCount;                          //@synthesize faceDetectFrameFloodCount=_faceDetectFrameFloodCount - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDetectFrameSparseCount; 
@property (assign,nonatomic) unsigned faceDetectFrameSparseCount;                         //@synthesize faceDetectFrameSparseCount=_faceDetectFrameSparseCount - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDetectFrameDenseCount; 
@property (assign,nonatomic) unsigned faceDetectFrameDenseCount;                          //@synthesize faceDetectFrameDenseCount=_faceDetectFrameDenseCount - In the implementation block
@property (assign,nonatomic) BOOL hasAmbientLux; 
@property (assign,nonatomic) int ambientLux;                                              //@synthesize ambientLux=_ambientLux - In the implementation block
@property (assign,nonatomic) BOOL hasCameraErr; 
@property (assign,nonatomic) int cameraErr;                                               //@synthesize cameraErr=_cameraErr - In the implementation block
@property (assign,nonatomic) BOOL hasSensorTemperature; 
@property (assign,nonatomic) int sensorTemperature;                                       //@synthesize sensorTemperature=_sensorTemperature - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDistance; 
@property (assign,nonatomic) unsigned faceDistance;                                       //@synthesize faceDistance=_faceDistance - In the implementation block
@property (assign,nonatomic) BOOL hasHasOcclusion; 
@property (assign,nonatomic) BOOL hasOcclusion;                                           //@synthesize hasOcclusion=_hasOcclusion - In the implementation block
@property (assign,nonatomic) BOOL hasCamRectX; 
@property (assign,nonatomic) unsigned camRectX;                                           //@synthesize camRectX=_camRectX - In the implementation block
@property (assign,nonatomic) BOOL hasCamRectY; 
@property (assign,nonatomic) unsigned camRectY;                                           //@synthesize camRectY=_camRectY - In the implementation block
@property (assign,nonatomic) BOOL hasCamRectW; 
@property (assign,nonatomic) unsigned camRectW;                                           //@synthesize camRectW=_camRectW - In the implementation block
@property (assign,nonatomic) BOOL hasCamRectH; 
@property (assign,nonatomic) unsigned camRectH;                                           //@synthesize camRectH=_camRectH - In the implementation block
@property (assign,nonatomic) BOOL hasPpmRequestedBudget; 
@property (assign,nonatomic) unsigned ppmRequestedBudget;                                 //@synthesize ppmRequestedBudget=_ppmRequestedBudget - In the implementation block
@property (assign,nonatomic) BOOL hasPpmAllocatedBudget; 
@property (assign,nonatomic) unsigned ppmAllocatedBudget;                                 //@synthesize ppmAllocatedBudget=_ppmAllocatedBudget - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDetectFailed; 
@property (assign,nonatomic) BOOL faceDetectFailed;                                       //@synthesize faceDetectFailed=_faceDetectFailed - In the implementation block
@property (assign,nonatomic) BOOL hasAttentionDetectFailed; 
@property (assign,nonatomic) BOOL attentionDetectFailed;                                  //@synthesize attentionDetectFailed=_attentionDetectFailed - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceOrientation; 
@property (assign,nonatomic) unsigned deviceOrientation;                                  //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementInfoFeedbackNoFaceDetected; 
@property (assign,nonatomic) BOOL engagementInfoFeedbackNoFaceDetected;                   //@synthesize engagementInfoFeedbackNoFaceDetected=_engagementInfoFeedbackNoFaceDetected - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementInfoFeedbackFaceTooClose; 
@property (assign,nonatomic) BOOL engagementInfoFeedbackFaceTooClose;                     //@synthesize engagementInfoFeedbackFaceTooClose=_engagementInfoFeedbackFaceTooClose - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementInfoFeedbackFaceTooFar; 
@property (assign,nonatomic) BOOL engagementInfoFeedbackFaceTooFar;                       //@synthesize engagementInfoFeedbackFaceTooFar=_engagementInfoFeedbackFaceTooFar - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementInfoFeedbackPoseOutOfRange; 
@property (assign,nonatomic) BOOL engagementInfoFeedbackPoseOutOfRange;                   //@synthesize engagementInfoFeedbackPoseOutOfRange=_engagementInfoFeedbackPoseOutOfRange - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementInfoFeedbackNoAttention; 
@property (assign,nonatomic) BOOL engagementInfoFeedbackNoAttention;                      //@synthesize engagementInfoFeedbackNoAttention=_engagementInfoFeedbackNoAttention - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementInfoFeedbackFaceOccluded; 
@property (assign,nonatomic) BOOL engagementInfoFeedbackFaceOccluded;                     //@synthesize engagementInfoFeedbackFaceOccluded=_engagementInfoFeedbackFaceOccluded - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementInfoFeedbackCameraObstructed; 
@property (assign,nonatomic) BOOL engagementInfoFeedbackCameraObstructed;                 //@synthesize engagementInfoFeedbackCameraObstructed=_engagementInfoFeedbackCameraObstructed - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementInfoFeedbackPartialOutOfFOV; 
@property (assign,nonatomic) BOOL engagementInfoFeedbackPartialOutOfFOV;                  //@synthesize engagementInfoFeedbackPartialOutOfFOV=_engagementInfoFeedbackPartialOutOfFOV - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementInfoFeedbackPoseMarginal; 
@property (assign,nonatomic) BOOL engagementInfoFeedbackPoseMarginal;                     //@synthesize engagementInfoFeedbackPoseMarginal=_engagementInfoFeedbackPoseMarginal - In the implementation block
@property (assign,nonatomic) BOOL hasFaceOrientation; 
@property (assign,nonatomic) unsigned faceOrientation;                                    //@synthesize faceOrientation=_faceOrientation - In the implementation block
@property (assign,nonatomic) BOOL hasFacePitch; 
@property (assign,nonatomic) int facePitch;                                               //@synthesize facePitch=_facePitch - In the implementation block
@property (assign,nonatomic) BOOL hasFaceYaw; 
@property (assign,nonatomic) int faceYaw;                                                 //@synthesize faceYaw=_faceYaw - In the implementation block
@property (assign,nonatomic) BOOL hasFaceRoll; 
@property (assign,nonatomic) int faceRoll;                                                //@synthesize faceRoll=_faceRoll - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(void)setDeviceOrientation:(unsigned)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned)deviceOrientation;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)faceOrientation;
-(void)setFaceOrientation:(unsigned)arg1 ;
-(void)setSensorTemperature:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasDeviceOrientation:(BOOL)arg1 ;
-(BOOL)hasDeviceOrientation;
-(int)sensorTemperature;
-(BOOL)isEqual:(id)arg1 ;
-(void)setOverallTime:(unsigned long long)arg1 ;
-(unsigned long long)overallTime;
-(void)setHasOverallTime:(BOOL)arg1 ;
-(BOOL)hasOverallTime;
-(void)setFaceDetectResult:(unsigned)arg1 ;
-(void)setHasFaceDetectResult:(BOOL)arg1 ;
-(BOOL)hasFaceDetectResult;
-(void)setFaceDetectFrameCount:(unsigned)arg1 ;
-(void)setHasFaceDetectFrameCount:(BOOL)arg1 ;
-(BOOL)hasFaceDetectFrameCount;
-(void)setFaceDetectFrameFloodCount:(unsigned)arg1 ;
-(void)setHasFaceDetectFrameFloodCount:(BOOL)arg1 ;
-(BOOL)hasFaceDetectFrameFloodCount;
-(void)setFaceDetectFrameSparseCount:(unsigned)arg1 ;
-(void)setHasFaceDetectFrameSparseCount:(BOOL)arg1 ;
-(BOOL)hasFaceDetectFrameSparseCount;
-(void)setFaceDetectFrameDenseCount:(unsigned)arg1 ;
-(void)setHasFaceDetectFrameDenseCount:(BOOL)arg1 ;
-(BOOL)hasFaceDetectFrameDenseCount;
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
-(void)setHasOcclusion:(BOOL)arg1 ;
-(void)setHasHasOcclusion:(BOOL)arg1 ;
-(BOOL)hasHasOcclusion;
-(void)setCamRectX:(unsigned)arg1 ;
-(void)setHasCamRectX:(BOOL)arg1 ;
-(BOOL)hasCamRectX;
-(void)setCamRectY:(unsigned)arg1 ;
-(void)setHasCamRectY:(BOOL)arg1 ;
-(BOOL)hasCamRectY;
-(void)setCamRectW:(unsigned)arg1 ;
-(void)setHasCamRectW:(BOOL)arg1 ;
-(BOOL)hasCamRectW;
-(void)setCamRectH:(unsigned)arg1 ;
-(void)setHasCamRectH:(BOOL)arg1 ;
-(BOOL)hasCamRectH;
-(void)setPpmRequestedBudget:(unsigned)arg1 ;
-(void)setHasPpmRequestedBudget:(BOOL)arg1 ;
-(BOOL)hasPpmRequestedBudget;
-(void)setPpmAllocatedBudget:(unsigned)arg1 ;
-(void)setHasPpmAllocatedBudget:(BOOL)arg1 ;
-(BOOL)hasPpmAllocatedBudget;
-(void)setFaceDetectFailed:(BOOL)arg1 ;
-(void)setHasFaceDetectFailed:(BOOL)arg1 ;
-(BOOL)hasFaceDetectFailed;
-(void)setAttentionDetectFailed:(BOOL)arg1 ;
-(void)setHasAttentionDetectFailed:(BOOL)arg1 ;
-(BOOL)hasAttentionDetectFailed;
-(void)setEngagementInfoFeedbackNoFaceDetected:(BOOL)arg1 ;
-(void)setHasEngagementInfoFeedbackNoFaceDetected:(BOOL)arg1 ;
-(BOOL)hasEngagementInfoFeedbackNoFaceDetected;
-(void)setEngagementInfoFeedbackFaceTooClose:(BOOL)arg1 ;
-(void)setHasEngagementInfoFeedbackFaceTooClose:(BOOL)arg1 ;
-(BOOL)hasEngagementInfoFeedbackFaceTooClose;
-(void)setEngagementInfoFeedbackFaceTooFar:(BOOL)arg1 ;
-(void)setHasEngagementInfoFeedbackFaceTooFar:(BOOL)arg1 ;
-(BOOL)hasEngagementInfoFeedbackFaceTooFar;
-(void)setEngagementInfoFeedbackPoseOutOfRange:(BOOL)arg1 ;
-(void)setHasEngagementInfoFeedbackPoseOutOfRange:(BOOL)arg1 ;
-(BOOL)hasEngagementInfoFeedbackPoseOutOfRange;
-(void)setEngagementInfoFeedbackNoAttention:(BOOL)arg1 ;
-(void)setHasEngagementInfoFeedbackNoAttention:(BOOL)arg1 ;
-(BOOL)hasEngagementInfoFeedbackNoAttention;
-(void)setEngagementInfoFeedbackFaceOccluded:(BOOL)arg1 ;
-(void)setHasEngagementInfoFeedbackFaceOccluded:(BOOL)arg1 ;
-(BOOL)hasEngagementInfoFeedbackFaceOccluded;
-(void)setEngagementInfoFeedbackCameraObstructed:(BOOL)arg1 ;
-(void)setHasEngagementInfoFeedbackCameraObstructed:(BOOL)arg1 ;
-(BOOL)hasEngagementInfoFeedbackCameraObstructed;
-(void)setEngagementInfoFeedbackPartialOutOfFOV:(BOOL)arg1 ;
-(void)setHasEngagementInfoFeedbackPartialOutOfFOV:(BOOL)arg1 ;
-(BOOL)hasEngagementInfoFeedbackPartialOutOfFOV;
-(void)setEngagementInfoFeedbackPoseMarginal:(BOOL)arg1 ;
-(void)setHasEngagementInfoFeedbackPoseMarginal:(BOOL)arg1 ;
-(BOOL)hasEngagementInfoFeedbackPoseMarginal;
-(void)setHasFaceOrientation:(BOOL)arg1 ;
-(BOOL)hasFaceOrientation;
-(void)setFacePitch:(int)arg1 ;
-(void)setHasFacePitch:(BOOL)arg1 ;
-(BOOL)hasFacePitch;
-(void)setFaceYaw:(int)arg1 ;
-(void)setHasFaceYaw:(BOOL)arg1 ;
-(BOOL)hasFaceYaw;
-(void)setFaceRoll:(int)arg1 ;
-(void)setHasFaceRoll:(BOOL)arg1 ;
-(BOOL)hasFaceRoll;
-(unsigned)faceDetectResult;
-(unsigned)faceDetectFrameCount;
-(unsigned)faceDetectFrameFloodCount;
-(unsigned)faceDetectFrameSparseCount;
-(unsigned)faceDetectFrameDenseCount;
-(int)ambientLux;
-(int)cameraErr;
-(unsigned)faceDistance;
-(BOOL)hasOcclusion;
-(unsigned)camRectX;
-(unsigned)camRectY;
-(unsigned)camRectW;
-(unsigned)camRectH;
-(unsigned)ppmRequestedBudget;
-(unsigned)ppmAllocatedBudget;
-(BOOL)faceDetectFailed;
-(BOOL)attentionDetectFailed;
-(BOOL)engagementInfoFeedbackNoFaceDetected;
-(BOOL)engagementInfoFeedbackFaceTooClose;
-(BOOL)engagementInfoFeedbackFaceTooFar;
-(BOOL)engagementInfoFeedbackPoseOutOfRange;
-(BOOL)engagementInfoFeedbackNoAttention;
-(BOOL)engagementInfoFeedbackFaceOccluded;
-(BOOL)engagementInfoFeedbackCameraObstructed;
-(BOOL)engagementInfoFeedbackPartialOutOfFOV;
-(BOOL)engagementInfoFeedbackPoseMarginal;
-(int)facePitch;
-(int)faceYaw;
-(int)faceRoll;
@end

