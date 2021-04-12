/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
*/


@class UIApplication;

@interface IMAppStateMonitor : NSObject {

	UIApplication* _app;
	long long _applicationState;
	double _backgroundTimeRemaining;

}

@property (nonatomic,retain) UIApplication * app;                         //@synthesize app=_app - In the implementation block
@property (assign,nonatomic) long long applicationState;                  //@synthesize applicationState=_applicationState - In the implementation block
@property (assign,nonatomic) double backgroundTimeRemaining;              //@synthesize backgroundTimeRemaining=_backgroundTimeRemaining - In the implementation block
+(id)sharedInstance;
-(long long)applicationState;
-(void)applicationDidEnterBackground;
-(id)init;
-(void)applicationWillResignActive;
-(void)setApplicationState:(long long)arg1 ;
-(void)setApp:(UIApplication *)arg1 ;
-(void)applicationDidBecomeActive;
-(UIApplication *)app;
-(double)backgroundTimeRemaining;
-(void)setBackgroundTimeRemaining:(double)arg1 ;
-(void)applicationDidFinishLaunching;
@end

