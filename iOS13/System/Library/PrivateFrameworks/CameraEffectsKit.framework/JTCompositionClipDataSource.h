/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/JTCompositionClipsDataSource.h>

@class JTClip, JTAudioClip, NSString;

@interface JTCompositionClipDataSource : NSObject <JTCompositionClipsDataSource> {

	BOOL _dontRenderLiveTitles;
	BOOL _duckAllAudioClips;
	JTClip* _clip;
	JTAudioClip* _backgroundAudioClip;

}

@property (assign,nonatomic) BOOL dontRenderLiveTitles;                      //@synthesize dontRenderLiveTitles=_dontRenderLiveTitles - In the implementation block
@property (assign,nonatomic) BOOL duckAllAudioClips;                         //@synthesize duckAllAudioClips=_duckAllAudioClips - In the implementation block
@property (nonatomic,retain) JTClip * clip;                                  //@synthesize clip=_clip - In the implementation block
@property (nonatomic,retain) JTAudioClip * backgroundAudioClip;              //@synthesize backgroundAudioClip=_backgroundAudioClip - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)duration;
-(JTClip *)clip;
-(double)imageScale;
-(CGSize)naturalSize;
-(BOOL)isFullScreen;
-(void)setClip:(JTClip *)arg1 ;
-(BOOL)supportsDeepColor;
-(int)timeScale;
-(int)frameRate;
-(id)currentClip;
-(long long)clipCount;
-(id)clipAtIndex:(long long)arg1 ;
-(BOOL)screenCanShow2160P;
-(BOOL)isExporting;
-(BOOL)containsEffectsThatRequireCustomRendering;
-(BOOL)use2160Pcontent:(BOOL)arg1 ;
-(BOOL)duckAllAudioClips;
-(JTAudioClip *)backgroundAudioClip;
-(BOOL)fullScreenPlaybackOnExternalDisplay;
-(BOOL)dontRenderLiveTitles;
-(long long)indexOfClip:(id)arg1 ;
-(id)initWithClip:(id)arg1 backgroundAudioClip:(id)arg2 ;
-(void)setDontRenderLiveTitles:(BOOL)arg1 ;
-(void)setDuckAllAudioClips:(BOOL)arg1 ;
-(void)setBackgroundAudioClip:(JTAudioClip *)arg1 ;
@end

