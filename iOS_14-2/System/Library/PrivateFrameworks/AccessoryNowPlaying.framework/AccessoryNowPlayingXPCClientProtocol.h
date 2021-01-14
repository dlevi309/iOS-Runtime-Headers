/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessoryNowPlaying.framework/AccessoryNowPlaying
*/


@protocol AccessoryNowPlayingXPCClientProtocol <NSObject>
@required
-(void)cancelRequestPlaybackQueueListInfo:(id)arg1 requestID:(id)arg2;
-(void)requestPlaybackQueueListInfo:(id)arg1 requestID:(id)arg2 startIndex:(unsigned)arg3 upToCount:(unsigned)arg4 infoMask:(unsigned)arg5;
-(void)updateSubscriberList:(id)arg1 WithReply:(/*^block*/id)arg2;
-(void)triggerMediaItemAttributesUpdateWithReply:(/*^block*/id)arg1;
-(void)triggerMediaItemArtworkUpdateWithReply:(/*^block*/id)arg1;
-(void)triggerPlaybackAttributesUpdateWithReply:(/*^block*/id)arg1;
-(void)setPlaybackElapsedTime:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)setPlaybackQueueIndex:(id)arg1 withReply:(/*^block*/id)arg2;

@end

