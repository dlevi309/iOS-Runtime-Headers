/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@interface GKNotificationBanner : NSObject
+(id)bannerViewWithTitle:(id)arg1 image:(id)arg2 player:(id)arg3 message:(id)arg4 actionMessage:(id)arg5 ;
+(id)bannerViewWithTitle:(id)arg1 image:(id)arg2 player:(id)arg3 message:(id)arg4 ;
+(void)showWelcomeBannerWithTitle:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)showBannerWithTitle:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)showBannerWithTitle:(id)arg1 message:(id)arg2 duration:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)showBannerWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)showBannerWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 touchHandler:(/*^block*/id)arg4 ;
+(void)showBannerWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)showBannerWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3 touchHandler:(/*^block*/id)arg4 ;
+(id)bannerViewWithTitle:(id)arg1 message:(id)arg2 actionMessage:(id)arg3 ;
@end

