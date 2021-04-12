/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class MPPlaybackContext;

@interface MPPlaybackContextRemotePlaybackQueue : MPRemotePlaybackQueue {

	MPPlaybackContext* _playbackContext;
	long long _replaceIntent;

}
-(id)initWithPlaybackContext:(id)arg1 ;
-(void)getPlaybackContextWithCompletion:(/*^block*/id)arg1 ;
-(id)description;
-(id)siriWHAMetricsInfo;
-(BOOL)isRequestingImmediatePlayback;
-(id)siriRecommendationIdentifier;
-(long long)replaceIntent;
-(void)setReplaceIntent:(long long)arg1 ;
-(id)siriAssetInfo;
@end

