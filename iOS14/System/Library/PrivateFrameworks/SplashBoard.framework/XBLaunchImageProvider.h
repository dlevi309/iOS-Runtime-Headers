/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/


@protocol OS_dispatch_queue, BSInvalidatable;
@class NSObject;

@interface XBLaunchImageProvider : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	id<BSInvalidatable> _stateCaptureAssertion;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)captureLaunchImageForManifest:(id)arg1 withCompatibilityInfo:(id)arg2 launchRequests:(id)arg3 createCaptureInfo:(BOOL)arg4 firstImageIsReady:(/*^block*/id)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(/*^block*/id)createLaunchImageGeneratorWithContext:(id)arg1 asyncImageData:(BOOL)arg2 error:(id*)arg3 ;
-(void)preheatServiceWithTimeout:(double)arg1 ;
-(void)_generateImageForSnapshot:(id)arg1 inManifest:(id)arg2 withContext:(id)arg3 asyncImageData:(BOOL)arg4 dataProvider:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_addBadLaunchInterfaceToDenyList:(id)arg1 forError:(id)arg2 ;
@end

