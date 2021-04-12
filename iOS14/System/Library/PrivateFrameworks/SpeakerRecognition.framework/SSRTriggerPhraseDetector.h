/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


@class SSRTriggerPhraseDetectorNDAPI, SSRTriggerPhraseDetectorQuasar;

@interface SSRTriggerPhraseDetector : NSObject {

	float _recognizerScoreScaleFactor;
	SSRTriggerPhraseDetectorNDAPI* _detectorNDAPI;
	SSRTriggerPhraseDetectorQuasar* _detectorQuasar;

}

@property (nonatomic,retain) SSRTriggerPhraseDetectorNDAPI * detectorNDAPI;                //@synthesize detectorNDAPI=_detectorNDAPI - In the implementation block
@property (nonatomic,retain) SSRTriggerPhraseDetectorQuasar * detectorQuasar;              //@synthesize detectorQuasar=_detectorQuasar - In the implementation block
@property (assign,nonatomic) float recognizerScoreScaleFactor;                             //@synthesize recognizerScoreScaleFactor=_recognizerScoreScaleFactor - In the implementation block
+(id)filterVTAudioFiles:(id)arg1 withLocale:(id)arg2 withAsset:(id)arg3 ;
-(float)recognizerScoreScaleFactor;
-(void)setRecognizerScoreScaleFactor:(float)arg1 ;
-(id)initWithLocale:(id)arg1 asset:(id)arg2 ;
-(void)computeTriggerConfidenceForAudio:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(SSRTriggerPhraseDetectorNDAPI *)detectorNDAPI;
-(void)setDetectorNDAPI:(SSRTriggerPhraseDetectorNDAPI *)arg1 ;
-(SSRTriggerPhraseDetectorQuasar *)detectorQuasar;
-(void)setDetectorQuasar:(SSRTriggerPhraseDetectorQuasar *)arg1 ;
@end

