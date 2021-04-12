/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol JTCompositionClipsDataSource <NSObject>
@optional
-(BOOL)containsEffectsThatRequireCustomRendering;

@required
-(int)duration;
-(double)imageScale;
-(CGSize*)naturalSize;
-(BOOL)isFullScreen;
-(BOOL)supportsDeepColor;
-(int)timeScale;
-(int)frameRate;
-(id)currentClip;
-(long long)clipCount;
-(id)clipAtIndex:(long long)arg1;
-(BOOL)screenCanShow2160P;
-(BOOL)isExporting;
-(BOOL)use2160Pcontent:(BOOL)arg1;
-(BOOL)duckAllAudioClips;
-(id)backgroundAudioClip;
-(BOOL)fullScreenPlaybackOnExternalDisplay;
-(BOOL)dontRenderLiveTitles;
-(long long)indexOfClip:(id)arg1;

@end

