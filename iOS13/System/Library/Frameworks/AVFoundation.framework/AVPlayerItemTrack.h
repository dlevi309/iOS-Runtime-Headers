/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVPlayerItemTrackInternal, AVAssetTrack;

@interface AVPlayerItemTrack : NSObject {

	AVPlayerItemTrackInternal* _playerItemTrack;

}

@property (nonatomic,readonly) AVAssetTrack * assetTrack; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) float currentVideoFrameRate; 
+(id)playerItemTrackWithFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 readyForInspection:(BOOL)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(int)trackID;
-(AVAssetTrack *)assetTrack;
-(id)loudnessInfo;
-(void)setLoudnessInfo:(id)arg1 ;
-(void)_attachToFigPlaybackItemOfPlayerItem:(id)arg1 ;
-(void)_respondToFigPlaybackItemBecomingReadyForInpection;
-(id)_playerItem;
-(id)videoEnhancementFilterOptions;
-(BOOL)disableColorMatching;
-(long long)activeHapticChannelIndex;
-(float)hapticVolume;
-(id)_initWithFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 readyForInspection:(BOOL)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5 ;
-(id)_weakReferenceToPlayerItem;
-(void)_transferEnabledToFig;
-(void)_transferLoudnessInfoToFig;
-(void)_transferVideoEnhancementOptionsToFig;
-(void)_transferDisableColorMatchingToFig;
-(void)_transferActiveHapticChannelIndexToFig;
-(void)_transferHapticVolumeToFig;
-(void)_transferCachedValuesToFig;
-(id)fallbackTrack;
-(float)currentVideoFrameRate;
-(id)effectiveLoudnessInfo;
-(void)setVideoEnhancementFilterOptions:(id)arg1 ;
-(void)setDisableColorMatching:(BOOL)arg1 ;
-(void)setActiveHapticChannelIndex:(long long)arg1 ;
-(void)setHapticVolume:(float)arg1 ;
@end

