/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libBKDM2.dylib
*/

#import <libBKDM2.dylib/libBKDM2.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDBiometricKitMatchAttempt : PBCodable <NSCopying> {

	SCD_Struct_AW19* _identityCreationTimes;
	unsigned long long _bioCheckEndTime;
	unsigned long long _faceDetectEndTime;
	unsigned long long _overallTime;
	unsigned long long _overallTimeWithRetries;
	unsigned long long _probingPatternEndTime;
	long long _rfcFrameIndex;
	long long _rfcSetIndex;
	unsigned long long _timeSinceSleep;
	unsigned long long _timestamp;
	int _ambientLux;
	unsigned _bioCheckCamRectH;
	unsigned _bioCheckCamRectW;
	unsigned _bioCheckCamRectX;
	unsigned _bioCheckCamRectY;
	unsigned _bioCheckFaceDistance;
	unsigned _bioCheckFrameCount;
	unsigned _bioCheckFrameDenseCount;
	unsigned _bioCheckFrameFloodCount;
	unsigned _bioCheckFrameSparseCount;
	unsigned _bioCheckPPMAllocatedBudget;
	unsigned _bioCheckPPMRequestedBudget;
	int _bioCheckResult;
	unsigned _bioLockoutReason;
	unsigned _camRectH;
	unsigned _camRectW;
	unsigned _camRectX;
	unsigned _camRectY;
	int _cameraErr;
	NSString* _cameraHWParameters;
	unsigned _captureMethod;
	unsigned _deviceOrientation;
	unsigned _faceDetectCamRectH;
	unsigned _faceDetectCamRectW;
	unsigned _faceDetectCamRectX;
	unsigned _faceDetectCamRectY;
	unsigned _faceDetectFaceDistance;
	unsigned _faceDetectFrameCount;
	unsigned _faceDetectFrameDenseCount;
	unsigned _faceDetectFrameFloodCount;
	unsigned _faceDetectFrameSparseCount;
	unsigned _faceDetectPPMAllocatedBudget;
	unsigned _faceDetectPPMRequestedBudget;
	unsigned _faceDetectResult;
	unsigned _faceDistance;
	unsigned _faceOrientation;
	int _facePitch;
	int _faceRoll;
	int _faceYaw;
	unsigned _failedMatchAttemptsFromBiocheck;
	unsigned _failedMatchAttemptsFromFD;
	unsigned _failedUnlockAttemptsFromBiocheck;
	unsigned _failedUnlockAttemptsFromFD;
	unsigned _featureGenerationError;
	unsigned _matchFeatureVectorError;
	unsigned _matchIdentityCount;
	int _onlineTemplateAge;
	unsigned _probingPatternCamRectH;
	unsigned _probingPatternCamRectW;
	unsigned _probingPatternCamRectX;
	unsigned _probingPatternCamRectY;
	unsigned _probingPatternFaceDistance;
	unsigned _probingPatternFrameCount;
	unsigned _probingPatternFrameDenseCount;
	unsigned _probingPatternFrameFloodCount;
	unsigned _probingPatternFrameSparseCount;
	int _probingPatternResult;
	int _sensorTemperature;
	int _shortTermTemplateAge;
	BOOL _asDepthFailure;
	BOOL _asFailure;
	BOOL _asFloodFailure;
	BOOL _autoRetry;
	BOOL _autoRetryAllowed;
	BOOL _autoRetryEnabled;
	BOOL _bioLockout;
	BOOL _combinedSequenceEnabled;
	BOOL _engagementInfoFeedbackCameraObstructed;
	BOOL _engagementInfoFeedbackFaceOccluded;
	BOOL _engagementInfoFeedbackFaceTooClose;
	BOOL _engagementInfoFeedbackFaceTooFar;
	BOOL _engagementInfoFeedbackNoAttention;
	BOOL _engagementInfoFeedbackNoFaceDetected;
	BOOL _engagementInfoFeedbackPartialOutOfFOV;
	BOOL _engagementInfoFeedbackPoseMarginal;
	BOOL _engagementInfoFeedbackPoseOutOfRange;
	BOOL _hasOcclusion;
	BOOL _matchCancelled;
	BOOL _matchDepthFailure;
	BOOL _matchFloodFailure;
	BOOL _matchForUnlock;
	BOOL _matcherFailure;
	BOOL _onlineTemplateUpdated;
	BOOL _overallResult;
	BOOL _passcodeChallengeAllowed;
	BOOL _probingPatternFailure;
	SCD_Struct_AW20 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasOverallResult; 
@property (assign,nonatomic) BOOL overallResult;                                           //@synthesize overallResult=_overallResult - In the implementation block
@property (assign,nonatomic) BOOL hasOverallTime; 
@property (assign,nonatomic) unsigned long long overallTime;                               //@synthesize overallTime=_overallTime - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDetectEndTime; 
@property (assign,nonatomic) unsigned long long faceDetectEndTime;                         //@synthesize faceDetectEndTime=_faceDetectEndTime - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDetectResult; 
@property (assign,nonatomic) unsigned faceDetectResult;                                    //@synthesize faceDetectResult=_faceDetectResult - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDetectFrameCount; 
@property (assign,nonatomic) unsigned faceDetectFrameCount;                                //@synthesize faceDetectFrameCount=_faceDetectFrameCount - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDetectFrameFloodCount; 
@property (assign,nonatomic) unsigned faceDetectFrameFloodCount;                           //@synthesize faceDetectFrameFloodCount=_faceDetectFrameFloodCount - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDetectFrameSparseCount; 
@property (assign,nonatomic) unsigned faceDetectFrameSparseCount;                          //@synthesize faceDetectFrameSparseCount=_faceDetectFrameSparseCount - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDetectFrameDenseCount; 
@property (assign,nonatomic) unsigned faceDetectFrameDenseCount;                           //@synthesize faceDetectFrameDenseCount=_faceDetectFrameDenseCount - In the implementation block
@property (assign,nonatomic) BOOL hasBioCheckEndTime; 
@property (assign,nonatomic) unsigned long long bioCheckEndTime;                           //@synthesize bioCheckEndTime=_bioCheckEndTime - In the implementation block
@property (assign,nonatomic) BOOL hasBioCheckResult; 
@property (assign,nonatomic) int bioCheckResult;                                           //@synthesize bioCheckResult=_bioCheckResult - In the implementation block
@property (assign,nonatomic) BOOL hasBioCheckFrameCount; 
@property (assign,nonatomic) unsigned bioCheckFrameCount;                                  //@synthesize bioCheckFrameCount=_bioCheckFrameCount - In the implementation block
@property (assign,nonatomic) BOOL hasBioCheckFrameFloodCount; 
@property (assign,nonatomic) unsigned bioCheckFrameFloodCount;                             //@synthesize bioCheckFrameFloodCount=_bioCheckFrameFloodCount - In the implementation block
@property (assign,nonatomic) BOOL hasBioCheckFrameSparseCount; 
@property (assign,nonatomic) unsigned bioCheckFrameSparseCount;                            //@synthesize bioCheckFrameSparseCount=_bioCheckFrameSparseCount - In the implementation block
@property (assign,nonatomic) BOOL hasBioCheckFrameDenseCount; 
@property (assign,nonatomic) unsigned bioCheckFrameDenseCount;                             //@synthesize bioCheckFrameDenseCount=_bioCheckFrameDenseCount - In the implementation block
@property (assign,nonatomic) BOOL hasProbingPatternEndTime; 
@property (assign,nonatomic) unsigned long long probingPatternEndTime;                     //@synthesize probingPatternEndTime=_probingPatternEndTime - In the implementation block
@property (assign,nonatomic) BOOL hasProbingPatternResult; 
@property (assign,nonatomic) int probingPatternResult;                                     //@synthesize probingPatternResult=_probingPatternResult - In the implementation block
@property (assign,nonatomic) BOOL hasProbingPatternFrameCount; 
@property (assign,nonatomic) unsigned probingPatternFrameCount;                            //@synthesize probingPatternFrameCount=_probingPatternFrameCount - In the implementation block
@property (assign,nonatomic) BOOL hasProbingPatternFrameFloodCount; 
@property (assign,nonatomic) unsigned probingPatternFrameFloodCount;                       //@synthesize probingPatternFrameFloodCount=_probingPatternFrameFloodCount - In the implementation block
@property (assign,nonatomic) BOOL hasProbingPatternFrameSparseCount; 
@property (assign,nonatomic) unsigned probingPatternFrameSparseCount;                      //@synthesize probingPatternFrameSparseCount=_probingPatternFrameSparseCount - In the implementation block
@property (assign,nonatomic) BOOL hasProbingPatternFrameDenseCount; 
@property (assign,nonatomic) unsigned probingPatternFrameDenseCount;                       //@synthesize probingPatternFrameDenseCount=_probingPatternFrameDenseCount - In the implementation block
@property (assign,nonatomic) BOOL hasAmbientLux; 
@property (assign,nonatomic) int ambientLux;                                               //@synthesize ambientLux=_ambientLux - In the implementation block
@property (assign,nonatomic) BOOL hasProbingPatternFailure; 
@property (assign,nonatomic) BOOL probingPatternFailure;                                   //@synthesize probingPatternFailure=_probingPatternFailure - In the implementation block
@property (assign,nonatomic) BOOL hasMatcherFailure; 
@property (assign,nonatomic) BOOL matcherFailure;                                          //@synthesize matcherFailure=_matcherFailure - In the implementation block
@property (assign,nonatomic) BOOL hasMatchDepthFailure; 
@property (assign,nonatomic) BOOL matchDepthFailure;                                       //@synthesize matchDepthFailure=_matchDepthFailure - In the implementation block
@property (assign,nonatomic) BOOL hasMatchFloodFailure; 
@property (assign,nonatomic) BOOL matchFloodFailure;                                       //@synthesize matchFloodFailure=_matchFloodFailure - In the implementation block
@property (assign,nonatomic) BOOL hasAsFloodFailure; 
@property (assign,nonatomic) BOOL asFloodFailure;                                          //@synthesize asFloodFailure=_asFloodFailure - In the implementation block
@property (assign,nonatomic) BOOL hasAsDepthFailure; 
@property (assign,nonatomic) BOOL asDepthFailure;                                          //@synthesize asDepthFailure=_asDepthFailure - In the implementation block
@property (assign,nonatomic) BOOL hasOnlineTemplateUpdated; 
@property (assign,nonatomic) BOOL onlineTemplateUpdated;                                   //@synthesize onlineTemplateUpdated=_onlineTemplateUpdated - In the implementation block
@property (assign,nonatomic) BOOL hasPasscodeChallengeAllowed; 
@property (assign,nonatomic) BOOL passcodeChallengeAllowed;                                //@synthesize passcodeChallengeAllowed=_passcodeChallengeAllowed - In the implementation block
@property (assign,nonatomic) BOOL hasFeatureGenerationError; 
@property (assign,nonatomic) unsigned featureGenerationError;                              //@synthesize featureGenerationError=_featureGenerationError - In the implementation block
@property (assign,nonatomic) BOOL hasSensorTemperature; 
@property (assign,nonatomic) int sensorTemperature;                                        //@synthesize sensorTemperature=_sensorTemperature - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDistance; 
@property (assign,nonatomic) unsigned faceDistance;                                        //@synthesize faceDistance=_faceDistance - In the implementation block
@property (assign,nonatomic) BOOL hasHasOcclusion; 
@property (assign,nonatomic) BOOL hasOcclusion;                                            //@synthesize hasOcclusion=_hasOcclusion - In the implementation block
@property (assign,nonatomic) BOOL hasCamRectX; 
@property (assign,nonatomic) unsigned camRectX;                                            //@synthesize camRectX=_camRectX - In the implementation block
@property (assign,nonatomic) BOOL hasCamRectY; 
@property (assign,nonatomic) unsigned camRectY;                                            //@synthesize camRectY=_camRectY - In the implementation block
@property (assign,nonatomic) BOOL hasCamRectW; 
@property (assign,nonatomic) unsigned camRectW;                                            //@synthesize camRectW=_camRectW - In the implementation block
@property (assign,nonatomic) BOOL hasCamRectH; 
@property (assign,nonatomic) unsigned camRectH;                                            //@synthesize camRectH=_camRectH - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDetectPPMRequestedBudget; 
@property (assign,nonatomic) unsigned faceDetectPPMRequestedBudget;                        //@synthesize faceDetectPPMRequestedBudget=_faceDetectPPMRequestedBudget - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDetectPPMAllocatedBudget; 
@property (assign,nonatomic) unsigned faceDetectPPMAllocatedBudget;                        //@synthesize faceDetectPPMAllocatedBudget=_faceDetectPPMAllocatedBudget - In the implementation block
@property (assign,nonatomic) BOOL hasBioCheckPPMRequestedBudget; 
@property (assign,nonatomic) unsigned bioCheckPPMRequestedBudget;                          //@synthesize bioCheckPPMRequestedBudget=_bioCheckPPMRequestedBudget - In the implementation block
@property (assign,nonatomic) BOOL hasBioCheckPPMAllocatedBudget; 
@property (assign,nonatomic) unsigned bioCheckPPMAllocatedBudget;                          //@synthesize bioCheckPPMAllocatedBudget=_bioCheckPPMAllocatedBudget - In the implementation block
@property (assign,nonatomic) BOOL hasRfcSetIndex; 
@property (assign,nonatomic) long long rfcSetIndex;                                        //@synthesize rfcSetIndex=_rfcSetIndex - In the implementation block
@property (assign,nonatomic) BOOL hasRfcFrameIndex; 
@property (assign,nonatomic) long long rfcFrameIndex;                                      //@synthesize rfcFrameIndex=_rfcFrameIndex - In the implementation block
@property (assign,nonatomic) BOOL hasBioLockout; 
@property (assign,nonatomic) BOOL bioLockout;                                              //@synthesize bioLockout=_bioLockout - In the implementation block
@property (assign,nonatomic) BOOL hasCameraErr; 
@property (assign,nonatomic) int cameraErr;                                                //@synthesize cameraErr=_cameraErr - In the implementation block
@property (assign,nonatomic) BOOL hasMatchForUnlock; 
@property (assign,nonatomic) BOOL matchForUnlock;                                          //@synthesize matchForUnlock=_matchForUnlock - In the implementation block
@property (assign,nonatomic) BOOL hasFailedUnlockAttemptsFromFD; 
@property (assign,nonatomic) unsigned failedUnlockAttemptsFromFD;                          //@synthesize failedUnlockAttemptsFromFD=_failedUnlockAttemptsFromFD - In the implementation block
@property (assign,nonatomic) BOOL hasFailedUnlockAttemptsFromBiocheck; 
@property (assign,nonatomic) unsigned failedUnlockAttemptsFromBiocheck;                    //@synthesize failedUnlockAttemptsFromBiocheck=_failedUnlockAttemptsFromBiocheck - In the implementation block
@property (assign,nonatomic) BOOL hasFailedMatchAttemptsFromFD; 
@property (assign,nonatomic) unsigned failedMatchAttemptsFromFD;                           //@synthesize failedMatchAttemptsFromFD=_failedMatchAttemptsFromFD - In the implementation block
@property (assign,nonatomic) BOOL hasFailedMatchAttemptsFromBiocheck; 
@property (assign,nonatomic) unsigned failedMatchAttemptsFromBiocheck;                     //@synthesize failedMatchAttemptsFromBiocheck=_failedMatchAttemptsFromBiocheck - In the implementation block
@property (assign,nonatomic) BOOL hasBioLockoutReason; 
@property (assign,nonatomic) unsigned bioLockoutReason;                                    //@synthesize bioLockoutReason=_bioLockoutReason - In the implementation block
@property (assign,nonatomic) BOOL hasMatchFeatureVectorError; 
@property (assign,nonatomic) unsigned matchFeatureVectorError;                             //@synthesize matchFeatureVectorError=_matchFeatureVectorError - In the implementation block
@property (assign,nonatomic) BOOL hasOnlineTemplateAge; 
@property (assign,nonatomic) int onlineTemplateAge;                                        //@synthesize onlineTemplateAge=_onlineTemplateAge - In the implementation block
@property (assign,nonatomic) BOOL hasShortTermTemplateAge; 
@property (assign,nonatomic) int shortTermTemplateAge;                                     //@synthesize shortTermTemplateAge=_shortTermTemplateAge - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDetectFaceDistance; 
@property (assign,nonatomic) unsigned faceDetectFaceDistance;                              //@synthesize faceDetectFaceDistance=_faceDetectFaceDistance - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDetectCamRectX; 
@property (assign,nonatomic) unsigned faceDetectCamRectX;                                  //@synthesize faceDetectCamRectX=_faceDetectCamRectX - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDetectCamRectY; 
@property (assign,nonatomic) unsigned faceDetectCamRectY;                                  //@synthesize faceDetectCamRectY=_faceDetectCamRectY - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDetectCamRectW; 
@property (assign,nonatomic) unsigned faceDetectCamRectW;                                  //@synthesize faceDetectCamRectW=_faceDetectCamRectW - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDetectCamRectH; 
@property (assign,nonatomic) unsigned faceDetectCamRectH;                                  //@synthesize faceDetectCamRectH=_faceDetectCamRectH - In the implementation block
@property (assign,nonatomic) BOOL hasBioCheckFaceDistance; 
@property (assign,nonatomic) unsigned bioCheckFaceDistance;                                //@synthesize bioCheckFaceDistance=_bioCheckFaceDistance - In the implementation block
@property (assign,nonatomic) BOOL hasBioCheckCamRectX; 
@property (assign,nonatomic) unsigned bioCheckCamRectX;                                    //@synthesize bioCheckCamRectX=_bioCheckCamRectX - In the implementation block
@property (assign,nonatomic) BOOL hasBioCheckCamRectY; 
@property (assign,nonatomic) unsigned bioCheckCamRectY;                                    //@synthesize bioCheckCamRectY=_bioCheckCamRectY - In the implementation block
@property (assign,nonatomic) BOOL hasBioCheckCamRectW; 
@property (assign,nonatomic) unsigned bioCheckCamRectW;                                    //@synthesize bioCheckCamRectW=_bioCheckCamRectW - In the implementation block
@property (assign,nonatomic) BOOL hasBioCheckCamRectH; 
@property (assign,nonatomic) unsigned bioCheckCamRectH;                                    //@synthesize bioCheckCamRectH=_bioCheckCamRectH - In the implementation block
@property (assign,nonatomic) BOOL hasProbingPatternFaceDistance; 
@property (assign,nonatomic) unsigned probingPatternFaceDistance;                          //@synthesize probingPatternFaceDistance=_probingPatternFaceDistance - In the implementation block
@property (assign,nonatomic) BOOL hasProbingPatternCamRectX; 
@property (assign,nonatomic) unsigned probingPatternCamRectX;                              //@synthesize probingPatternCamRectX=_probingPatternCamRectX - In the implementation block
@property (assign,nonatomic) BOOL hasProbingPatternCamRectY; 
@property (assign,nonatomic) unsigned probingPatternCamRectY;                              //@synthesize probingPatternCamRectY=_probingPatternCamRectY - In the implementation block
@property (assign,nonatomic) BOOL hasProbingPatternCamRectW; 
@property (assign,nonatomic) unsigned probingPatternCamRectW;                              //@synthesize probingPatternCamRectW=_probingPatternCamRectW - In the implementation block
@property (assign,nonatomic) BOOL hasProbingPatternCamRectH; 
@property (assign,nonatomic) unsigned probingPatternCamRectH;                              //@synthesize probingPatternCamRectH=_probingPatternCamRectH - In the implementation block
@property (assign,nonatomic) BOOL hasAsFailure; 
@property (assign,nonatomic) BOOL asFailure;                                               //@synthesize asFailure=_asFailure - In the implementation block
@property (assign,nonatomic) BOOL hasAutoRetry; 
@property (assign,nonatomic) BOOL autoRetry;                                               //@synthesize autoRetry=_autoRetry - In the implementation block
@property (assign,nonatomic) BOOL hasAutoRetryAllowed; 
@property (assign,nonatomic) BOOL autoRetryAllowed;                                        //@synthesize autoRetryAllowed=_autoRetryAllowed - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceOrientation; 
@property (assign,nonatomic) unsigned deviceOrientation;                                   //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (assign,nonatomic) BOOL hasMatchIdentityCount; 
@property (assign,nonatomic) unsigned matchIdentityCount;                                  //@synthesize matchIdentityCount=_matchIdentityCount - In the implementation block
@property (nonatomic,readonly) BOOL hasCameraHWParameters; 
@property (nonatomic,retain) NSString * cameraHWParameters;                                //@synthesize cameraHWParameters=_cameraHWParameters - In the implementation block
@property (assign,nonatomic) BOOL hasCaptureMethod; 
@property (assign,nonatomic) unsigned captureMethod;                                       //@synthesize captureMethod=_captureMethod - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementInfoFeedbackNoFaceDetected; 
@property (assign,nonatomic) BOOL engagementInfoFeedbackNoFaceDetected;                    //@synthesize engagementInfoFeedbackNoFaceDetected=_engagementInfoFeedbackNoFaceDetected - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementInfoFeedbackFaceTooClose; 
@property (assign,nonatomic) BOOL engagementInfoFeedbackFaceTooClose;                      //@synthesize engagementInfoFeedbackFaceTooClose=_engagementInfoFeedbackFaceTooClose - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementInfoFeedbackFaceTooFar; 
@property (assign,nonatomic) BOOL engagementInfoFeedbackFaceTooFar;                        //@synthesize engagementInfoFeedbackFaceTooFar=_engagementInfoFeedbackFaceTooFar - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementInfoFeedbackPoseOutOfRange; 
@property (assign,nonatomic) BOOL engagementInfoFeedbackPoseOutOfRange;                    //@synthesize engagementInfoFeedbackPoseOutOfRange=_engagementInfoFeedbackPoseOutOfRange - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementInfoFeedbackNoAttention; 
@property (assign,nonatomic) BOOL engagementInfoFeedbackNoAttention;                       //@synthesize engagementInfoFeedbackNoAttention=_engagementInfoFeedbackNoAttention - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementInfoFeedbackFaceOccluded; 
@property (assign,nonatomic) BOOL engagementInfoFeedbackFaceOccluded;                      //@synthesize engagementInfoFeedbackFaceOccluded=_engagementInfoFeedbackFaceOccluded - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementInfoFeedbackCameraObstructed; 
@property (assign,nonatomic) BOOL engagementInfoFeedbackCameraObstructed;                  //@synthesize engagementInfoFeedbackCameraObstructed=_engagementInfoFeedbackCameraObstructed - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementInfoFeedbackPartialOutOfFOV; 
@property (assign,nonatomic) BOOL engagementInfoFeedbackPartialOutOfFOV;                   //@synthesize engagementInfoFeedbackPartialOutOfFOV=_engagementInfoFeedbackPartialOutOfFOV - In the implementation block
@property (assign,nonatomic) BOOL hasCombinedSequenceEnabled; 
@property (assign,nonatomic) BOOL combinedSequenceEnabled;                                 //@synthesize combinedSequenceEnabled=_combinedSequenceEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasOverallTimeWithRetries; 
@property (assign,nonatomic) unsigned long long overallTimeWithRetries;                    //@synthesize overallTimeWithRetries=_overallTimeWithRetries - In the implementation block
@property (assign,nonatomic) BOOL hasAutoRetryEnabled; 
@property (assign,nonatomic) BOOL autoRetryEnabled;                                        //@synthesize autoRetryEnabled=_autoRetryEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long identityCreationTimesCount; 
@property (nonatomic,readonly) unsigned long long* identityCreationTimes; 
@property (assign,nonatomic) BOOL hasMatchCancelled; 
@property (assign,nonatomic) BOOL matchCancelled;                                          //@synthesize matchCancelled=_matchCancelled - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementInfoFeedbackPoseMarginal; 
@property (assign,nonatomic) BOOL engagementInfoFeedbackPoseMarginal;                      //@synthesize engagementInfoFeedbackPoseMarginal=_engagementInfoFeedbackPoseMarginal - In the implementation block
@property (assign,nonatomic) BOOL hasFaceOrientation; 
@property (assign,nonatomic) unsigned faceOrientation;                                     //@synthesize faceOrientation=_faceOrientation - In the implementation block
@property (assign,nonatomic) BOOL hasFacePitch; 
@property (assign,nonatomic) int facePitch;                                                //@synthesize facePitch=_facePitch - In the implementation block
@property (assign,nonatomic) BOOL hasFaceYaw; 
@property (assign,nonatomic) int faceYaw;                                                  //@synthesize faceYaw=_faceYaw - In the implementation block
@property (assign,nonatomic) BOOL hasFaceRoll; 
@property (assign,nonatomic) int faceRoll;                                                 //@synthesize faceRoll=_faceRoll - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceSleep; 
@property (assign,nonatomic) unsigned long long timeSinceSleep;                            //@synthesize timeSinceSleep=_timeSinceSleep - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(void)setBioLockout:(BOOL)arg1 ;
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
-(void)dealloc;
-(void)setOverallTime:(unsigned long long)arg1 ;
-(unsigned long long)overallTime;
-(void)setOverallResult:(BOOL)arg1 ;
-(BOOL)overallResult;
-(BOOL)autoRetry;
-(void)setAutoRetry:(BOOL)arg1 ;
-(void)setBioLockoutReason:(unsigned)arg1 ;
-(void)setHasBioLockoutReason:(BOOL)arg1 ;
-(BOOL)hasBioLockoutReason;
-(unsigned)bioLockoutReason;
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
-(void)setCaptureMethod:(unsigned)arg1 ;
-(void)setCombinedSequenceEnabled:(BOOL)arg1 ;
-(void)setOverallTimeWithRetries:(unsigned long long)arg1 ;
-(void)setMatchCancelled:(BOOL)arg1 ;
-(void)setTimeSinceSleep:(unsigned long long)arg1 ;
-(void)setFaceDetectEndTime:(unsigned long long)arg1 ;
-(void)setBioCheckEndTime:(unsigned long long)arg1 ;
-(void)setBioCheckResult:(int)arg1 ;
-(void)setHasBioCheckResult:(BOOL)arg1 ;
-(void)setBioCheckFrameCount:(unsigned)arg1 ;
-(void)setBioCheckFrameFloodCount:(unsigned)arg1 ;
-(void)setBioCheckFrameSparseCount:(unsigned)arg1 ;
-(void)setBioCheckFrameDenseCount:(unsigned)arg1 ;
-(void)setProbingPatternEndTime:(unsigned long long)arg1 ;
-(void)setProbingPatternResult:(int)arg1 ;
-(void)setHasProbingPatternResult:(BOOL)arg1 ;
-(void)setProbingPatternFrameCount:(unsigned)arg1 ;
-(void)setProbingPatternFrameFloodCount:(unsigned)arg1 ;
-(void)setProbingPatternFrameSparseCount:(unsigned)arg1 ;
-(void)setProbingPatternFrameDenseCount:(unsigned)arg1 ;
-(void)setMatchForUnlock:(BOOL)arg1 ;
-(void)setFailedUnlockAttemptsFromFD:(unsigned)arg1 ;
-(void)setFailedUnlockAttemptsFromBiocheck:(unsigned)arg1 ;
-(void)setFailedMatchAttemptsFromFD:(unsigned)arg1 ;
-(void)setFailedMatchAttemptsFromBiocheck:(unsigned)arg1 ;
-(void)setProbingPatternFailure:(BOOL)arg1 ;
-(unsigned)captureMethod;
-(void)setMatcherFailure:(BOOL)arg1 ;
-(void)setMatchDepthFailure:(BOOL)arg1 ;
-(void)setMatchFloodFailure:(BOOL)arg1 ;
-(void)setAsFloodFailure:(BOOL)arg1 ;
-(void)setAsDepthFailure:(BOOL)arg1 ;
-(void)setFeatureGenerationError:(unsigned)arg1 ;
-(void)setMatchFeatureVectorError:(unsigned)arg1 ;
-(void)setAsFailure:(BOOL)arg1 ;
-(void)setOnlineTemplateUpdated:(BOOL)arg1 ;
-(void)setPasscodeChallengeAllowed:(BOOL)arg1 ;
-(void)setFaceDetectFaceDistance:(unsigned)arg1 ;
-(void)setFaceDetectCamRectX:(unsigned)arg1 ;
-(void)setFaceDetectCamRectY:(unsigned)arg1 ;
-(void)setFaceDetectCamRectW:(unsigned)arg1 ;
-(void)setFaceDetectCamRectH:(unsigned)arg1 ;
-(void)setFaceDetectPPMRequestedBudget:(unsigned)arg1 ;
-(void)setFaceDetectPPMAllocatedBudget:(unsigned)arg1 ;
-(void)setBioCheckFaceDistance:(unsigned)arg1 ;
-(void)setBioCheckCamRectX:(unsigned)arg1 ;
-(void)setBioCheckCamRectY:(unsigned)arg1 ;
-(void)setBioCheckCamRectW:(unsigned)arg1 ;
-(void)setBioCheckCamRectH:(unsigned)arg1 ;
-(void)setBioCheckPPMRequestedBudget:(unsigned)arg1 ;
-(void)setBioCheckPPMAllocatedBudget:(unsigned)arg1 ;
-(void)setProbingPatternFaceDistance:(unsigned)arg1 ;
-(void)setProbingPatternCamRectX:(unsigned)arg1 ;
-(void)setProbingPatternCamRectY:(unsigned)arg1 ;
-(void)setProbingPatternCamRectW:(unsigned)arg1 ;
-(void)setProbingPatternCamRectH:(unsigned)arg1 ;
-(void)setRfcSetIndex:(long long)arg1 ;
-(void)setRfcFrameIndex:(long long)arg1 ;
-(void)setHasRfcSetIndex:(BOOL)arg1 ;
-(void)setHasRfcFrameIndex:(BOOL)arg1 ;
-(void)setOnlineTemplateAge:(int)arg1 ;
-(void)setShortTermTemplateAge:(int)arg1 ;
-(void)setAutoRetryAllowed:(BOOL)arg1 ;
-(void)setAutoRetryEnabled:(BOOL)arg1 ;
-(void)setMatchIdentityCount:(unsigned)arg1 ;
-(void)addIdentityCreationTime:(unsigned long long)arg1 ;
-(void)setCameraHWParameters:(NSString *)arg1 ;
-(void)setHasMatchIdentityCount:(BOOL)arg1 ;
-(BOOL)hasMatchIdentityCount;
-(unsigned)matchIdentityCount;
-(void)setHasOverallResult:(BOOL)arg1 ;
-(BOOL)hasOverallResult;
-(void)setHasFeatureGenerationError:(BOOL)arg1 ;
-(BOOL)hasFeatureGenerationError;
-(BOOL)hasRfcSetIndex;
-(BOOL)hasRfcFrameIndex;
-(unsigned)featureGenerationError;
-(long long)rfcSetIndex;
-(long long)rfcFrameIndex;
-(unsigned long long)identityCreationTimesCount;
-(void)clearIdentityCreationTimes;
-(unsigned long long)identityCreationTimeAtIndex:(unsigned long long)arg1 ;
-(void)setHasFaceDetectEndTime:(BOOL)arg1 ;
-(BOOL)hasFaceDetectEndTime;
-(void)setHasBioCheckEndTime:(BOOL)arg1 ;
-(BOOL)hasBioCheckEndTime;
-(BOOL)hasBioCheckResult;
-(void)setHasBioCheckFrameCount:(BOOL)arg1 ;
-(BOOL)hasBioCheckFrameCount;
-(void)setHasBioCheckFrameFloodCount:(BOOL)arg1 ;
-(BOOL)hasBioCheckFrameFloodCount;
-(void)setHasBioCheckFrameSparseCount:(BOOL)arg1 ;
-(BOOL)hasBioCheckFrameSparseCount;
-(void)setHasBioCheckFrameDenseCount:(BOOL)arg1 ;
-(BOOL)hasBioCheckFrameDenseCount;
-(void)setHasProbingPatternEndTime:(BOOL)arg1 ;
-(BOOL)hasProbingPatternEndTime;
-(BOOL)hasProbingPatternResult;
-(void)setHasProbingPatternFrameCount:(BOOL)arg1 ;
-(BOOL)hasProbingPatternFrameCount;
-(void)setHasProbingPatternFrameFloodCount:(BOOL)arg1 ;
-(BOOL)hasProbingPatternFrameFloodCount;
-(void)setHasProbingPatternFrameSparseCount:(BOOL)arg1 ;
-(BOOL)hasProbingPatternFrameSparseCount;
-(void)setHasProbingPatternFrameDenseCount:(BOOL)arg1 ;
-(BOOL)hasProbingPatternFrameDenseCount;
-(void)setHasProbingPatternFailure:(BOOL)arg1 ;
-(BOOL)hasProbingPatternFailure;
-(void)setHasMatcherFailure:(BOOL)arg1 ;
-(BOOL)hasMatcherFailure;
-(void)setHasMatchDepthFailure:(BOOL)arg1 ;
-(BOOL)hasMatchDepthFailure;
-(void)setHasMatchFloodFailure:(BOOL)arg1 ;
-(BOOL)hasMatchFloodFailure;
-(void)setHasAsFloodFailure:(BOOL)arg1 ;
-(BOOL)hasAsFloodFailure;
-(void)setHasAsDepthFailure:(BOOL)arg1 ;
-(BOOL)hasAsDepthFailure;
-(void)setHasOnlineTemplateUpdated:(BOOL)arg1 ;
-(BOOL)hasOnlineTemplateUpdated;
-(void)setHasPasscodeChallengeAllowed:(BOOL)arg1 ;
-(BOOL)hasPasscodeChallengeAllowed;
-(void)setHasFaceDetectPPMRequestedBudget:(BOOL)arg1 ;
-(BOOL)hasFaceDetectPPMRequestedBudget;
-(void)setHasFaceDetectPPMAllocatedBudget:(BOOL)arg1 ;
-(BOOL)hasFaceDetectPPMAllocatedBudget;
-(void)setHasBioCheckPPMRequestedBudget:(BOOL)arg1 ;
-(BOOL)hasBioCheckPPMRequestedBudget;
-(void)setHasBioCheckPPMAllocatedBudget:(BOOL)arg1 ;
-(BOOL)hasBioCheckPPMAllocatedBudget;
-(void)setHasBioLockout:(BOOL)arg1 ;
-(BOOL)hasBioLockout;
-(void)setHasMatchForUnlock:(BOOL)arg1 ;
-(BOOL)hasMatchForUnlock;
-(void)setHasFailedUnlockAttemptsFromFD:(BOOL)arg1 ;
-(BOOL)hasFailedUnlockAttemptsFromFD;
-(void)setHasFailedUnlockAttemptsFromBiocheck:(BOOL)arg1 ;
-(BOOL)hasFailedUnlockAttemptsFromBiocheck;
-(void)setHasFailedMatchAttemptsFromFD:(BOOL)arg1 ;
-(BOOL)hasFailedMatchAttemptsFromFD;
-(void)setHasFailedMatchAttemptsFromBiocheck:(BOOL)arg1 ;
-(BOOL)hasFailedMatchAttemptsFromBiocheck;
-(void)setHasMatchFeatureVectorError:(BOOL)arg1 ;
-(BOOL)hasMatchFeatureVectorError;
-(void)setHasOnlineTemplateAge:(BOOL)arg1 ;
-(BOOL)hasOnlineTemplateAge;
-(void)setHasShortTermTemplateAge:(BOOL)arg1 ;
-(BOOL)hasShortTermTemplateAge;
-(void)setHasFaceDetectFaceDistance:(BOOL)arg1 ;
-(BOOL)hasFaceDetectFaceDistance;
-(void)setHasFaceDetectCamRectX:(BOOL)arg1 ;
-(BOOL)hasFaceDetectCamRectX;
-(void)setHasFaceDetectCamRectY:(BOOL)arg1 ;
-(BOOL)hasFaceDetectCamRectY;
-(void)setHasFaceDetectCamRectW:(BOOL)arg1 ;
-(BOOL)hasFaceDetectCamRectW;
-(void)setHasFaceDetectCamRectH:(BOOL)arg1 ;
-(BOOL)hasFaceDetectCamRectH;
-(void)setHasBioCheckFaceDistance:(BOOL)arg1 ;
-(BOOL)hasBioCheckFaceDistance;
-(void)setHasBioCheckCamRectX:(BOOL)arg1 ;
-(BOOL)hasBioCheckCamRectX;
-(void)setHasBioCheckCamRectY:(BOOL)arg1 ;
-(BOOL)hasBioCheckCamRectY;
-(void)setHasBioCheckCamRectW:(BOOL)arg1 ;
-(BOOL)hasBioCheckCamRectW;
-(void)setHasBioCheckCamRectH:(BOOL)arg1 ;
-(BOOL)hasBioCheckCamRectH;
-(void)setHasProbingPatternFaceDistance:(BOOL)arg1 ;
-(BOOL)hasProbingPatternFaceDistance;
-(void)setHasProbingPatternCamRectX:(BOOL)arg1 ;
-(BOOL)hasProbingPatternCamRectX;
-(void)setHasProbingPatternCamRectY:(BOOL)arg1 ;
-(BOOL)hasProbingPatternCamRectY;
-(void)setHasProbingPatternCamRectW:(BOOL)arg1 ;
-(BOOL)hasProbingPatternCamRectW;
-(void)setHasProbingPatternCamRectH:(BOOL)arg1 ;
-(BOOL)hasProbingPatternCamRectH;
-(void)setHasAsFailure:(BOOL)arg1 ;
-(BOOL)hasAsFailure;
-(void)setHasAutoRetry:(BOOL)arg1 ;
-(BOOL)hasAutoRetry;
-(void)setHasAutoRetryAllowed:(BOOL)arg1 ;
-(BOOL)hasAutoRetryAllowed;
-(BOOL)hasCameraHWParameters;
-(void)setHasCaptureMethod:(BOOL)arg1 ;
-(BOOL)hasCaptureMethod;
-(void)setHasCombinedSequenceEnabled:(BOOL)arg1 ;
-(BOOL)hasCombinedSequenceEnabled;
-(void)setHasOverallTimeWithRetries:(BOOL)arg1 ;
-(BOOL)hasOverallTimeWithRetries;
-(void)setHasAutoRetryEnabled:(BOOL)arg1 ;
-(BOOL)hasAutoRetryEnabled;
-(unsigned long long*)identityCreationTimes;
-(void)setIdentityCreationTimes:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasMatchCancelled:(BOOL)arg1 ;
-(BOOL)hasMatchCancelled;
-(void)setHasTimeSinceSleep:(BOOL)arg1 ;
-(BOOL)hasTimeSinceSleep;
-(unsigned long long)faceDetectEndTime;
-(unsigned long long)bioCheckEndTime;
-(int)bioCheckResult;
-(unsigned)bioCheckFrameCount;
-(unsigned)bioCheckFrameFloodCount;
-(unsigned)bioCheckFrameSparseCount;
-(unsigned)bioCheckFrameDenseCount;
-(unsigned long long)probingPatternEndTime;
-(int)probingPatternResult;
-(unsigned)probingPatternFrameCount;
-(unsigned)probingPatternFrameFloodCount;
-(unsigned)probingPatternFrameSparseCount;
-(unsigned)probingPatternFrameDenseCount;
-(BOOL)probingPatternFailure;
-(BOOL)matcherFailure;
-(BOOL)matchDepthFailure;
-(BOOL)matchFloodFailure;
-(BOOL)asFloodFailure;
-(BOOL)asDepthFailure;
-(BOOL)onlineTemplateUpdated;
-(BOOL)passcodeChallengeAllowed;
-(unsigned)faceDetectPPMRequestedBudget;
-(unsigned)faceDetectPPMAllocatedBudget;
-(unsigned)bioCheckPPMRequestedBudget;
-(unsigned)bioCheckPPMAllocatedBudget;
-(BOOL)bioLockout;
-(BOOL)matchForUnlock;
-(unsigned)failedUnlockAttemptsFromFD;
-(unsigned)failedUnlockAttemptsFromBiocheck;
-(unsigned)failedMatchAttemptsFromFD;
-(unsigned)failedMatchAttemptsFromBiocheck;
-(unsigned)matchFeatureVectorError;
-(int)onlineTemplateAge;
-(int)shortTermTemplateAge;
-(unsigned)faceDetectFaceDistance;
-(unsigned)faceDetectCamRectX;
-(unsigned)faceDetectCamRectY;
-(unsigned)faceDetectCamRectW;
-(unsigned)faceDetectCamRectH;
-(unsigned)bioCheckFaceDistance;
-(unsigned)bioCheckCamRectX;
-(unsigned)bioCheckCamRectY;
-(unsigned)bioCheckCamRectW;
-(unsigned)bioCheckCamRectH;
-(unsigned)probingPatternFaceDistance;
-(unsigned)probingPatternCamRectX;
-(unsigned)probingPatternCamRectY;
-(unsigned)probingPatternCamRectW;
-(unsigned)probingPatternCamRectH;
-(BOOL)asFailure;
-(BOOL)autoRetryAllowed;
-(NSString *)cameraHWParameters;
-(BOOL)combinedSequenceEnabled;
-(unsigned long long)overallTimeWithRetries;
-(BOOL)autoRetryEnabled;
-(BOOL)matchCancelled;
-(unsigned long long)timeSinceSleep;
@end

