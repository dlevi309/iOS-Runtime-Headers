/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTPronGuessStreamingRequest.h>

@class FTStartPronGuessRequest, FTAudioPacket, FTFinishAudio, FTCancelRequest;

@interface FTMutablePronGuessStreamingRequest : FTPronGuessStreamingRequest

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) FTStartPronGuessRequest * contentAsFTStartPronGuessRequest; 
@property (nonatomic,copy) FTAudioPacket * contentAsFTAudioPacket; 
@property (nonatomic,copy) FTFinishAudio * contentAsFTFinishAudio; 
@property (nonatomic,copy) FTCancelRequest * contentAsFTCancelRequest; 
-(id)init;
-(long long)content_type;
-(void)setContent_type:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FTStartPronGuessRequest *)contentAsFTStartPronGuessRequest;
-(FTAudioPacket *)contentAsFTAudioPacket;
-(void)setContentAsFTStartPronGuessRequest:(FTStartPronGuessRequest *)arg1 ;
-(void)setContentAsFTAudioPacket:(FTAudioPacket *)arg1 ;
-(FTFinishAudio *)contentAsFTFinishAudio;
-(void)setContentAsFTFinishAudio:(FTFinishAudio *)arg1 ;
-(FTCancelRequest *)contentAsFTCancelRequest;
-(void)setContentAsFTCancelRequest:(FTCancelRequest *)arg1 ;
@end

