/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, FTRecognitionResult, FTAudioAnalytics, FTLatnnMitigatorResult;

@interface FTRecognitionCandidate : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const RecognitionCandidate* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) int return_code; 
@property (nonatomic,readonly) NSString * return_str; 
@property (nonatomic,readonly) FTRecognitionResult * recognition_result; 
@property (nonatomic,readonly) NSString * result_id; 
@property (nonatomic,readonly) double snr; 
@property (nonatomic,readonly) long long fingerprint_detection; 
@property (nonatomic,readonly) FTAudioAnalytics * audio_analytics; 
@property (nonatomic,readonly) long long watermark_detection; 
@property (nonatomic,readonly) double watermark_peak_average; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) FTLatnnMitigatorResult * latnn_mitigator_result; 
@property (nonatomic,readonly) NSString * request_locale; 
-(double)snr;
-(NSString *)request_locale;
-(FTRecognitionResult *)recognition_result;
-(FTAudioAnalytics *)audio_analytics;
-(long long)watermark_detection;
-(double)watermark_peak_average;
-(FTLatnnMitigatorResult *)latnn_mitigator_result;
-(NSString *)result_id;
-(int)return_code;
-(NSString *)return_str;
-(NSString *)speech_id;
-(long long)fingerprint_detection;
-(NSString *)session_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const RecognitionCandidate*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::RecognitionCandidate>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const RecognitionCandidate*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

