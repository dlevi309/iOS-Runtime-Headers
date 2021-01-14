/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol TVMediaPlaybackManagerDelegate <NSObject>
@optional
-(BOOL)mediaPlaybackManager:(id)arg1 shouldEnableUIModeImplicitly:(long long)arg2;
-(BOOL)presentForegroundPlaybackControllerForMediaPlaybackManager:(id)arg1;
-(void)evaluateSwipeUpMessageForMediaPlaybackManager:(id)arg1;

@required
-(void)mediaPlaybackManager:(id)arg1 shouldHideUI:(BOOL)arg2 animated:(BOOL)arg3 animations:(/*^block*/id)arg4 completion:(/*^block*/id)arg5;

@end

