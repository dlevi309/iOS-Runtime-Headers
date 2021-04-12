/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, FTFinalSpeechRecognitionResponse, FTPartialSpeechRecognitionResponse, FTUpdatedAcousticProfile, FTEndPointLikelihood, FTEndPointCandidate, FTRecognitionProgress, FTCheckForSpeechResponse, FTRecognitionCandidate, FTRequestStatsResponse, FTServerEndpointFeatures, FTClientSetupInfo, FTAudioLimitExceeded;

@interface FTRecognitionStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const RecognitionStreamingResponse* _root;

}

@property (nonatomic,readonly) long long content_type; 
@property (nonatomic,readonly) FTFinalSpeechRecognitionResponse * contentAsFTFinalSpeechRecognitionResponse; 
@property (nonatomic,readonly) FTPartialSpeechRecognitionResponse * contentAsFTPartialSpeechRecognitionResponse; 
@property (nonatomic,readonly) FTUpdatedAcousticProfile * contentAsFTUpdatedAcousticProfile; 
@property (nonatomic,readonly) FTEndPointLikelihood * contentAsFTEndPointLikelihood; 
@property (nonatomic,readonly) FTEndPointCandidate * contentAsFTEndPointCandidate; 
@property (nonatomic,readonly) FTRecognitionProgress * contentAsFTRecognitionProgress; 
@property (nonatomic,readonly) FTCheckForSpeechResponse * contentAsFTCheckForSpeechResponse; 
@property (nonatomic,readonly) FTRecognitionCandidate * contentAsFTRecognitionCandidate; 
@property (nonatomic,readonly) FTRequestStatsResponse * contentAsFTRequestStatsResponse; 
@property (nonatomic,readonly) FTServerEndpointFeatures * contentAsFTServerEndpointFeatures; 
@property (nonatomic,readonly) FTClientSetupInfo * contentAsFTClientSetupInfo; 
@property (nonatomic,readonly) FTAudioLimitExceeded * contentAsFTAudioLimitExceeded; 
-(FTFinalSpeechRecognitionResponse *)contentAsFTFinalSpeechRecognitionResponse;
-(FTPartialSpeechRecognitionResponse *)contentAsFTPartialSpeechRecognitionResponse;
-(FTUpdatedAcousticProfile *)contentAsFTUpdatedAcousticProfile;
-(FTEndPointLikelihood *)contentAsFTEndPointLikelihood;
-(FTEndPointCandidate *)contentAsFTEndPointCandidate;
-(FTRecognitionProgress *)contentAsFTRecognitionProgress;
-(FTCheckForSpeechResponse *)contentAsFTCheckForSpeechResponse;
-(FTRecognitionCandidate *)contentAsFTRecognitionCandidate;
-(FTRequestStatsResponse *)contentAsFTRequestStatsResponse;
-(FTServerEndpointFeatures *)contentAsFTServerEndpointFeatures;
-(FTClientSetupInfo *)contentAsFTClientSetupInfo;
-(FTAudioLimitExceeded *)contentAsFTAudioLimitExceeded;
-(long long)content_type;
-(id)initWithFlatbuffData:(id)arg1 root:(const RecognitionStreamingResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::qss_fb::RecognitionStreamingResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const RecognitionStreamingResponse*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

