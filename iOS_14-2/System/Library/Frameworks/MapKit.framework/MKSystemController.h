/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKSystemControllerOpenURLDelegate;
#import <MapKit/MapKit-Structs.h>
@interface MKSystemController : NSObject {

	id<MKSystemControllerOpenURLDelegate> _openURLDelegate;

}

@property (assign,nonatomic,__weak) id<MKSystemControllerOpenURLDelegate> openURLDelegate;              //@synthesize openURLDelegate=_openURLDelegate - In the implementation block
+(id)sharedInstance;
-(BOOL)reduceMotionEnabled;
-(int)userInterfaceIdiom;
-(BOOL)requiresRTT;
-(BOOL)_shouldUseLaunchServices;
-(BOOL)_openURLsOnBackgroundThread;
-(id)_defaultOpenURLOptions;
-(void)setOpenURLDelegate:(id<MKSystemControllerOpenURLDelegate>)arg1 ;
-(void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 requireOptionKeyPromptUnlockDevice:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(CGSize)screenSize;
-(BOOL)supports3DImagery;
-(BOOL)supportsAlwaysOnCompass;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isHiDPI;
-(id<MKSystemControllerOpenURLDelegate>)openURLDelegate;
-(void)openURL:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isInternalInstall;
-(BOOL)isWifiEnabled;
-(BOOL)openURL:(id)arg1 ;
-(id)_transformURLIfNecessary:(id)arg1 ;
-(BOOL)shouldCaptureMapViewGestureAnalytics;
-(void)openURL:(id)arg1 fromScene:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isPhone6PlusOrLarger;
-(BOOL)_isRunningInLockScreen;
-(BOOL)overrideBlurStyle;
-(double)screenScale;
-(BOOL)supportsPitchAPI;
-(BOOL)supports3DMaps;
-(void)placeDialRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isDevicePluggedIn;
@end

