/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTLanguageDetectionStreamingRequest.h>

@class FTStartLanguageDetectionRequest, FTAudioPacket, FTFinishAudio;

@interface FTMutableLanguageDetectionStreamingRequest : FTLanguageDetectionStreamingRequest

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) FTStartLanguageDetectionRequest * contentAsFTStartLanguageDetectionRequest; 
@property (nonatomic,copy) FTAudioPacket * contentAsFTAudioPacket; 
@property (nonatomic,copy) FTFinishAudio * contentAsFTFinishAudio; 
-(id)init;
-(FTStartLanguageDetectionRequest *)contentAsFTStartLanguageDetectionRequest;
-(void)setContentAsFTStartLanguageDetectionRequest:(FTStartLanguageDetectionRequest *)arg1 ;
-(long long)content_type;
-(void)setContent_type:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FTAudioPacket *)contentAsFTAudioPacket;
-(void)setContentAsFTAudioPacket:(FTAudioPacket *)arg1 ;
-(FTFinishAudio *)contentAsFTFinishAudio;
-(void)setContentAsFTFinishAudio:(FTFinishAudio *)arg1 ;
@end

