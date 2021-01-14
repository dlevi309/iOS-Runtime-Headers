/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXVideoScrubberControllerTarget <NSObject>
@property (nonatomic,copy) id durationChangeHandler; 
@property (nonatomic,copy) id statusChangeHandler; 
@property (nonatomic,copy) id playerItemChangeHandler; 
@optional
-(void)videoScrubberControllerWillBeginSeeking:(id)arg1;
-(void)videoScrubberControllerDidEndSeeking:(id)arg1;

@required
-(float)playRate;
-(long long)playerStatus;
-(id)durationChangeHandler;
-(id)statusChangeHandler;
-(id)playerItemChangeHandler;
-(SCD_Struct_PX8*)playerCurrentTime;
-(SCD_Struct_PX8*)currentItemDuration;
-(void)videoScrubberController:(id)arg1 seekToTime:(SCD_Struct_PX8)arg2 toleranceBefore:(SCD_Struct_PX8)arg3 toleranceAfter:(SCD_Struct_PX8)arg4 completionHandler:(/*^block*/id)arg5;
-(void)setDurationChangeHandler:(/*^block*/id)arg1;
-(void)setStatusChangeHandler:(/*^block*/id)arg1;
-(void)setPlayerItemChangeHandler:(/*^block*/id)arg1;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_PX8)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3;
-(void)removeTimeObserver:(id)arg1;
-(void)cancelPendingSeeks;
-(id)playerItem;

@end

