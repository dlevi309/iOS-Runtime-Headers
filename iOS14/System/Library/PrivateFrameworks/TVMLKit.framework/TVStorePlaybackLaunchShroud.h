/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isHidden;
-(id)init;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(UIWindow *)window;
-(void)fadeOut;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_hideWithFadeAnimation:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_showWithFadeAnimation:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

