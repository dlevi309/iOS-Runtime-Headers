/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/


@protocol PGPictureInPictureExportedInterface <NSObject>
@required
-(oneway void)actionButtonTapped;
-(oneway void)handleCommand:(id)arg1;
-(oneway void)pictureInPictureStartRequestedAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(oneway void)pictureInPictureStopRequestedAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(oneway void)beginTwoStagePictureInPictureStopByRestoringUserInterfaceWithCompletionHandler:(/*^block*/id)arg1;
-(oneway void)endTwoStagePictureInPictureStopWithCompletionBlock:(/*^block*/id)arg1;
-(oneway void)pictureInPictureCancelRequestedAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(oneway void)updatePictureInPicturePossible:(BOOL)arg1;
-(oneway void)pictureInPictureCancelled;
-(oneway void)updateHostedWindowSize:(CGSize)arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(id)arg4;
-(oneway void)hostedWindowSizeChangeBegan;
-(oneway void)hostedWindowSizeChangeEnded;
-(oneway void)setStashedOrUnderLock:(BOOL)arg1;
-(oneway void)setResourcesUsageReductionReasons:(unsigned long long)arg1;

@end

