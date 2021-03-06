/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/JTCompositionClipsDataSource.h>

@class JTClip, NSString;

@interface CFXExportClipDataSource : NSObject <JTCompositionClipsDataSource> {

	JTClip* _clip;

}

@property (nonatomic,retain) JTClip * clip;                         //@synthesize clip=_clip - In the implementation block
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
-(BOOL)use2160Pcontent:(BOOL)arg1 ;
-(BOOL)duckAllAudioClips;
-(id)backgroundAudioClip;
-(BOOL)fullScreenPlaybackOnExternalDisplay;
-(BOOL)dontRenderLiveTitles;
-(id)initWithClip:(id)arg1 ;
-(long long)indexOfClip:(id)arg1 ;
@end

