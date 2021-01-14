/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTRecognitionCandidate.h>

@class NSString, FTRecognitionResult, FTAudioAnalytics, FTLatnnMitigatorResult;

@interface FTMutableRecognitionCandidate : FTRecognitionCandidate

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_str; 
@property (nonatomic,copy) FTRecognitionResult * recognition_result; 
@property (nonatomic,copy) NSString * result_id; 
@property (assign,nonatomic) double snr; 
@property (assign,nonatomic) long long fingerprint_detection; 
@property (nonatomic,copy) FTAudioAnalytics * audio_analytics; 
@property (assign,nonatomic) long long watermark_detection; 
@property (assign,nonatomic) double watermark_peak_average; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) FTLatnnMitigatorResult * latnn_mitigator_result; 
@property (nonatomic,copy) NSString * request_locale; 
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(double)snr;
-(NSString *)request_locale;
-(void)setRequest_locale:(NSString *)arg1 ;
-(void)setReturn_code:(int)arg1 ;
-(void)setReturn_str:(NSString *)arg1 ;
-(FTRecognitionResult *)recognition_result;
-(void)setRecognition_result:(FTRecognitionResult *)arg1 ;
-(FTAudioAnalytics *)audio_analytics;
-(void)setAudio_analytics:(FTAudioAnalytics *)arg1 ;
-(long long)watermark_detection;
-(void)setWatermark_detection:(long long)arg1 ;
-(double)watermark_peak_average;
-(void)setWatermark_peak_average:(double)arg1 ;
-(FTLatnnMitigatorResult *)latnn_mitigator_result;
-(void)setLatnn_mitigator_result:(FTLatnnMitigatorResult *)arg1 ;
-(void)setSnr:(double)arg1 ;
-(NSString *)result_id;
-(int)return_code;
-(NSString *)return_str;
-(NSString *)speech_id;
-(void)setResult_id:(NSString *)arg1 ;
-(long long)fingerprint_detection;
-(void)setFingerprint_detection:(long long)arg1 ;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

