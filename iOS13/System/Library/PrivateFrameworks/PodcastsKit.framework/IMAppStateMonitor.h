/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@class UIApplication;

@interface IMAppStateMonitor : NSObject {

	UIApplication* _app;
	long long _statusBarOrientation;
	long long _applicationState;
	double _backgroundTimeRemaining;

}

@property (nonatomic,retain) UIApplication * app;                         //@synthesize app=_app - In the implementation block
@property (assign,nonatomic) long long statusBarOrientation;              //@synthesize statusBarOrientation=_statusBarOrientation - In the implementation block
@property (assign,nonatomic) long long applicationState;                  //@synthesize applicationState=_applicationState - In the implementation block
@property (assign,nonatomic) double backgroundTimeRemaining;              //@synthesize backgroundTimeRemaining=_backgroundTimeRemaining - In the implementation block
+(id)sharedInstance;
-(id)init;
-(long long)applicationState;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(void)setStatusBarOrientation:(long long)arg1 ;
-(long long)statusBarOrientation;
-(double)backgroundTimeRemaining;
-(UIApplication *)app;
-(void)setApp:(UIApplication *)arg1 ;
-(void)setApplicationState:(long long)arg1 ;
-(void)applicationDidEnterBackground;
-(void)setBackgroundTimeRemaining:(double)arg1 ;
-(void)applicationDidFinishLaunching;
-(void)didChangeStatusBarOrientation:(long long)arg1 ;
@end

