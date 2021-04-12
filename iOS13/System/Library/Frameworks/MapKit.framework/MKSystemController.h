/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKSystemControllerOpenURLDelegate;
#import <MapKit/MapKit-Structs.h>
@interface MKSystemController : NSObject {

	id<MKSystemControllerOpenURLDelegate> _openURLDelegate;

}

@property (assign,nonatomic,__weak) id<MKSystemControllerOpenURLDelegate> openURLDelegate;              //@synthesize openURLDelegate=_openURLDelegate - In the implementation block
+(id)sharedInstance;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)openURL:(id)arg1 ;
-(BOOL)isInternalInstall;
-(int)userInterfaceIdiom;
-(double)screenScale;
-(BOOL)isWifiEnabled;
-(CGSize)screenSize;
-(BOOL)reduceMotionEnabled;
-(BOOL)supportsPitchAPI;
-(BOOL)requiresRTT;
-(BOOL)overrideBlurStyle;
-(BOOL)supports3DImagery;
-(BOOL)supportsAlwaysOnCompass;
-(BOOL)supports3DMaps;
-(BOOL)isDevicePluggedIn;
-(BOOL)isHiDPI;
-(void)openURL:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 requireOptionKeyPromptUnlockDevice:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)placeDialRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_openURLsOnBackgroundThread;
-(BOOL)_isRunningInLockScreen;
-(BOOL)_shouldUseLaunchServices;
-(id)_defaultOpenURLOptions;
-(id)_transformURLIfNecessary:(id)arg1 ;
-(BOOL)isPhone6PlusOrLarger;
-(void)openURL:(id)arg1 fromScene:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)shouldCaptureMapViewGestureAnalytics;
-(id<MKSystemControllerOpenURLDelegate>)openURLDelegate;
-(void)setOpenURLDelegate:(id<MKSystemControllerOpenURLDelegate>)arg1 ;
@end

