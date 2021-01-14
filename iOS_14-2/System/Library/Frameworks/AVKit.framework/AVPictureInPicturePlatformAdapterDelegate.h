/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol AVPictureInPicturePlatformAdapterDelegate <NSObject>
@required
-(void)pictureInPicturePlatformAdapter:(id)arg1 failedToStartError:(id)arg2;
-(void)pictureInPicturePlatformAdapter:(id)arg1 prepareToStopForRestoringUserInterface:(/*^block*/id)arg2;
-(void)pictureInPicturePlatformAdapterPrepareToStopForDismissal:(id)arg1;
-(void)pictureInPicturePlatformAdapter:(id)arg1 handlePlaybackCommand:(long long)arg2;
-(void)pictureInPicturePlatformAdapter:(id)arg1 stopPictureInPictureAndRestoreUserInterface:(BOOL)arg2;
-(void)pictureInPicturePlatformAdapter:(id)arg1 statusDidChange:(long long)arg2 fromStatus:(long long)arg3;
-(void)pictureInPicturePlatformAdapterBeginReducingResourcesForEligibleOffScreenState;
-(void)pictureInPicturePlatformAdapterEndReducingResourcesForEligibleOffScreenState;

@end

