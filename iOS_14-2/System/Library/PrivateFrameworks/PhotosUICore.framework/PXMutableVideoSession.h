/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXMutableVideoSession <NSObject>
@property (assign,nonatomic) SCD_Struct_PX9 playbackTimeRange; 
@property (assign,nonatomic) BOOL seekToBeginningAtEnd; 
@property (assign,getter=isLoopingEnabled,nonatomic) BOOL loopingEnabled; 
@property (assign,nonatomic) long long desiredPlayState; 
@property (assign,nonatomic) BOOL preventsSleepDuringVideoPlayback; 
@property (assign,nonatomic) BOOL allowsExternalPlayback; 
@required
-(BOOL)allowsExternalPlayback;
-(BOOL)isLoopingEnabled;
-(void)setDesiredPlayState:(long long)arg1;
-(long long)desiredPlayState;
-(void)setAllowsExternalPlayback:(BOOL)arg1;
-(void)setPreventsSleepDuringVideoPlayback:(BOOL)arg1;
-(void)setVolume:(float)arg1 withFade:(BOOL)arg2;
-(void)setSeekToBeginningAtEnd:(BOOL)arg1;
-(void)setPlaybackTimeRange:(SCD_Struct_PX9)arg1;
-(void)setAudioSessionCategory:(id)arg1 mode:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4;
-(void)setLoopingEnabled:(BOOL)arg1;
-(BOOL)preventsSleepDuringVideoPlayback;
-(SCD_Struct_PX9)playbackTimeRange;
-(BOOL)seekToBeginningAtEnd;

@end

