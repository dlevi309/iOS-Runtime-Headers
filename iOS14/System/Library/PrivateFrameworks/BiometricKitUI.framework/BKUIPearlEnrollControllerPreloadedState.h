/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/


@class NSArray, BKUIPearlAudioSession, BKUIPearlVideoCaptureSession;

@interface BKUIPearlEnrollControllerPreloadedState : NSObject {

	NSArray* _cachedEntryAnimationImages;
	BKUIPearlAudioSession* _cachedAudioSession;
	BKUIPearlVideoCaptureSession* _cachedVideoCaptureSession;

}
-(void)cacheAudioSession:(id)arg1 ;
-(void)cacheVideoCaptureSession:(id)arg1 ;
-(id)acquireCachedVideoCaptureSession;
-(id)acquireCachedAudioSession;
-(void)cacheEntryAnimationImages:(id)arg1 ;
-(id)acquireCachedEntryAnimationImages;
@end

