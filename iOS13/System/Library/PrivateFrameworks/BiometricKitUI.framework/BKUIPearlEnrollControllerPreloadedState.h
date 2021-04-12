/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/


@class NSArray, BKUIPearlAudioSession, BKUIPearlVideoCaptureSession;

@interface BKUIPearlEnrollControllerPreloadedState : NSObject {

	NSArray* _cachedEntryAnimationImages;
	BKUIPearlAudioSession* _cachedAudioSession;
	BKUIPearlVideoCaptureSession* _cachedVideoCaptureSession;

}
-(void)cacheEntryAnimationImages:(id)arg1 ;
-(void)cacheAudioSession:(id)arg1 ;
-(void)cacheVideoCaptureSession:(id)arg1 ;
-(id)acquireCachedVideoCaptureSession;
-(id)acquireCachedEntryAnimationImages;
-(id)acquireCachedAudioSession;
@end

