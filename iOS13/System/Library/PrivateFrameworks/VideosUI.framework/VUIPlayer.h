/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVPlayback/TVPPlayer.h>

@interface VUIPlayer : TVPPlayer
+(void)initialize;
+(id)savedPreferredAudioLanguageCode;
+(void)setSavedPreferredAudioLanguageCode:(id)arg1 ;
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
-(void)_currentMediaItemDidChange:(id)arg1 ;
-(void)_networkConfigurationDidChange:(id)arg1 ;
-(void)_videoPlaybackSettingsDidChange:(id)arg1 ;
-(void)_configurePlayerForCurrentNetworkSettingsAndMediaItem;
@end

