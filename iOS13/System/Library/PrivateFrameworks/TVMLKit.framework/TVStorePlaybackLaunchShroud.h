/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


@class UIWindow;

@interface TVStorePlaybackLaunchShroud : NSObject {

	BOOL _hidden;
	UIWindow* _window;

}

@property (nonatomic,retain) UIWindow * window;                        //@synthesize window=_window - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;              //@synthesize hidden=_hidden - In the implementation block
+(id)sharedShroud;
-(id)init;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)fadeOut;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_hideWithFadeAnimation:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_showWithFadeAnimation:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

