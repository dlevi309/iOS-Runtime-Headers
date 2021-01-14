/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
*/

@class NSArray;


@protocol NUMediaPlayer <NSObject>
@property (nonatomic,readonly) long long playbackState; 
@property (nonatomic,readonly) SCD_Struct_NU0 mediaDuration; 
@property (nonatomic,readonly) SCD_Struct_NU0 currentTime; 
@property (readonly) NSArray * loadedTimeRanges; 
@property (assign,nonatomic) double playbackRate; 
@property (assign,nonatomic) long long playbackMode; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@required
-(void)setPlaybackRate:(double)arg1;
-(id)addPlaybackTimeObserver:(/*^block*/id)arg1;
-(id)addPlaybackStateObserver:(/*^block*/id)arg1;
-(double)playbackRate;
-(NSArray *)loadedTimeRanges;
-(long long)playbackState;
-(void)pause;
-(void)play;
-(void)seekToTime:(SCD_Struct_NU0)arg1 exact:(BOOL)arg2;
-(void)seekToTime:(SCD_Struct_NU0)arg1 toleranceBefore:(SCD_Struct_NU0)arg2 toleranceAfter:(SCD_Struct_NU0)arg3;
-(SCD_Struct_NU0)mediaDuration;
-(SCD_Struct_NU0)currentTime;
-(long long)playbackMode;
-(void)setMuted:(BOOL)arg1;
-(void)removeObserver:(id)arg1;
-(void)setPlaybackMode:(long long)arg1;
-(void)stepByCount:(long long)arg1;
-(BOOL)isMuted;
-(void)seekToTime:(SCD_Struct_NU0)arg1;
-(void)seekToTime:(SCD_Struct_NU0)arg1 toleranceBefore:(SCD_Struct_NU0)arg2 toleranceAfter:(SCD_Struct_NU0)arg3 forceSeek:(BOOL)arg4;
-(id)addExternalPlaybackObserver:(/*^block*/id)arg1;

@end

