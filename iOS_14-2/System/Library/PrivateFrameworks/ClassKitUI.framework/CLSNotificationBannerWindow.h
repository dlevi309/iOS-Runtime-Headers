/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassKitUI.framework/ClassKitUI
*/

#import <ClassKitUI/ClassKitUI-Structs.h>
#import <UIKitCore/UIWindow.h>

@protocol OS_dispatch_semaphore;
@class CLSNotificationBannerViewController, NSObject;

@interface CLSNotificationBannerWindow : UIWindow {

	CLSNotificationBannerViewController* _currentBannerViewController;
	NSObject*<OS_dispatch_semaphore> _bannerSemaphore;

}

@property (nonatomic,retain) CLSNotificationBannerViewController * currentBannerViewController;              //@synthesize currentBannerViewController=_currentBannerViewController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> bannerSemaphore;                               //@synthesize bannerSemaphore=_bannerSemaphore - In the implementation block
+(void)enqueBanner:(id)arg1 ;
+(id)bannerWindow;
+(id)queue;
-(id)init;
-(CLSNotificationBannerViewController *)currentBannerViewController;
-(NSObject*<OS_dispatch_semaphore>)bannerSemaphore;
-(void)_showBanner:(id)arg1 ;
-(void)_hideBanner:(id)arg1 quickly:(BOOL)arg2 ;
-(void)setCurrentBannerViewController:(CLSNotificationBannerViewController *)arg1 ;
-(BOOL)_canAffectStatusBarAppearance;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)handlePan:(id)arg1 ;
-(BOOL)_includeInDefaultImageSnapshot;
-(void)setBannerSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

