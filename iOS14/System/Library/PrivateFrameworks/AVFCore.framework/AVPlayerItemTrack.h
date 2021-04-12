/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVPlayerItemTrackInternal, AVAssetTrack;

@interface AVPlayerItemTrack : NSObject {

	AVPlayerItemTrackInternal* _playerItemTrack;

}

@property (nonatomic,readonly) AVAssetTrack * assetTrack; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) float currentVideoFrameRate; 
+(id)playerItemTrackWithFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 readyForInspection:(BOOL)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5 ;
-(id)_playerItem;
-(void)_attachToFigPlaybackItemOfPlayerItem:(id)arg1 ;
-(void)_transferCachedValuesToFig;
-(void)_transferLoudnessInfoToFig;
-(void)_transferActiveHapticChannelIndexToFig;
-(void)_transferVideoEnhancementOptionsToFig;
-(id)_weakReferenceToPlayerItem;
-(BOOL)disableColorMatching;
-(id)effectiveLoudnessInfo;
-(float)hapticVolume;
-(void)setEnabled:(BOOL)arg1 ;
-(id)loudnessInfo;
-(int)trackID;
-(id)description;
-(void)setVideoEnhancementFilterOptions:(id)arg1 ;
-(void)_transferEnabledToFig;
-(void)_transferHapticVolumeToFig;
-(unsigned long long)hash;
-(void)setActiveHapticChannelIndex:(long long)arg1 ;
-(long long)activeHapticChannelIndex;
-(void)setLoudnessInfo:(id)arg1 ;
-(id)videoEnhancementFilterOptions;
-(BOOL)isEnabled;
-(void)_respondToFigPlaybackItemBecomingReadyForInpection;
-(id)_initWithFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 readyForInspection:(BOOL)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5 ;
-(float)currentVideoFrameRate;
-(void)_transferDisableColorMatchingToFig;
-(id)fallbackTrack;
-(AVAssetTrack *)assetTrack;
-(void)setDisableColorMatching:(BOOL)arg1 ;
-(void)setHapticVolume:(float)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

