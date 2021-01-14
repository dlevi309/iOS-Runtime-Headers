/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <libobjc.A.dylib/VTTextDependentSpeakerRecognizerDelegate.h>

@protocol OS_dispatch_semaphore;
@class VTAnalyzerNDAPI, NSString, VTTextDependentSpeakerRecognizer, NSObject;

@interface VTVoiceProfileRetrainer : NSObject <VTTextDependentSpeakerRecognizerDelegate> {

	double _retrainThresholdTrigger;
	double _retrainExplicitUttThresholdSAT;
	double _retrainExplicitUttThresholdTDSR;
	double _retrainThresholdSAT;
	double _retrainThresholdTDSR;
	double _retrainTDSRScore;
	unsigned long long _numRetentionUtterances;
	VTAnalyzerNDAPI* _analyzer;
	NSString* _languageCode;
	unsigned long long _modelType;
	NSString* _configPath;
	NSString* _resourcePath;
	VTTextDependentSpeakerRecognizer* _satRetrainingTdSr;
	NSObject*<OS_dispatch_semaphore> _satRetrainingTdSrSemaphore;

}

@property (nonatomic,retain) VTAnalyzerNDAPI * analyzer;                                               //@synthesize analyzer=_analyzer - In the implementation block
@property (nonatomic,retain) NSString * languageCode;                                                  //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) unsigned long long modelType;                                             //@synthesize modelType=_modelType - In the implementation block
@property (nonatomic,retain) NSString * configPath;                                                    //@synthesize configPath=_configPath - In the implementation block
@property (nonatomic,retain) NSString * resourcePath;                                                  //@synthesize resourcePath=_resourcePath - In the implementation block
@property (nonatomic,retain) VTTextDependentSpeakerRecognizer * satRetrainingTdSr;                     //@synthesize satRetrainingTdSr=_satRetrainingTdSr - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> satRetrainingTdSrSemaphore;              //@synthesize satRetrainingTdSrSemaphore=_satRetrainingTdSrSemaphore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)modelType;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)resourcePath;
-(void)setAnalyzer:(VTAnalyzerNDAPI *)arg1 ;
-(VTAnalyzerNDAPI *)analyzer;
-(void)textDependentSpeakerRecognizer:(id)arg1 hasSatScore:(float)arg2 ;
-(NSString *)languageCode;
-(void)setResourcePath:(NSString *)arg1 ;
-(void)setModelType:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)textDependentSpeakerRecognizer:(id)arg1 failedWithError:(id)arg2 ;
-(unsigned long long)_deleteUtterances:(id)arg1 ;
-(id)_analyzeEnrollmentUtts:(id)arg1 thresholdTrigger:(double)arg2 thresholdSAT:(double)arg3 thresholdTDSR:(double)arg4 isUpdatingModel:(BOOL)arg5 extraUtts:(id*)arg6 discardUtts:(id*)arg7 psrTimeout:(BOOL*)arg8 ;
-(id)_getLastPruningCookie;
-(BOOL)_updatePruningCookie:(id)arg1 ;
-(double)_computeSamplingMSEForUtts:(id)arg1 withBeforeScores:(id)arg2 ;
-(id)initWithAnalyzer:(id)arg1 languageCode:(id)arg2 modelType:(unsigned long long)arg3 configPath:(id)arg4 resourcePath:(id)arg5 ;
-(void)retrainSATModelWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)pruneVoiceProfileIfNecessary;
-(NSString *)configPath;
-(void)setConfigPath:(NSString *)arg1 ;
-(VTTextDependentSpeakerRecognizer *)satRetrainingTdSr;
-(void)setSatRetrainingTdSr:(VTTextDependentSpeakerRecognizer *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)satRetrainingTdSrSemaphore;
-(void)setSatRetrainingTdSrSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

