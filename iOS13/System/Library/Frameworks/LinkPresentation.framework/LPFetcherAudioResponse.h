/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

