/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class NSDictionary;

@interface CAMLivePhotoAnimationCache : NSObject {

	BOOL _automaticModeAllowed;
	NSDictionary* __animationFramesByColor;

}

@property (getter=_isEmpty,nonatomic,readonly) BOOL _empty; 
@property (setter=_setAnimationFramesByColor:,nonatomic,retain) NSDictionary * _animationFramesByColor;              //@synthesize _animationFramesByColor=__animationFramesByColor - In the implementation block
@property (nonatomic,readonly) BOOL automaticModeAllowed;                                                            //@synthesize automaticModeAllowed=_automaticModeAllowed - In the implementation block
-(BOOL)_isEmpty;
-(id)_colors;
-(id)initWithAutomaticModeAllowed:(BOOL)arg1 ;
-(void)preloadFramesIfNeeded;
-(id)framesForLivePhotoMode:(long long)arg1 ;
-(id)_actuallyLoadEnablingAnimationImagesForColors:(id)arg1 scale:(double)arg2 ;
-(void)_setAnimationFramesByColor:(id)arg1 ;
-(id)_tintColorForMode:(long long)arg1 ;
-(NSDictionary *)_animationFramesByColor;
-(BOOL)automaticModeAllowed;
@end

