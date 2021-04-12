/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/NowPlaying-iOS.feature/NowPlaying-iOS
*/


@protocol AccessoryNowPlayingClientProtocol <NSObject>
@optional
-(void)shouldSendArtworkDidChange:(BOOL)arg1;

@required
-(id)currentMediaItemArtwork;
-(id)currentPlaybackAttributes;
-(BOOL)setPlaybackElapsedTime:(id)arg1;
-(void)cancelRequestPlaybackQueueListInfo:(id)arg1 requestID:(id)arg2;
-(void)requestPlaybackQueueListInfo:(id)arg1 requestID:(id)arg2 startIndex:(unsigned)arg3 upToCount:(unsigned)arg4 infoMask:(unsigned)arg5;
-(id)currentMediaItemAttributes;
-(BOOL)setPlaybackQueueIndex:(id)arg1;

@end

