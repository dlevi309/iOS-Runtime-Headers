/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSSpIdSpeakerVectorGeneratorDelegate.h>

@protocol OS_dispatch_queue;
@class CSSpIdSpeakerVectorGenerator, CSSpIdSATAnalyzer, CSDispatchGroup, NSData, CSUserVoiceProfile, NSString, CSAsset, NSObject, NSError;

@interface CSVoiceProfileTrainer : NSObject <CSSpIdSpeakerVectorGeneratorDelegate> {

	float _tdsrScore;
	float _satScore;
	float _bestTriggerScore;
	BOOL _tdsrTimedout;
	float _voiceTriggerThreshold;
	float _satThreshold;
	float _satTDSRThreshold;
	float _satVTImplicitThreshold;
	unsigned long long _baseProfileConfidenceScoreThreshold;
	unsigned long long _implicitConfidenceScoreThreshold;
	unsigned long long _implicitDeltaConfidenceScoreThreshold;
	unsigned long long _maxNumberOfBaseProfileUtterances;
	CSSpIdSpeakerVectorGenerator* _speakerVectorGenerator;
	unsigned long long _currUttLengthInMs;
	CSSpIdSATAnalyzer* _satAnalyzer;
	CSSpIdSATAnalyzer* _tdsrAnalyzer;
	CSDispatchGroup* _spIdDispatchGroup;
	unsigned long long _spIdType;
	NSData* _speakerVector;
	unsigned long long _speakerVectorSize;
	CSUserVoiceProfile* _profile;
	NSString* _locale;
	CSAsset* _asset;
	unsigned long long _satRunMode;
	NSObject*<OS_dispatch_queue> _queue;
	NSError* _tdsrError;

}

@property (nonatomic,retain) CSSpIdSpeakerVectorGenerator * speakerVectorGenerator;                   //@synthesize speakerVectorGenerator=_speakerVectorGenerator - In the implementation block
@property (assign,nonatomic) unsigned long long currUttLengthInMs;                                    //@synthesize currUttLengthInMs=_currUttLengthInMs - In the implementation block
@property (nonatomic,retain) CSSpIdSATAnalyzer * satAnalyzer;                                         //@synthesize satAnalyzer=_satAnalyzer - In the implementation block
@property (nonatomic,retain) CSSpIdSATAnalyzer * tdsrAnalyzer;                                        //@synthesize tdsrAnalyzer=_tdsrAnalyzer - In the implementation block
@property (nonatomic,retain) CSDispatchGroup * spIdDispatchGroup;                                     //@synthesize spIdDispatchGroup=_spIdDispatchGroup - In the implementation block
@property (assign,nonatomic) unsigned long long spIdType;                                             //@synthesize spIdType=_spIdType - In the implementation block
@property (nonatomic,retain) NSData * speakerVector;                                                  //@synthesize speakerVector=_speakerVector - In the implementation block
@property (assign,nonatomic) unsigned long long speakerVectorSize;                                    //@synthesize speakerVectorSize=_speakerVectorSize - In the implementation block
@property (nonatomic,retain) CSUserVoiceProfile * profile;                                            //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSString * locale;                                                       //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) CSAsset * asset;                                                         //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) unsigned long long satRunMode;                                           //@synthesize satRunMode=_satRunMode - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSError * tdsrError;                                                     //@synthesize tdsrError=_tdsrError - In the implementation block
@property (nonatomic,readonly) unsigned long long baseProfileConfidenceScoreThreshold;                //@synthesize baseProfileConfidenceScoreThreshold=_baseProfileConfidenceScoreThreshold - In the implementation block
@property (nonatomic,readonly) unsigned long long implicitConfidenceScoreThreshold;                   //@synthesize implicitConfidenceScoreThreshold=_implicitConfidenceScoreThreshold - In the implementation block
@property (nonatomic,readonly) unsigned long long implicitDeltaConfidenceScoreThreshold;              //@synthesize implicitDeltaConfidenceScoreThreshold=_implicitDeltaConfidenceScoreThreshold - In the implementation block
@property (nonatomic,readonly) unsigned long long maxNumberOfBaseProfileUtterances;                   //@synthesize maxNumberOfBaseProfileUtterances=_maxNumberOfBaseProfileUtterances - In the implementation block
@property (nonatomic,readonly) float satVTImplicitThreshold;                                          //@synthesize satVTImplicitThreshold=_satVTImplicitThreshold - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(CSUserVoiceProfile *)profile;
-(void)setProfile:(CSUserVoiceProfile *)arg1 ;
-(CSAsset *)asset;
-(void)setAsset:(CSAsset *)arg1 ;
-(CSSpIdSpeakerVectorGenerator *)speakerVectorGenerator;
-(void)setSpeakerVectorGenerator:(CSSpIdSpeakerVectorGenerator *)arg1 ;
-(NSData *)speakerVector;
-(void)setSpeakerVector:(NSData *)arg1 ;
-(id)initWithVoiceProfile:(id)arg1 spIdType:(unsigned long long)arg2 satRunMode:(unsigned long long)arg3 languageCode:(id)arg4 asset:(id)arg5 ;
-(unsigned long long)maxNumberOfBaseProfileUtterances;
-(BOOL)checkIfImplicitTrainingRequired;
-(unsigned long long)baseProfileConfidenceScoreThreshold;
-(unsigned long long)implicitConfidenceScoreThreshold;
-(unsigned long long)implicitDeltaConfidenceScoreThreshold;
-(BOOL)checkIfImplicitSATPossibleWithBaseProfileVectorCount:(unsigned long long)arg1 ;
-(BOOL)checkIfProfileNeedsUploadForBaseProfileVectorCount:(unsigned long long)arg1 ;
-(void)processUtterance:(id)arg1 ofSpIdType:(unsigned long long)arg2 withUpdatePolicyBlock:(/*^block*/id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(BOOL)checkIfRetrainingIsRequired;
-(BOOL)checkIfUpdateNecessaryForAudioFileCount:(unsigned long long)arg1 ;
-(void)addUtterances:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)speakerVectorGenerator:(id)arg1 finishedWithFinalSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4 ;
-(unsigned long long)spIdType;
-(void)setSpIdType:(unsigned long long)arg1 ;
-(id)_createSatAnalyzerForProfile:(id)arg1 locale:(id)arg2 spidType:(unsigned long long)arg3 modelType:(unsigned long long)arg4 asset:(id)arg5 runMode:(unsigned long long)arg6 ;
-(float)satVTImplicitThreshold;
-(void)_processAudioFile:(id)arg1 ofSpIdType:(unsigned long long)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(id)_processAudioFile:(id)arg1 ofSpIdType:(unsigned long long)arg2 ;
-(void)_processScoresWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)currUttLengthInMs;
-(void)setCurrUttLengthInMs:(unsigned long long)arg1 ;
-(CSSpIdSATAnalyzer *)satAnalyzer;
-(void)setSatAnalyzer:(CSSpIdSATAnalyzer *)arg1 ;
-(CSSpIdSATAnalyzer *)tdsrAnalyzer;
-(void)setTdsrAnalyzer:(CSSpIdSATAnalyzer *)arg1 ;
-(CSDispatchGroup *)spIdDispatchGroup;
-(void)setSpIdDispatchGroup:(CSDispatchGroup *)arg1 ;
-(unsigned long long)speakerVectorSize;
-(void)setSpeakerVectorSize:(unsigned long long)arg1 ;
-(unsigned long long)satRunMode;
-(void)setSatRunMode:(unsigned long long)arg1 ;
-(NSError *)tdsrError;
-(void)setTdsrError:(NSError *)arg1 ;
@end

