/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class UIView;


@protocol PXTrimToolPlayerWrapper <NSObject>
@property (assign,nonatomic,__weak) id<PXTrimToolPlayerObserver> playerObserver; 
@property (nonatomic,readonly) SCD_Struct_PX9 trimRange; 
@property (nonatomic,readonly) UIView * loupePlayerView; 
@property (getter=isReadyToPlay,nonatomic,readonly) BOOL readyToPlay; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@required
-(BOOL)isPlaying;
-(void)pause;
-(void)play;
-(void)invalidateComposition;
-(BOOL)isReadyToPlay;
-(void)requestPlayerItemWithCompletion:(/*^block*/id)arg1;
-(UIView *)loupePlayerView;
-(void)applyTrimTimeRange:(SCD_Struct_PX9)arg1;
-(void)stopPeriodicTimeObserver;
-(void)startPeriodicTimeObserver;
-(void)setPlayerObserver:(id)arg1;
-(void)seekToTime:(SCD_Struct_PX8)arg1 untrimmed:(BOOL)arg2 exact:(BOOL)arg3;
-(SCD_Struct_PX9)trimRange;
-(void)seekToTime:(SCD_Struct_PX8)arg1;
-(id<PXTrimToolPlayerObserver>)playerObserver;

@end

