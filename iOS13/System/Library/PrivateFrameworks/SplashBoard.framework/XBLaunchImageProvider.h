/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/


@protocol OS_dispatch_queue, BSInvalidatable;
@class NSObject, NSMutableSet;

@interface XBLaunchImageProvider : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableSet* _blacklistedBundleIdentifiers;
	id<BSInvalidatable> _stateCaptureAssertion;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_addStateCaptureHandler;
-(void)captureLaunchImageForManifest:(id)arg1 withCompatibilityInfo:(id)arg2 launchRequests:(id)arg3 firstImageIsReady:(/*^block*/id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(/*^block*/id)createLaunchImageGeneratorWithContext:(id)arg1 ;
-(void)preheatServiceWithTimeout:(double)arg1 ;
-(BOOL)_isAppBlacklisted:(id)arg1 ;
-(void)_generateImageForSnapshot:(id)arg1 inManifest:(id)arg2 withContext:(id)arg3 dataProvider:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_blacklistApp:(id)arg1 forError:(id)arg2 ;
-(void)_clearBlacklistForApp:(id)arg1 ;
@end

