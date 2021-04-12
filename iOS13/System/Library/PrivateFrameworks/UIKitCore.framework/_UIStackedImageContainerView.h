/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIImageViewOverlayViewDelegate.h>

@protocol UINamedLayerStack;
@class UIMotionEffectGroup, UIImage, NSObject, _UIStackedImageConfiguration, UIView, NSString;

@interface _UIStackedImageContainerView : UIView <_UIImageViewOverlayViewDelegate> {

	UIMotionEffectGroup* _stackMotionEffects;
	BOOL _installsMotionEffectsWhenFocused;
	UIImage* _stackImage;
	NSObject*<UINamedLayerStack> _constructedStackImage;
	_UIStackedImageConfiguration* _config;
	UIView* _overlayView;

}

@property (nonatomic,retain) UIView * overlayView;                                            //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIImage * stackImage;                                            //@synthesize stackImage=_stackImage - In the implementation block
@property (nonatomic,retain) NSObject*<UINamedLayerStack> constructedStackImage;              //@synthesize constructedStackImage=_constructedStackImage - In the implementation block
@property (nonatomic,copy) _UIStackedImageConfiguration * config;                             //@synthesize config=_config - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed; 
@property (assign,getter=isStackFocused,nonatomic) BOOL stackFocused; 
@property (assign,nonatomic) BOOL installsMotionEffectsWhenFocused;                           //@synthesize installsMotionEffectsWhenFocused=_installsMotionEffectsWhenFocused - In the implementation block
@property (assign,nonatomic) CGPoint focusDirection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(void)dealloc;
-(_UIStackedImageConfiguration *)config;
-(void)setConfig:(_UIStackedImageConfiguration *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isPressed;
-(void)setPressed:(BOOL)arg1 ;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
-(void)overlayView:(id)arg1 didChangeClipsToBounds:(BOOL)arg2 ;
-(void)setStackFocused:(BOOL)arg1 withFocusAnimationCoordinator:(id)arg2 ;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(CGPoint)focusDirection;
-(id)_imageContainerLayer;
-(void)_updateContainerLayerImages;
-(void)_setStackFocused:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(void)_installMotionEffects;
-(void)_uninstallMotionEffects;
-(BOOL)installsMotionEffectsWhenFocused;
-(BOOL)isStackFocused;
-(void)_updateOverlayLayer;
-(void)setStackImage:(UIImage *)arg1 ;
-(void)setConstructedStackImage:(NSObject*<UINamedLayerStack>)arg1 ;
-(void)setStackFocused:(BOOL)arg1 ;
-(void)setInstallsMotionEffectsWhenFocused:(BOOL)arg1 ;
-(UIImage *)stackImage;
-(NSObject*<UINamedLayerStack>)constructedStackImage;
@end

