/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <UIKitCore/UIView.h>

@class JFXOverlayEffectFrame, JFXEffectAnimationDelegate, CALayer, JFXOverlayEffectTransforms;

@interface JFXOverlayEffectAnimationView : UIView {

	JFXOverlayEffectFrame* _fromEffectFrame;
	JFXOverlayEffectFrame* _toEffectFrame;
	JFXEffectAnimationDelegate* _animationDelegate;
	CALayer* _transformLayer;
	CALayer* _additionalTransformLayer;
	CALayer* _trackingTransformLayer;
	CALayer* _cameraTransformLayer;

}

@property (nonatomic,retain) JFXOverlayEffectFrame * fromEffectFrame;                             //@synthesize fromEffectFrame=_fromEffectFrame - In the implementation block
@property (nonatomic,retain) JFXOverlayEffectFrame * toEffectFrame;                               //@synthesize toEffectFrame=_toEffectFrame - In the implementation block
@property (nonatomic,retain) JFXEffectAnimationDelegate * animationDelegate;                      //@synthesize animationDelegate=_animationDelegate - In the implementation block
@property (nonatomic,retain) CALayer * transformLayer;                                            //@synthesize transformLayer=_transformLayer - In the implementation block
@property (nonatomic,retain) CALayer * additionalTransformLayer;                                  //@synthesize additionalTransformLayer=_additionalTransformLayer - In the implementation block
@property (nonatomic,retain) CALayer * trackingTransformLayer;                                    //@synthesize trackingTransformLayer=_trackingTransformLayer - In the implementation block
@property (nonatomic,retain) CALayer * cameraTransformLayer;                                      //@synthesize cameraTransformLayer=_cameraTransformLayer - In the implementation block
@property (nonatomic,readonly) double fractionComplete; 
@property (nonatomic,readonly) JFXOverlayEffectTransforms * currentEffectTransforms; 
-(double)fractionComplete;
-(void)setAnimationDelegate:(JFXEffectAnimationDelegate *)arg1 ;
-(void)animate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(JFXEffectAnimationDelegate *)animationDelegate;
-(void)setFromEffectFrame:(JFXOverlayEffectFrame *)arg1 ;
-(void)setToEffectFrame:(JFXOverlayEffectFrame *)arg1 ;
-(JFXOverlayEffectFrame *)fromEffectFrame;
-(JFXOverlayEffectFrame *)toEffectFrame;
-(void)setTransformLayer:(CALayer *)arg1 ;
-(void)setAdditionalTransformLayer:(CALayer *)arg1 ;
-(void)setTrackingTransformLayer:(CALayer *)arg1 ;
-(void)setCameraTransformLayer:(CALayer *)arg1 ;
-(CALayer *)transformLayer;
-(CALayer *)additionalTransformLayer;
-(CALayer *)trackingTransformLayer;
-(CALayer *)cameraTransformLayer;
-(id)initWithEffectFrame:(id)arg1 toEffectFrame:(id)arg2 ;
-(JFXOverlayEffectTransforms *)currentEffectTransforms;
@end

