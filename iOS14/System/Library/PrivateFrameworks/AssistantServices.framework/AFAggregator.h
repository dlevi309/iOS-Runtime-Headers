/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@interface AFAggregator : NSObject {

	unsigned long long _type;
	double _startTime;
	BOOL _hasActiveRequest;
	BOOL _sessionIsRetrying;
	BOOL _retryPrefersWWAN;

}

@property (assign,nonatomic) unsigned long long connectionType;              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasActiveRequest;                          //@synthesize hasActiveRequest=_hasActiveRequest - In the implementation block
+(void)logLoadAssistant;
+(id)_fullAggDKeyWithPrefix:(id)arg1 error:(id)arg2 ;
+(BOOL)_timestamp:(id)arg1 isAfter:(id)arg2 ;
+(void)logSiriPausedMedia;
+(BOOL)_hadUserEventSinceIntervalAgo:(double)arg1 ;
+(void)logRequestCompletedWithDuration:(double)arg1 ;
+(void)missedAppContextForRequest;
+(void)missedAlertContextForRequest;
+(void)logRequestCancelAfterSeconds:(double)arg1 ;
+(void)logSiriQuickStopAction:(unsigned long long)arg1 ;
+(void)logSiriMediaVolumeAction:(long long)arg1 ;
+(void)logRequestLaunchedApp;
+(void)logUILockCanceledVTActivation;
+(void)logCreateAssistant;
+(void)logPingTimeout;
+(void)logEnabledState:(unsigned long long)arg1 ;
+(void)logLocalRecognitionAssetEvictedForLanguage:(id)arg1 ;
+(void)logLocalSpeechStartedWithDuration:(double)arg1 ;
+(void)logLocalFinalSpeechRecognitionWithDuration:(double)arg1 ;
+(void)noteSuccessOfRequest:(id)arg1 inCar:(BOOL)arg2 ;
+(void)logLocalRecognitionLoadedForLanguage:(id)arg1 duration:(double)arg2 ;
+(void)logLocalRecognitionWonForLanguage:(id)arg1 ;
+(void)logLocalRecognitionLostForLanguage:(id)arg1 ;
+(void)logDESRecordingForLanguage:(id)arg1 error:(id)arg2 ;
+(void)logDESEvaluationForLanguage:(id)arg1 error:(id)arg2 ;
+(void)logCDMAssetEvictedForAssetType:(id)arg1 language:(id)arg2 ;
+(void)noteConnectedToCarPlayHeadunit;
+(void)logPeriodicUsageIfNeeded;
+(id)_stringForGatekeeperType:(unsigned long long)arg1 ;
+(void)logTimeToBeepWithDuration:(double)arg1 ;
+(void)logHomeButtonPressToActivationDuration:(double)arg1 ;
+(void)logStarkGatekeeperDismissedManuallyForType:(unsigned long long)arg1 ;
+(void)logStarkGatekeeperAppearedForType:(unsigned long long)arg1 ;
+(void)logDictationFollowedByContinueOccurredForLanguage:(id)arg1 ;
+(void)logKeyboardInputFollowedByContinueOccurredForLanguage:(id)arg1 ;
+(void)logDictationFollowedByKeyboardInputOccurredForLanguage:(id)arg1 ;
+(void)logDictationFollowedByKeyboardDeleteOccurredForLanguage:(id)arg1 ;
+(void)logDictationStarted;
+(void)logDictationCancelled;
+(void)logDictationFailedWithError:(id)arg1 ;
+(void)logDictationSucceeded;
+(void)logSiriSpeechRequestStarted;
+(void)logSiriOtherRequestStarted;
+(void)logSiriRequestCancelled;
+(void)logSiriRequestFailedWithError:(id)arg1 ;
+(void)logSiriRequestSucceeded;
+(void)logSiriInvokedVia:(long long)arg1 ;
-(unsigned long long)connectionType;
-(void)recordFailure:(int)arg1 forConnectionType:(unsigned long long)arg2 ;
-(void)recordSuccessForConnectionType:(unsigned long long)arg1 isWarm:(BOOL)arg2 forTimeInterval:(double)arg3 ;
-(void)recordSessionRetrySuccess;
-(void)setConnectionType:(unsigned long long)arg1 ;
-(void)connectionDidFail;
-(void)connectionDidDrop;
-(void)beginSessionRetryPreferringWWAN:(BOOL)arg1 ;
-(void)startWaitingForSpeechResponse;
-(void)speechResponseReceived;
-(void)speechResponseFailure;
-(void)setHasActiveRequest:(BOOL)arg1 ;
-(BOOL)hasActiveRequest;
@end

