/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPFetcherResponse.h>

@class LPAudio;

@interface LPFetcherAudioResponse : LPFetcherResponse {

	LPAudio* _audio;

}

@property (nonatomic,retain,readonly) LPAudio * audio;              //@synthesize audio=_audio - In the implementation block
+(id)audioPropertiesForFetcher:(id)arg1 ;
-(id)initWithAudio:(id)arg1 fetcher:(id)arg2 ;
-(LPAudio *)audio;
@end

