/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTSpeechTranslationStreamingResponse.h>

@class FTSpeechTranslationPartialRecognitionResponse, FTSpeechTranslationFinalRecognitionResponse, FTAudioLimitExceeded, FTSpeechTranslationMtResponse, FTSpeechTranslationTextToSpeechResponse, FTFinalBlazarResponse, FTRecognitionProgress, FTRecognitionCandidate, FTRequestStatsResponse, FTServerEndpointFeatures, FTClientSetupInfo, FTSpeechTranslationServerEndpointFeatures;

@interface FTMutableSpeechTranslationStreamingResponse : FTSpeechTranslationStreamingResponse

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) FTSpeechTranslationPartialRecognitionResponse * contentAsFTSpeechTranslationPartialRecognitionResponse; 
@property (nonatomic,copy) FTSpeechTranslationFinalRecognitionResponse * contentAsFTSpeechTranslationFinalRecognitionResponse; 
@property (nonatomic,copy) FTAudioLimitExceeded * contentAsFTAudioLimitExceeded; 
@property (nonatomic,copy) FTSpeechTranslationMtResponse * contentAsFTSpeechTranslationMtResponse; 
@property (nonatomic,copy) FTSpeechTranslationTextToSpeechResponse * contentAsFTSpeechTranslationTextToSpeechResponse; 
@property (nonatomic,copy) FTFinalBlazarResponse * contentAsFTFinalBlazarResponse; 
@property (nonatomic,copy) FTRecognitionProgress * contentAsFTRecognitionProgress; 
@property (nonatomic,copy) FTRecognitionCandidate * contentAsFTRecognitionCandidate; 
@property (nonatomic,copy) FTRequestStatsResponse * contentAsFTRequestStatsResponse; 
@property (nonatomic,copy) FTServerEndpointFeatures * contentAsFTServerEndpointFeatures; 
@property (nonatomic,copy) FTClientSetupInfo * contentAsFTClientSetupInfo; 
@property (nonatomic,copy) FTSpeechTranslationServerEndpointFeatures * contentAsFTSpeechTranslationServerEndpointFeatures; 
-(id)init;
-(FTRecognitionProgress *)contentAsFTRecognitionProgress;
-(void)setContentAsFTRecognitionProgress:(FTRecognitionProgress *)arg1 ;
-(FTRecognitionCandidate *)contentAsFTRecognitionCandidate;
-(void)setContentAsFTRecognitionCandidate:(FTRecognitionCandidate *)arg1 ;
-(FTRequestStatsResponse *)contentAsFTRequestStatsResponse;
-(void)setContentAsFTRequestStatsResponse:(FTRequestStatsResponse *)arg1 ;
-(FTServerEndpointFeatures *)contentAsFTServerEndpointFeatures;
-(void)setContentAsFTServerEndpointFeatures:(FTServerEndpointFeatures *)arg1 ;
-(FTClientSetupInfo *)contentAsFTClientSetupInfo;
-(void)setContentAsFTClientSetupInfo:(FTClientSetupInfo *)arg1 ;
-(FTAudioLimitExceeded *)contentAsFTAudioLimitExceeded;
-(void)setContentAsFTAudioLimitExceeded:(FTAudioLimitExceeded *)arg1 ;
-(void)setContentAsFTFinalBlazarResponse:(FTFinalBlazarResponse *)arg1 ;
-(FTSpeechTranslationPartialRecognitionResponse *)contentAsFTSpeechTranslationPartialRecognitionResponse;
-(void)setContentAsFTSpeechTranslationPartialRecognitionResponse:(FTSpeechTranslationPartialRecognitionResponse *)arg1 ;
-(FTSpeechTranslationFinalRecognitionResponse *)contentAsFTSpeechTranslationFinalRecognitionResponse;
-(void)setContentAsFTSpeechTranslationFinalRecognitionResponse:(FTSpeechTranslationFinalRecognitionResponse *)arg1 ;
-(FTSpeechTranslationMtResponse *)contentAsFTSpeechTranslationMtResponse;
-(void)setContentAsFTSpeechTranslationMtResponse:(FTSpeechTranslationMtResponse *)arg1 ;
-(FTSpeechTranslationTextToSpeechResponse *)contentAsFTSpeechTranslationTextToSpeechResponse;
-(void)setContentAsFTSpeechTranslationTextToSpeechResponse:(FTSpeechTranslationTextToSpeechResponse *)arg1 ;
-(FTSpeechTranslationServerEndpointFeatures *)contentAsFTSpeechTranslationServerEndpointFeatures;
-(void)setContentAsFTSpeechTranslationServerEndpointFeatures:(FTSpeechTranslationServerEndpointFeatures *)arg1 ;
-(long long)content_type;
-(FTFinalBlazarResponse *)contentAsFTFinalBlazarResponse;
-(void)setContent_type:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

