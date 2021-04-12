/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessoryNowPlaying.framework/AccessoryNowPlaying
*/


@protocol AccessoryNowPlayingXPCClientProtocol <NSObject>
@required
-(void)updateSubscriberList:(id)arg1 WithReply:(/*^block*/id)arg2;
-(void)triggerMediaItemAttributesUpdateWithReply:(/*^block*/id)arg1;
-(void)triggerMediaItemArtworkUpdateWithReply:(/*^block*/id)arg1;
-(void)triggerPlaybackAttributesUpdateWithReply:(/*^block*/id)arg1;
-(void)requestPlaybackQueueListInfo:(id)arg1 requestID:(id)arg2 startIndex:(unsigned)arg3 upToCount:(unsigned)arg4 infoMask:(unsigned)arg5;
-(void)cancelRequestPlaybackQueueListInfo:(id)arg1 requestID:(id)arg2;
-(void)setPlaybackElapsedTime:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)setPlaybackQueueIndex:(id)arg1 withReply:(/*^block*/id)arg2;

@end

