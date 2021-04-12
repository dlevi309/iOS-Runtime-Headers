/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKPass, PKDynamicContentView, UIImageView, PKDynamicLayerConfiguration, PKDynamicLayerTransactionEffectConfiguration, UIImage, NSData, CAEmitterLayer, CALayer;

@interface PKDynamicLayerView : UIView {

	PKPass* _pass;
	PKDynamicContentView* _backgroundParallaxView;
	PKDynamicContentView* _neutralView;
	PKDynamicContentView* _foregroundParallaxView;
	PKDynamicContentView* _staticOverlayView;
	UIImageView* _staticFallbackView;
	PKDynamicLayerConfiguration* _dynamicLayerConfiguration;
	PKDynamicLayerTransactionEffectConfiguration* _transactionEffectConfiguration;
	UIImage* _transactionEffectEmitterImage;
	NSData* _transactionEffectShapeData;
	CAEmitterLayer* _transactionEffectLayer;
	CALayer* _dimmingLayer;
	BOOL _invalidated;
	BOOL _paused;
	BOOL _loaded;
	BOOL _effectiveMotionEnabled;
	BOOL _automaticallyLoadContent;
	BOOL _motionEnabled;

}

@property (assign,nonatomic) BOOL automaticallyLoadContent;                          //@synthesize automaticallyLoadContent=_automaticallyLoadContent - In the implementation block
@property (assign,getter=isMotionEnabled,nonatomic) BOOL motionEnabled;              //@synthesize motionEnabled=_motionEnabled - In the implementation block
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
-(void)_configureViews;
-(void)setPaused:(BOOL)arg1 ;
-(void)_configureDynamicViewsWithImageSet:(id)arg1 ;
-(void)_removeParallaxMotionEffect;
-(void)_addParallaxMotionEffect;
-(id)_dimmingLayerAnimationWithDuration:(double)arg1 ;
-(void)setAutomaticallyLoadContent:(BOOL)arg1 ;
-(BOOL)automaticallyLoadContent;
-(BOOL)isMotionEnabled;
-(void)layoutSubviews;
-(void)setMotionEnabled:(BOOL)arg1 ;
-(void)invalidate;
-(void)runTransactionEffect;
-(id)initWithFrame:(CGRect)arg1 pass:(id)arg2 automaticallyLoadContent:(BOOL)arg3 ;
-(void)loadContent;
-(BOOL)isLoaded;
-(void)_updateVisibility;
-(BOOL)isPaused;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 pass:(id)arg2 ;
@end

