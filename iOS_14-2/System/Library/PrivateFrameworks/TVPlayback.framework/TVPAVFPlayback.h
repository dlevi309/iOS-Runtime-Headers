/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

