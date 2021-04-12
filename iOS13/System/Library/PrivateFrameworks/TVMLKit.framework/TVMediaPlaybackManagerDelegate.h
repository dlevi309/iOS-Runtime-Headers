/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


@protocol TVMediaPlaybackManagerDelegate <NSObject>
@optional
-(BOOL)mediaPlaybackManager:(id)arg1 shouldEnableUIModeImplicitly:(long long)arg2;
-(void)evaluateSwipeUpMessageForMediaPlaybackManager:(id)arg1;
-(BOOL)presentForegroundPlaybackControllerForMediaPlaybackManager:(id)arg1;

@required
-(void)mediaPlaybackManager:(id)arg1 shouldHideUI:(BOOL)arg2 animated:(BOOL)arg3 animations:(/*^block*/id)arg4 completion:(/*^block*/id)arg5;

@end

