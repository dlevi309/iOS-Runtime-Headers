/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/

@class AVPlayer;


@protocol TVPAVFPlayback <TVPPlayback>
@property (nonatomic,readonly) AVPlayer * avPlayer; 
@optional
-(void)setElapsedTime:(double)arg1 orPlaybackDate:(id)arg2 withAVKitCompletion:(/*^block*/id)arg3;

@required
-(AVPlayer *)avPlayer;
-(void)removeWeakReferenceToVideoView:(id)arg1;
-(void)addWeakReferenceToVideoView:(id)arg1;

@end

