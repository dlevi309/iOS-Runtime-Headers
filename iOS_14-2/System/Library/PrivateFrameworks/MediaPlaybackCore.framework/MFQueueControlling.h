/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MFQueueControlling
@required
-(id)itemToFollowItem:(id)arg1 direction:(long long)arg2 distance:(long long)arg3 reason:(long long)arg4;
-(id)queueItemForPlayerItem:(id)arg1 allowReuse:(BOOL)arg2;
-(BOOL)canSkipInDirection:(long long)arg1 fromItem:(id)arg2;

@end

