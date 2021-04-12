/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXAssetsSceneSettings : PXSettings {

	BOOL _enableImagePreheating;
	BOOL _showBordersOnAnimatedContent;
	BOOL _animateContentByDefault;
	BOOL _allowLivePhotoPlayback;
	BOOL _playLivePhotosAsLoops;
	BOOL _allowLoopingVideoPlayback;
	BOOL _allowVideoPlayback;
	BOOL _allowAnimatedImagePlayback;
	double _transitionDuration;

}

@property (assign,nonatomic) double transitionDuration;                      //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (assign,nonatomic) BOOL enableImagePreheating;                     //@synthesize enableImagePreheating=_enableImagePreheating - In the implementation block
@property (assign,nonatomic) BOOL showBordersOnAnimatedContent;              //@synthesize showBordersOnAnimatedContent=_showBordersOnAnimatedContent - In the implementation block
@property (assign,nonatomic) BOOL animateContentByDefault;                   //@synthesize animateContentByDefault=_animateContentByDefault - In the implementation block
@property (assign,nonatomic) BOOL allowLivePhotoPlayback;                    //@synthesize allowLivePhotoPlayback=_allowLivePhotoPlayback - In the implementation block
@property (assign,nonatomic) BOOL playLivePhotosAsLoops;                     //@synthesize playLivePhotosAsLoops=_playLivePhotosAsLoops - In the implementation block
@property (assign,nonatomic) BOOL allowLoopingVideoPlayback;                 //@synthesize allowLoopingVideoPlayback=_allowLoopingVideoPlayback - In the implementation block
@property (assign,nonatomic) BOOL allowVideoPlayback;                        //@synthesize allowVideoPlayback=_allowVideoPlayback - In the implementation block
@property (assign,nonatomic) BOOL allowAnimatedImagePlayback;                //@synthesize allowAnimatedImagePlayback=_allowAnimatedImagePlayback - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setTransitionDuration:(double)arg1 ;
-(id)parentSettings;
-(void)setDefaultValues;
-(BOOL)playLivePhotosAsLoops;
-(void)setAllowLoopingVideoPlayback:(BOOL)arg1 ;
-(double)transitionDuration;
-(BOOL)allowLivePhotoPlayback;
-(void)setEnableImagePreheating:(BOOL)arg1 ;
-(BOOL)showBordersOnAnimatedContent;
-(BOOL)allowAnimatedImagePlayback;
-(void)setShowBordersOnAnimatedContent:(BOOL)arg1 ;
-(void)setAllowLivePhotoPlayback:(BOOL)arg1 ;
-(BOOL)allowVideoPlayback;
-(BOOL)animateContentByDefault;
-(void)setAllowAnimatedImagePlayback:(BOOL)arg1 ;
-(BOOL)allowLoopingVideoPlayback;
-(void)setAllowVideoPlayback:(BOOL)arg1 ;
-(void)setPlayLivePhotosAsLoops:(BOOL)arg1 ;
-(void)setAnimateContentByDefault:(BOOL)arg1 ;
-(BOOL)enableImagePreheating;
@end

