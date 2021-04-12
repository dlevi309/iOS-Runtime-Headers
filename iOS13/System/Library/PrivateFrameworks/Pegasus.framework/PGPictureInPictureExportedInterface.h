/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/


@protocol PGPictureInPictureExportedInterface <NSObject>
@required
-(oneway void)actionButtonTapped;
-(oneway void)pictureInPictureInterruptionBegan;
-(oneway void)pictureInPictureInterruptionEnded;
-(oneway void)pictureInPictureStartRequestedAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(oneway void)pictureInPictureStopRequestedAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(oneway void)pictureInPictureCancelRequestedAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(oneway void)updatePictureInPicturePossible:(BOOL)arg1;
-(oneway void)pictureInPictureSuspended;
-(oneway void)pictureInPictureResumed;
-(oneway void)pictureInPictureCancelled;
-(oneway void)updateHostedWindowSize:(CGSize)arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(id)arg4;
-(oneway void)hostedWindowSizeChangeBegan;
-(oneway void)hostedWindowSizeChangeEnded;

@end

