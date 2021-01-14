/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)setting;
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(MPNowPlayingInfoLanguageOption *)languageOption;
@end

