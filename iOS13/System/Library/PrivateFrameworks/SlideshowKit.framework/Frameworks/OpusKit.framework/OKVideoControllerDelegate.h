/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@protocol OKVideoControllerDelegate <NSObject>
@optional
-(void)videoPlayerControllerIsReadyToPlay:(id)arg1;
-(void)videoPlayerController:(id)arg1 stateDidChange:(unsigned long long)arg2;
-(void)videoPlayerController:(id)arg1 bufferingStateDidChange:(unsigned long long)arg2;

@required
-(void)videoPlayerController:(id)arg1 didStartPlayingItem:(id)arg2;
-(void)videoPlayerController:(id)arg1 didFinishPlayingItem:(id)arg2;
-(void)videoPlayerController:(id)arg1 didFailToPlayItem:(id)arg2;

@end

