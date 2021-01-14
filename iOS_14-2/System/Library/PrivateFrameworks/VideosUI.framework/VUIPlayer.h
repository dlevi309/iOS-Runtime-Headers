/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVPlayback/TVPPlayer.h>

@class NWPathEvaluator;

@interface VUIPlayer : TVPPlayer {

	NWPathEvaluator* _pathEvaluator;

}

@property (nonatomic,retain) NWPathEvaluator * pathEvaluator;              //@synthesize pathEvaluator=_pathEvaluator - In the implementation block
+(void)initialize;
+(id)savedPreferredAudioLanguageCode;
+(void)setSavedPreferredAudioLanguageCode:(id)arg1 ;
-(NWPathEvaluator *)pathEvaluator;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPathEvaluator:(NWPathEvaluator *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)dealloc;
-(void)_currentMediaItemDidChange:(id)arg1 ;
-(void)_videoPlaybackSettingsDidChange:(id)arg1 ;
-(void)_configurePlayerForCurrentNetworkSettingsAndMediaItem;
@end

