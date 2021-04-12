/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class MPPlaybackContext;

@interface MPPlaybackContextRemotePlaybackQueue : MPRemotePlaybackQueue {

	MPPlaybackContext* _playbackContext;
	long long _replaceIntent;

}
-(id)description;
-(id)siriWHAMetricsInfo;
-(BOOL)isRequestingImmediatePlayback;
-(id)siriRecommendationIdentifier;
-(id)siriAssetInfo;
-(long long)replaceIntent;
-(void)setReplaceIntent:(long long)arg1 ;
-(id)initWithPlaybackContext:(id)arg1 ;
-(void)getPlaybackContextWithCompletion:(/*^block*/id)arg1 ;
@end

