/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/JFXTextEffectTransforms.h>

@class PVTransformAnimation, JFXFaceTrackedEffectTransform;

@interface JFXOverlayEffectTransforms : JFXTextEffectTransforms {

	PVTransformAnimation* _transformAnimation;
	JFXFaceTrackedEffectTransform* _faceTrackingTransform;

}

@property (nonatomic,copy) PVTransformAnimation * transformAnimation;                          //@synthesize transformAnimation=_transformAnimation - In the implementation block
@property (nonatomic,copy) JFXFaceTrackedEffectTransform * faceTrackingTransform;              //@synthesize faceTrackingTransform=_faceTrackingTransform - In the implementation block
+(id)transformsWithTransform:(id)arg1 transformAnimation:(id)arg2 faceTrackingTransform:(id)arg3 ;
+(id)transformsWithEffect:(id)arg1 ;
-(id)initWithEffect:(id)arg1 ;
-(PVTransformAnimation *)transformAnimation;
-(JFXFaceTrackedEffectTransform *)faceTrackingTransform;
-(id)initWithTransform:(id)arg1 transformAnimation:(id)arg2 faceTrackingTransform:(id)arg3 ;
-(void)applyToEffect:(id)arg1 ;
-(void)setTransformAnimation:(PVTransformAnimation *)arg1 ;
-(void)setFaceTrackingTransform:(JFXFaceTrackedEffectTransform *)arg1 ;
@end

