/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol PGPictureInPictureAnalyticsDelegate <NSObject>
@required
-(void)pictureInPictureDidDestroyAnalyticsSourceWithUUID:(id)arg1;
-(void)pictureInPictureDidCreateAnalyticsSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 contentType:(long long)arg3;
-(void)pictureInPictureDidChangeStashStateForAnalyticsSessionWithUUID:(id)arg1 stashed:(BOOL)arg2;
-(void)pictureInPictureDidDeactivateAnalyticsSessionWithUUID:(id)arg1 analyticsSourceUUID:(id)arg2 appStoppedSession:(BOOL)arg3 restoredFullScreen:(BOOL)arg4;
-(void)pictureInPictureDidDestroyAnalyticsSessionWithUUID:(id)arg1;
-(void)pictureInPictureDidCreateAnalyticsSessionWithUUID:(id)arg1 bundleIdentifier:(id)arg2 contentType:(long long)arg3;
-(void)pictureInPictureDidActivateAnalyticsSessionWithUUID:(id)arg1 analyticsSourceUUID:(id)arg2 automatically:(BOOL)arg3;
-(void)pictureInPictureAnalyticsSourceWithUUID:(id)arg1 didBecomePossible:(BOOL)arg2;

@end

