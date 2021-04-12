/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/NowPlaying-iOS.feature/NowPlaying-iOS
*/


@protocol AccessoryNowPlayingClientProtocol <NSObject>
@optional
-(void)shouldSendArtworkDidChange:(BOOL)arg1;

@required
-(void)requestPlaybackQueueListInfo:(id)arg1 requestID:(id)arg2 startIndex:(unsigned)arg3 upToCount:(unsigned)arg4 infoMask:(unsigned)arg5;
-(void)cancelRequestPlaybackQueueListInfo:(id)arg1 requestID:(id)arg2;
-(id)currentMediaItemAttributes;
-(id)currentMediaItemArtwork;
-(id)currentPlaybackAttributes;
-(BOOL)setPlaybackElapsedTime:(id)arg1;
-(BOOL)setPlaybackQueueIndex:(id)arg1;

@end

