/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)preloadFramesIfNeeded;
-(BOOL)automaticModeAllowed;
-(id)initWithAutomaticModeAllowed:(BOOL)arg1 ;
-(void)_setAnimationFramesByColor:(id)arg1 ;
-(NSDictionary *)_animationFramesByColor;
-(id)_colors;
-(id)_tintColorForMode:(long long)arg1 ;
-(id)_actuallyLoadEnablingAnimationImagesForColors:(id)arg1 scale:(double)arg2 ;
-(id)framesForLivePhotoMode:(long long)arg1 ;
@end

