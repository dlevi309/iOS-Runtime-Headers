/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIWindow.h>

@protocol OS_dispatch_semaphore;
@class NSObject, GKNotificationBannerViewController;

@interface GKNotificationBannerWindow : UIWindow {

	NSObject*<OS_dispatch_semaphore> _bannerSemaphore;
	GKNotificationBannerViewController* _currentBannerViewController;

}

@property (nonatomic,retain) GKNotificationBannerViewController * currentBannerViewController;              //@synthesize currentBannerViewController=_currentBannerViewController - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> bannerSemaphore;                            //@synthesize bannerSemaphore=_bannerSemaphore - In the implementation block
+(void)enqueBanner:(id)arg1 ;
+(id)bannerWindow;
+(id)queue;
-(BOOL)_canBecomeKeyWindow;
-(id)init;
-(GKNotificationBannerViewController *)currentBannerViewController;
-(NSObject*<OS_dispatch_semaphore>)bannerSemaphore;
-(void)_showBanner:(id)arg1 ;
-(void)_hideBanner:(id)arg1 quickly:(BOOL)arg2 ;
-(void)setCurrentBannerViewController:(GKNotificationBannerViewController *)arg1 ;
-(BOOL)_canAffectStatusBarAppearance;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)handleSingleTap:(id)arg1 ;
-(void)handlePan:(id)arg1 ;
-(BOOL)_includeInDefaultImageSnapshot;
-(void)dealloc;
@end

