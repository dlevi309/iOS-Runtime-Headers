/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class MPNowPlayingInfoLanguageOption;

@interface MPChangeLanguageOptionCommandEvent : MPRemoteCommandEvent {

	MPNowPlayingInfoLanguageOption* _languageOption;
	long long _setting;

}

@property (nonatomic,readonly) MPNowPlayingInfoLanguageOption * languageOption;              //@synthesize languageOption=_languageOption - In the implementation block
@property (nonatomic,readonly) long long setting;                                            //@synthesize setting=_setting - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(MPNowPlayingInfoLanguageOption *)languageOption;
-(long long)setting;
@end

