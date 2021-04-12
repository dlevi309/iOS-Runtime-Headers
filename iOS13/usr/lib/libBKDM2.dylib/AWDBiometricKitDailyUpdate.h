/*
* Generated on Monday, March 1, 2021 at 2:36:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libBKDM2.dylib
*/

#import <libBKDM2.dylib/libBKDM2.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDBiometricKitDailyUpdate : PBCodable <NSCopying> {

	SCD_Struct_AW20* _baseTemplateFeatureCounts;
	SCD_Struct_AW20* _bioCheckInfos;
	SCD_Struct_AW20* _bioCheckResults;
	SCD_Struct_AW20* _matchingBinCounts;
	SCD_Struct_AW20* _matchingIdentityCounts;
	SCD_Struct_AW20* _matchingTemplateTypeCounts;
	SCD_Struct_AW20* _onlineUpdateTemplateFeatureCounts;
	SCD_Struct_AW20* _passcodeUpdateTemplateFeatureCounts;
	SCD_Struct_AW20* _passcodeUpdates;
	unsigned long long _bioLockoutTime;
	unsigned long long _timestamp;
	unsigned _bioLockoutCount;
	unsigned _enrolledIdentityCount;
	unsigned _matchingCountDouble01;
	unsigned _matchingCountDouble02;
	unsigned _matchingCountDouble03;
	unsigned _matchingCountDouble04;
	unsigned _onlineUnlockCount;
	unsigned _shortTermUnlockCount;
	unsigned _staticUnlockCount;
	unsigned _totalMatchAttempts;
	unsigned _totalMatchAttemptsFaceDetected;
	unsigned _totalMatchAttemptsFailed;
	unsigned _totalMatchAttemptsSuccessful;
	unsigned _yogiErrorDays;
	BOOL _applePayEnabled;
	BOOL _attentionDetectionEnabled;
	BOOL _autoRetryEnabled;
	BOOL _cameraInterlock;
	BOOL _combinedSequenceEnabled;
	BOOL _unlockEnabled;
	SCD_Struct_AW21 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long baseTemplateFeatureCountsCount; 
@property (nonatomic,readonly) unsigned* baseTemplateFeatureCounts; 
@property (nonatomic,readonly) unsigned long long onlineUpdateTemplateFeatureCountsCount; 
@property (nonatomic,readonly) unsigned* onlineUpdateTemplateFeatureCounts; 
@property (nonatomic,readonly) unsigned long long passcodeUpdateTemplateFeatureCountsCount; 
@property (nonatomic,readonly) unsigned* passcodeUpdateTemplateFeatureCounts; 
@property (assign,nonatomic) BOOL hasUnlockEnabled; 
@property (assign,nonatomic) BOOL unlockEnabled;                                                         //@synthesize unlockEnabled=_unlockEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasApplePayEnabled; 
@property (assign,nonatomic) BOOL applePayEnabled;                                                       //@synthesize applePayEnabled=_applePayEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasAttentionDetectionEnabled; 
@property (assign,nonatomic) BOOL attentionDetectionEnabled;                                             //@synthesize attentionDetectionEnabled=_attentionDetectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasMatchingCountDouble01; 
@property (assign,nonatomic) unsigned matchingCountDouble01;                                             //@synthesize matchingCountDouble01=_matchingCountDouble01 - In the implementation block
@property (assign,nonatomic) BOOL hasMatchingCountDouble02; 
@property (assign,nonatomic) unsigned matchingCountDouble02;                                             //@synthesize matchingCountDouble02=_matchingCountDouble02 - In the implementation block
@property (assign,nonatomic) BOOL hasMatchingCountDouble03; 
@property (assign,nonatomic) unsigned matchingCountDouble03;                                             //@synthesize matchingCountDouble03=_matchingCountDouble03 - In the implementation block
@property (assign,nonatomic) BOOL hasMatchingCountDouble04; 
@property (assign,nonatomic) unsigned matchingCountDouble04;                                             //@synthesize matchingCountDouble04=_matchingCountDouble04 - In the implementation block
@property (assign,nonatomic) BOOL hasStaticUnlockCount; 
@property (assign,nonatomic) unsigned staticUnlockCount;                                                 //@synthesize staticUnlockCount=_staticUnlockCount - In the implementation block
@property (assign,nonatomic) BOOL hasOnlineUnlockCount; 
@property (assign,nonatomic) unsigned onlineUnlockCount;                                                 //@synthesize onlineUnlockCount=_onlineUnlockCount - In the implementation block
@property (assign,nonatomic) BOOL hasShortTermUnlockCount; 
@property (assign,nonatomic) unsigned shortTermUnlockCount;                                              //@synthesize shortTermUnlockCount=_shortTermUnlockCount - In the implementation block
@property (nonatomic,readonly) unsigned long long matchingBinCountsCount; 
@property (nonatomic,readonly) unsigned* matchingBinCounts; 
@property (nonatomic,readonly) unsigned long long matchingTemplateTypeCountsCount; 
@property (nonatomic,readonly) unsigned* matchingTemplateTypeCounts; 
@property (assign,nonatomic) BOOL hasCameraInterlock; 
@property (assign,nonatomic) BOOL cameraInterlock;                                                       //@synthesize cameraInterlock=_cameraInterlock - In the implementation block
@property (nonatomic,readonly) unsigned long long bioCheckInfosCount; 
@property (nonatomic,readonly) unsigned* bioCheckInfos; 
@property (nonatomic,readonly) unsigned long long bioCheckResultsCount; 
@property (nonatomic,readonly) unsigned* bioCheckResults; 
@property (nonatomic,readonly) unsigned long long passcodeUpdatesCount; 
@property (nonatomic,readonly) unsigned* passcodeUpdates; 
@property (assign,nonatomic) BOOL hasEnrolledIdentityCount; 
@property (assign,nonatomic) unsigned enrolledIdentityCount;                                             //@synthesize enrolledIdentityCount=_enrolledIdentityCount - In the implementation block
@property (nonatomic,readonly) unsigned long long matchingIdentityCountsCount; 
@property (nonatomic,readonly) unsigned* matchingIdentityCounts; 
@property (assign,nonatomic) BOOL hasCombinedSequenceEnabled; 
@property (assign,nonatomic) BOOL combinedSequenceEnabled;                                               //@synthesize combinedSequenceEnabled=_combinedSequenceEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasBioLockoutTime; 
@property (assign,nonatomic) unsigned long long bioLockoutTime;                                          //@synthesize bioLockoutTime=_bioLockoutTime - In the implementation block
@property (assign,nonatomic) BOOL hasBioLockoutCount; 
@property (assign,nonatomic) unsigned bioLockoutCount;                                                   //@synthesize bioLockoutCount=_bioLockoutCount - In the implementation block
@property (assign,nonatomic) BOOL hasAutoRetryEnabled; 
@property (assign,nonatomic) BOOL autoRetryEnabled;                                                      //@synthesize autoRetryEnabled=_autoRetryEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasYogiErrorDays; 
@property (assign,nonatomic) unsigned yogiErrorDays;                                                     //@synthesize yogiErrorDays=_yogiErrorDays - In the implementation block
@property (assign,nonatomic) BOOL hasTotalMatchAttempts; 
@property (assign,nonatomic) unsigned totalMatchAttempts;                                                //@synthesize totalMatchAttempts=_totalMatchAttempts - In the implementation block
@property (assign,nonatomic) BOOL hasTotalMatchAttemptsSuccessful; 
@property (assign,nonatomic) unsigned totalMatchAttemptsSuccessful;                                      //@synthesize totalMatchAttemptsSuccessful=_totalMatchAttemptsSuccessful - In the implementation block
@property (assign,nonatomic) BOOL hasTotalMatchAttemptsFailed; 
@property (assign,nonatomic) unsigned totalMatchAttemptsFailed;                                          //@synthesize totalMatchAttemptsFailed=_totalMatchAttemptsFailed - In the implementation block
@property (assign,nonatomic) BOOL hasTotalMatchAttemptsFaceDetected; 
@property (assign,nonatomic) unsigned totalMatchAttemptsFaceDetected;                                    //@synthesize totalMatchAttemptsFaceDetected=_totalMatchAttemptsFaceDetected - In the implementation block
-(void)dealloc;
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
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)unlockEnabled;
-(void)setUnlockEnabled:(BOOL)arg1 ;
-(BOOL)applePayEnabled;
-(void)setApplePayEnabled:(BOOL)arg1 ;
-(BOOL)attentionDetectionEnabled;
-(void)setAttentionDetectionEnabled:(BOOL)arg1 ;
-(void)setCombinedSequenceEnabled:(BOOL)arg1 ;
-(void)setAutoRetryEnabled:(BOOL)arg1 ;
-(void)setEnrolledIdentityCount:(unsigned)arg1 ;
-(void)addBaseTemplateFeatureCount:(unsigned)arg1 ;
-(void)addOnlineUpdateTemplateFeatureCount:(unsigned)arg1 ;
-(void)addPasscodeUpdateTemplateFeatureCount:(unsigned)arg1 ;
-(void)addMatchingIdentityCounts:(unsigned)arg1 ;
-(void)setCameraInterlock:(BOOL)arg1 ;
-(void)setMatchingCountDouble01:(unsigned)arg1 ;
-(void)setMatchingCountDouble02:(unsigned)arg1 ;
-(void)setMatchingCountDouble03:(unsigned)arg1 ;
-(void)setMatchingCountDouble04:(unsigned)arg1 ;
-(void)setStaticUnlockCount:(unsigned)arg1 ;
-(void)setOnlineUnlockCount:(unsigned)arg1 ;
-(void)setShortTermUnlockCount:(unsigned)arg1 ;
-(void)addMatchingTemplateTypeCounts:(unsigned)arg1 ;
-(void)addMatchingBinCounts:(unsigned)arg1 ;
-(void)addBioCheckInfo:(unsigned)arg1 ;
-(void)addBioCheckResult:(unsigned)arg1 ;
-(void)addPasscodeUpdate:(unsigned)arg1 ;
-(void)setBioLockoutTime:(unsigned long long)arg1 ;
-(void)setBioLockoutCount:(unsigned)arg1 ;
-(void)setYogiErrorDays:(unsigned)arg1 ;
-(void)setTotalMatchAttempts:(unsigned)arg1 ;
-(void)setTotalMatchAttemptsFailed:(unsigned)arg1 ;
-(void)setTotalMatchAttemptsSuccessful:(unsigned)arg1 ;
-(void)setTotalMatchAttemptsFaceDetected:(unsigned)arg1 ;
-(void)setHasEnrolledIdentityCount:(BOOL)arg1 ;
-(BOOL)hasEnrolledIdentityCount;
-(unsigned)enrolledIdentityCount;
-(void)setHasCombinedSequenceEnabled:(BOOL)arg1 ;
-(BOOL)hasCombinedSequenceEnabled;
-(void)setHasAutoRetryEnabled:(BOOL)arg1 ;
-(BOOL)hasAutoRetryEnabled;
-(BOOL)combinedSequenceEnabled;
-(BOOL)autoRetryEnabled;
-(unsigned long long)baseTemplateFeatureCountsCount;
-(void)clearBaseTemplateFeatureCounts;
-(unsigned)baseTemplateFeatureCountAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)onlineUpdateTemplateFeatureCountsCount;
-(void)clearOnlineUpdateTemplateFeatureCounts;
-(unsigned)onlineUpdateTemplateFeatureCountAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)passcodeUpdateTemplateFeatureCountsCount;
-(void)clearPasscodeUpdateTemplateFeatureCounts;
-(unsigned)passcodeUpdateTemplateFeatureCountAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)matchingBinCountsCount;
-(void)clearMatchingBinCounts;
-(unsigned)matchingBinCountsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)matchingTemplateTypeCountsCount;
-(void)clearMatchingTemplateTypeCounts;
-(unsigned)matchingTemplateTypeCountsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)bioCheckInfosCount;
-(void)clearBioCheckInfos;
-(unsigned)bioCheckInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)bioCheckResultsCount;
-(void)clearBioCheckResults;
-(unsigned)bioCheckResultAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)passcodeUpdatesCount;
-(void)clearPasscodeUpdates;
-(unsigned)passcodeUpdateAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)matchingIdentityCountsCount;
-(void)clearMatchingIdentityCounts;
-(unsigned)matchingIdentityCountsAtIndex:(unsigned long long)arg1 ;
-(unsigned*)baseTemplateFeatureCounts;
-(void)setBaseTemplateFeatureCounts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)onlineUpdateTemplateFeatureCounts;
-(void)setOnlineUpdateTemplateFeatureCounts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)passcodeUpdateTemplateFeatureCounts;
-(void)setPasscodeUpdateTemplateFeatureCounts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasUnlockEnabled:(BOOL)arg1 ;
-(BOOL)hasUnlockEnabled;
-(void)setHasApplePayEnabled:(BOOL)arg1 ;
-(BOOL)hasApplePayEnabled;
-(void)setHasAttentionDetectionEnabled:(BOOL)arg1 ;
-(BOOL)hasAttentionDetectionEnabled;
-(void)setHasMatchingCountDouble01:(BOOL)arg1 ;
-(BOOL)hasMatchingCountDouble01;
-(void)setHasMatchingCountDouble02:(BOOL)arg1 ;
-(BOOL)hasMatchingCountDouble02;
-(void)setHasMatchingCountDouble03:(BOOL)arg1 ;
-(BOOL)hasMatchingCountDouble03;
-(void)setHasMatchingCountDouble04:(BOOL)arg1 ;
-(BOOL)hasMatchingCountDouble04;
-(void)setHasStaticUnlockCount:(BOOL)arg1 ;
-(BOOL)hasStaticUnlockCount;
-(void)setHasOnlineUnlockCount:(BOOL)arg1 ;
-(BOOL)hasOnlineUnlockCount;
-(void)setHasShortTermUnlockCount:(BOOL)arg1 ;
-(BOOL)hasShortTermUnlockCount;
-(unsigned*)matchingBinCounts;
-(void)setMatchingBinCounts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)matchingTemplateTypeCounts;
-(void)setMatchingTemplateTypeCounts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasCameraInterlock:(BOOL)arg1 ;
-(BOOL)hasCameraInterlock;
-(unsigned*)bioCheckInfos;
-(void)setBioCheckInfos:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)bioCheckResults;
-(void)setBioCheckResults:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)passcodeUpdates;
-(void)setPasscodeUpdates:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)matchingIdentityCounts;
-(void)setMatchingIdentityCounts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasBioLockoutTime:(BOOL)arg1 ;
-(BOOL)hasBioLockoutTime;
-(void)setHasBioLockoutCount:(BOOL)arg1 ;
-(BOOL)hasBioLockoutCount;
-(void)setHasYogiErrorDays:(BOOL)arg1 ;
-(BOOL)hasYogiErrorDays;
-(void)setHasTotalMatchAttempts:(BOOL)arg1 ;
-(BOOL)hasTotalMatchAttempts;
-(void)setHasTotalMatchAttemptsSuccessful:(BOOL)arg1 ;
-(BOOL)hasTotalMatchAttemptsSuccessful;
-(void)setHasTotalMatchAttemptsFailed:(BOOL)arg1 ;
-(BOOL)hasTotalMatchAttemptsFailed;
-(void)setHasTotalMatchAttemptsFaceDetected:(BOOL)arg1 ;
-(BOOL)hasTotalMatchAttemptsFaceDetected;
-(unsigned)matchingCountDouble01;
-(unsigned)matchingCountDouble02;
-(unsigned)matchingCountDouble03;
-(unsigned)matchingCountDouble04;
-(unsigned)staticUnlockCount;
-(unsigned)onlineUnlockCount;
-(unsigned)shortTermUnlockCount;
-(BOOL)cameraInterlock;
-(unsigned long long)bioLockoutTime;
-(unsigned)bioLockoutCount;
-(unsigned)yogiErrorDays;
-(unsigned)totalMatchAttempts;
-(unsigned)totalMatchAttemptsSuccessful;
-(unsigned)totalMatchAttemptsFailed;
-(unsigned)totalMatchAttemptsFaceDetected;
@end

