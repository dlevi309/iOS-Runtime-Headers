/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/

@class NSURL;


@protocol SSRVoiceProfileRetrainer <NSObject>
@property (nonatomic,readonly) NSURL * modelFilePath; 
@property (nonatomic,readonly) BOOL implicitTrainingRequired; 
@property (nonatomic,readonly) unsigned long long retrainerType; 
@required
-(NSURL *)modelFilePath;
-(id)initWithVoiceRetrainingContext:(id)arg1;
-(BOOL)resetModelForRetraining;
-(void)addUtterances:(id)arg1 withPolicy:(/*^block*/id)arg2 withCompletion:(/*^block*/id)arg3;
-(BOOL)needsRetrainingWithAudioFiles:(id)arg1;
-(void)purgeLastSpeakerEmbedding;
-(id)purgeConfusionInformationWithPolicy:(/*^block*/id)arg1;
-(BOOL)implicitTrainingRequired;
-(unsigned long long)retrainerType;

@end

