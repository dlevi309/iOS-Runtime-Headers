/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, FTSpeechTranslationPartialRecognitionResponse, FTSpeechTranslationFinalRecognitionResponse, FTAudioLimitExceeded, FTSpeechTranslationMtResponse, FTSpeechTranslationTextToSpeechResponse, FTFinalBlazarResponse, FTRecognitionProgress, FTRecognitionCandidate, FTRequestStatsResponse, FTServerEndpointFeatures, FTClientSetupInfo, FTSpeechTranslationServerEndpointFeatures;

@interface FTSpeechTranslationStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const SpeechTranslationStreamingResponse* _root;

}

@property (nonatomic,readonly) long long content_type; 
@property (nonatomic,readonly) FTSpeechTranslationPartialRecognitionResponse * contentAsFTSpeechTranslationPartialRecognitionResponse; 
@property (nonatomic,readonly) FTSpeechTranslationFinalRecognitionResponse * contentAsFTSpeechTranslationFinalRecognitionResponse; 
@property (nonatomic,readonly) FTAudioLimitExceeded * contentAsFTAudioLimitExceeded; 
@property (nonatomic,readonly) FTSpeechTranslationMtResponse * contentAsFTSpeechTranslationMtResponse; 
@property (nonatomic,readonly) FTSpeechTranslationTextToSpeechResponse * contentAsFTSpeechTranslationTextToSpeechResponse; 
@property (nonatomic,readonly) FTFinalBlazarResponse * contentAsFTFinalBlazarResponse; 
@property (nonatomic,readonly) FTRecognitionProgress * contentAsFTRecognitionProgress; 
@property (nonatomic,readonly) FTRecognitionCandidate * contentAsFTRecognitionCandidate; 
@property (nonatomic,readonly) FTRequestStatsResponse * contentAsFTRequestStatsResponse; 
@property (nonatomic,readonly) FTServerEndpointFeatures * contentAsFTServerEndpointFeatures; 
@property (nonatomic,readonly) FTClientSetupInfo * contentAsFTClientSetupInfo; 
@property (nonatomic,readonly) FTSpeechTranslationServerEndpointFeatures * contentAsFTSpeechTranslationServerEndpointFeatures; 
-(FTRecognitionProgress *)contentAsFTRecognitionProgress;
-(FTRecognitionCandidate *)contentAsFTRecognitionCandidate;
-(FTRequestStatsResponse *)contentAsFTRequestStatsResponse;
-(FTServerEndpointFeatures *)contentAsFTServerEndpointFeatures;
-(FTClientSetupInfo *)contentAsFTClientSetupInfo;
-(FTAudioLimitExceeded *)contentAsFTAudioLimitExceeded;
-(FTSpeechTranslationPartialRecognitionResponse *)contentAsFTSpeechTranslationPartialRecognitionResponse;
-(FTSpeechTranslationFinalRecognitionResponse *)contentAsFTSpeechTranslationFinalRecognitionResponse;
-(FTSpeechTranslationMtResponse *)contentAsFTSpeechTranslationMtResponse;
-(FTSpeechTranslationTextToSpeechResponse *)contentAsFTSpeechTranslationTextToSpeechResponse;
-(FTSpeechTranslationServerEndpointFeatures *)contentAsFTSpeechTranslationServerEndpointFeatures;
-(long long)content_type;
-(FTFinalBlazarResponse *)contentAsFTFinalBlazarResponse;
-(id)initWithFlatbuffData:(id)arg1 root:(const SpeechTranslationStreamingResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::qss_fb::SpeechTranslationStreamingResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const SpeechTranslationStreamingResponse*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

