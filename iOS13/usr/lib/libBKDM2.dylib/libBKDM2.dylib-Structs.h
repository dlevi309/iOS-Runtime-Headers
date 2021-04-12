/*
* Generated on Monday, March 1, 2021 at 2:36:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libBKDM2.dylib
*/

typedef struct {
	unsigned field1;
	unsigned char field2[16];
} SCD_Struct_Bi0;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned long long field4;
	unsigned char field5;
	unsigned char field6;
	unsigned char field7;
} SCD_Struct_Bi1;

typedef struct {
	unsigned long long field1;
	unsigned char field2;
} SCD_Struct_Bi2;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned char field3[32];
} SCD_Struct_Bi3;

typedef struct {
	unsigned long long field1;
	unsigned short field2;
	unsigned char field3;
} SCD_Struct_Bi4;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	SCD_Struct_Bi4 field3;
} SCD_Struct_Bi5;

typedef struct {
	unsigned short field1;
	unsigned short field2;
	unsigned field3;
	float field4;
	float field5;
	float field6;
} SCD_Struct_Bi6;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
} SCD_Struct_Bi7;

typedef struct {
	int field1;
	int field2;
	int field3;
} SCD_Struct_Bi8;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned timestamp : 1;
	unsigned bioLockoutReason : 1;
} SCD_Struct_AW10;

typedef struct {
	unsigned long long field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_Bi11;

typedef struct {
	unsigned short field1;
	unsigned char field2;
	char field3;
	unsigned short field4;
	unsigned short field5;
	unsigned short field6;
	unsigned short field7;
	unsigned field8;
	unsigned field9;
	unsigned field10;
} SCD_Struct_Bi12;

typedef struct {
	unsigned long long field1;
	unsigned short field2;
	unsigned short field3;
	unsigned short field4;
	unsigned char field5;
	unsigned char field6;
	SCD_Struct_Bi4 field7;
} SCD_Struct_Bi13;

typedef struct {
	SCD_Struct_Bi1 field1;
	3 field2;
	unsigned short field3;
	unsigned short field4;
	unsigned short field5;
	unsigned char field6;
	SCD_Struct_Bi1 field7;
	2 field8;
	unsigned char field9;
	unsigned short field10;
	unsigned short field11;
	unsigned short field12;
	unsigned short field13;
	unsigned short field14;
	unsigned char field15;
	unsigned char field16;
} SCD_Struct_Bi14;

typedef struct {
	unsigned overallTime : 1;
	unsigned timestamp : 1;
	unsigned ambientLux : 1;
	unsigned camRectH : 1;
	unsigned camRectW : 1;
	unsigned camRectX : 1;
	unsigned camRectY : 1;
	unsigned cameraErr : 1;
	unsigned deviceOrientation : 1;
	unsigned faceDetectFrameCount : 1;
	unsigned faceDetectFrameDenseCount : 1;
	unsigned faceDetectFrameFloodCount : 1;
	unsigned faceDetectFrameSparseCount : 1;
	unsigned faceDetectResult : 1;
	unsigned faceDistance : 1;
	unsigned faceOrientation : 1;
	unsigned facePitch : 1;
	unsigned faceRoll : 1;
	unsigned faceYaw : 1;
	unsigned ppmAllocatedBudget : 1;
	unsigned ppmRequestedBudget : 1;
	unsigned sensorTemperature : 1;
	unsigned attentionDetectFailed : 1;
	unsigned engagementInfoFeedbackCameraObstructed : 1;
	unsigned engagementInfoFeedbackFaceOccluded : 1;
	unsigned engagementInfoFeedbackFaceTooClose : 1;
	unsigned engagementInfoFeedbackFaceTooFar : 1;
	unsigned engagementInfoFeedbackNoAttention : 1;
	unsigned engagementInfoFeedbackNoFaceDetected : 1;
	unsigned engagementInfoFeedbackPartialOutOfFOV : 1;
	unsigned engagementInfoFeedbackPoseMarginal : 1;
	unsigned engagementInfoFeedbackPoseOutOfRange : 1;
	unsigned faceDetectFailed : 1;
	unsigned hasOcclusion : 1;
} SCD_Struct_AW15;

typedef struct {
	unsigned overallTime : 1;
	unsigned timestamp : 1;
	unsigned ambientLux : 1;
	unsigned attentionScore : 1;
	unsigned deviceOrientation : 1;
	unsigned faceDistance : 1;
	unsigned matchIdentityCount : 1;
	unsigned ppmAllocatedBudget : 1;
	unsigned ppmRequestedBudget : 1;
	unsigned sensorTemperature : 1;
	unsigned hasOcclusion : 1;
	unsigned passcodeChallengeResult : 1;
	unsigned passcodeChallengeTemplateUpdated : 1;
} SCD_Struct_AW16;

typedef struct {
	unsigned overallTime : 1;
	unsigned rfcFrameIndex : 1;
	unsigned rfcSetIndex : 1;
	unsigned timestamp : 1;
	unsigned ambientLux : 1;
	unsigned bioCaptureSequenceCount : 1;
	unsigned cameraErr : 1;
	unsigned deviceOrientation : 1;
	unsigned doubleErrorCountsBinCovered : 1;
	unsigned doubleErrorCountsFaceOutOfFOV : 1;
	unsigned doubleErrorCountsFaceTooClose : 1;
	unsigned doubleErrorCountsFaceTooFar : 1;
	unsigned doubleErrorCountsMoreFrames : 1;
	unsigned doubleErrorCountsMultipleFaces : 1;
	unsigned doubleErrorCountsNoFace : 1;
	unsigned doubleErrorCountsOK : 1;
	unsigned doubleErrorCountsOccluded : 1;
	unsigned doubleErrorCountsPoseOutRange : 1;
	unsigned enrollFeatureVectorError : 1;
	unsigned enrollResult : 1;
	unsigned enrolledIdentityCount : 1;
	unsigned faceDistance : 1;
	unsigned featureGenerationError : 1;
	unsigned frameCountBin00 : 1;
	unsigned frameCountBin01 : 1;
	unsigned frameCountBin02 : 1;
	unsigned frameCountBin10 : 1;
	unsigned frameCountBin11 : 1;
	unsigned frameCountBin12 : 1;
	unsigned frameCountBin20 : 1;
	unsigned frameCountBin21 : 1;
	unsigned frameCountBin22 : 1;
	unsigned frameErrorCountsBinCovered : 1;
	unsigned frameErrorCountsFaceOutOfFOV : 1;
	unsigned frameErrorCountsFaceTooClose : 1;
	unsigned frameErrorCountsFaceTooFar : 1;
	unsigned frameErrorCountsMoreFrames : 1;
	unsigned frameErrorCountsMultipleFaces : 1;
	unsigned frameErrorCountsNoFace : 1;
	unsigned frameErrorCountsOK : 1;
	unsigned frameErrorCountsOccluded : 1;
	unsigned frameErrorCountsPoseOutRange : 1;
	unsigned sensorTemperature : 1;
	unsigned failedNoFace : 1;
	unsigned overallResult : 1;
} SCD_Struct_AW17;

typedef struct {
	unsigned long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AW18;

typedef struct {
	unsigned bioCheckEndTime : 1;
	unsigned faceDetectEndTime : 1;
	unsigned overallTime : 1;
	unsigned overallTimeWithRetries : 1;
	unsigned probingPatternEndTime : 1;
	unsigned rfcFrameIndex : 1;
	unsigned rfcSetIndex : 1;
	unsigned timeSinceSleep : 1;
	unsigned timestamp : 1;
	unsigned ambientLux : 1;
	unsigned bioCheckCamRectH : 1;
	unsigned bioCheckCamRectW : 1;
	unsigned bioCheckCamRectX : 1;
	unsigned bioCheckCamRectY : 1;
	unsigned bioCheckFaceDistance : 1;
	unsigned bioCheckFrameCount : 1;
	unsigned bioCheckFrameDenseCount : 1;
	unsigned bioCheckFrameFloodCount : 1;
	unsigned bioCheckFrameSparseCount : 1;
	unsigned bioCheckPPMAllocatedBudget : 1;
	unsigned bioCheckPPMRequestedBudget : 1;
	unsigned bioCheckResult : 1;
	unsigned bioLockoutReason : 1;
	unsigned camRectH : 1;
	unsigned camRectW : 1;
	unsigned camRectX : 1;
	unsigned camRectY : 1;
	unsigned cameraErr : 1;
	unsigned captureMethod : 1;
	unsigned deviceOrientation : 1;
	unsigned faceDetectCamRectH : 1;
	unsigned faceDetectCamRectW : 1;
	unsigned faceDetectCamRectX : 1;
	unsigned faceDetectCamRectY : 1;
	unsigned faceDetectFaceDistance : 1;
	unsigned faceDetectFrameCount : 1;
	unsigned faceDetectFrameDenseCount : 1;
	unsigned faceDetectFrameFloodCount : 1;
	unsigned faceDetectFrameSparseCount : 1;
	unsigned faceDetectPPMAllocatedBudget : 1;
	unsigned faceDetectPPMRequestedBudget : 1;
	unsigned faceDetectResult : 1;
	unsigned faceDistance : 1;
	unsigned faceOrientation : 1;
	unsigned facePitch : 1;
	unsigned faceRoll : 1;
	unsigned faceYaw : 1;
	unsigned failedMatchAttemptsFromBiocheck : 1;
	unsigned failedMatchAttemptsFromFD : 1;
	unsigned failedUnlockAttemptsFromBiocheck : 1;
	unsigned failedUnlockAttemptsFromFD : 1;
	unsigned featureGenerationError : 1;
	unsigned matchFeatureVectorError : 1;
	unsigned matchIdentityCount : 1;
	unsigned onlineTemplateAge : 1;
	unsigned probingPatternCamRectH : 1;
	unsigned probingPatternCamRectW : 1;
	unsigned probingPatternCamRectX : 1;
	unsigned probingPatternCamRectY : 1;
	unsigned probingPatternFaceDistance : 1;
	unsigned probingPatternFrameCount : 1;
	unsigned probingPatternFrameDenseCount : 1;
	unsigned probingPatternFrameFloodCount : 1;
	unsigned probingPatternFrameSparseCount : 1;
	unsigned probingPatternResult : 1;
	unsigned sensorTemperature : 1;
	unsigned shortTermTemplateAge : 1;
	unsigned asDepthFailure : 1;
	unsigned asFailure : 1;
	unsigned asFloodFailure : 1;
	unsigned autoRetry : 1;
	unsigned autoRetryAllowed : 1;
	unsigned autoRetryEnabled : 1;
	unsigned bioLockout : 1;
	unsigned combinedSequenceEnabled : 1;
	unsigned engagementInfoFeedbackCameraObstructed : 1;
	unsigned engagementInfoFeedbackFaceOccluded : 1;
	unsigned engagementInfoFeedbackFaceTooClose : 1;
	unsigned engagementInfoFeedbackFaceTooFar : 1;
	unsigned engagementInfoFeedbackNoAttention : 1;
	unsigned engagementInfoFeedbackNoFaceDetected : 1;
	unsigned engagementInfoFeedbackPartialOutOfFOV : 1;
	unsigned engagementInfoFeedbackPoseMarginal : 1;
	unsigned engagementInfoFeedbackPoseOutOfRange : 1;
	unsigned hasOcclusion : 1;
	unsigned matchCancelled : 1;
	unsigned matchDepthFailure : 1;
	unsigned matchFloodFailure : 1;
	unsigned matchForUnlock : 1;
	unsigned matcherFailure : 1;
	unsigned onlineTemplateUpdated : 1;
	unsigned overallResult : 1;
	unsigned passcodeChallengeAllowed : 1;
	unsigned probingPatternFailure : 1;
} SCD_Struct_AW19;

typedef struct {
	unsigned list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AW20;

typedef struct {
	unsigned bioLockoutTime : 1;
	unsigned timestamp : 1;
	unsigned bioLockoutCount : 1;
	unsigned enrolledIdentityCount : 1;
	unsigned matchingCountDouble01 : 1;
	unsigned matchingCountDouble02 : 1;
	unsigned matchingCountDouble03 : 1;
	unsigned matchingCountDouble04 : 1;
	unsigned onlineUnlockCount : 1;
	unsigned shortTermUnlockCount : 1;
	unsigned staticUnlockCount : 1;
	unsigned totalMatchAttempts : 1;
	unsigned totalMatchAttemptsFaceDetected : 1;
	unsigned totalMatchAttemptsFailed : 1;
	unsigned totalMatchAttemptsSuccessful : 1;
	unsigned yogiErrorDays : 1;
	unsigned applePayEnabled : 1;
	unsigned attentionDetectionEnabled : 1;
	unsigned autoRetryEnabled : 1;
	unsigned cameraInterlock : 1;
	unsigned combinedSequenceEnabled : 1;
	unsigned unlockEnabled : 1;
} SCD_Struct_AW21;

