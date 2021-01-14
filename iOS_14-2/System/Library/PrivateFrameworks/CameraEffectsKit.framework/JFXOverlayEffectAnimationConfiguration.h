/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class JFXOverlayEffectFrame;

@interface JFXOverlayEffectAnimationConfiguration : NSObject {

	JFXOverlayEffectFrame* _startFrame;
	JFXOverlayEffectFrame* _endFrame;

}

@property (nonatomic,readonly) JFXOverlayEffectFrame * startFrame;              //@synthesize startFrame=_startFrame - In the implementation block
@property (nonatomic,readonly) JFXOverlayEffectFrame * endFrame;                //@synthesize endFrame=_endFrame - In the implementation block
-(JFXOverlayEffectFrame *)endFrame;
-(JFXOverlayEffectFrame *)startFrame;
-(id)initWithStartFrame:(id)arg1 endFrame:(id)arg2 ;
@end

