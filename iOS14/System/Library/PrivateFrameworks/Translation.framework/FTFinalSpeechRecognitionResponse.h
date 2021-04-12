/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, FTRecognitionResult, FTAudioAnalytics, FTLatnnMitigatorResult;

@interface FTFinalSpeechRecognitionResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const FinalSpeechRecognitionResponse* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) int return_code; 
@property (nonatomic,readonly) NSString * return_str; 
@property (nonatomic,readonly) FTRecognitionResult * recognition_result; 
@property (nonatomic,readonly) long long lang_profile_recreate_codes; 
@property (nonatomic,readonly) FTAudioAnalytics * audio_analytics; 
@property (nonatomic,readonly) long long watermark_detection; 
@property (nonatomic,readonly) double watermark_peak_average; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) FTLatnnMitigatorResult * latnn_mitigator_result; 
@property (nonatomic,readonly) NSString * request_locale; 
@property (nonatomic,readonly) BOOL has_result; 
-(NSString *)request_locale;
-(BOOL)has_result;
-(FTRecognitionResult *)recognition_result;
-(long long)lang_profile_recreate_codes;
-(FTAudioAnalytics *)audio_analytics;
-(long long)watermark_detection;
-(double)watermark_peak_average;
-(FTLatnnMitigatorResult *)latnn_mitigator_result;
-(int)return_code;
-(NSString *)return_str;
-(NSString *)speech_id;
-(NSString *)session_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const FinalSpeechRecognitionResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::FinalSpeechRecognitionResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const FinalSpeechRecognitionResponse*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

