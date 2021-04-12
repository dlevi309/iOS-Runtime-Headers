/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/_UIFloatingContentView.h>
#import <libobjc.A.dylib/_UIFloatingContentViewDelegate.h>
#import <TVMLKit/TVAuxiliaryViewSelecting.h>

@class UIView, TVMonogramViewConfiguration, _TVMonogramDescription, UIImage, _TVImageView, TVImageProxy, NSString;

@interface _TVMonogramView : _UIFloatingContentView <_UIFloatingContentViewDelegate, TVAuxiliaryViewSelecting> {

	UIView* _placeholderView;
	UIView* _unfocusedShadowView;
	UIView* _focusedShadowView;
	BOOL _isSelected;
	BOOL _focusedStateEnabled;
	TVMonogramViewConfiguration* _configuration;
	_TVMonogramDescription* _monogramDescription;
	UIImage* _image;
	UIImage* _placeholderImage;
	double _unfocusedImageAlpha;
	UIView* _overlayView;
	/*^block*/id _pressCompletionBlock;
	_TVImageView* _imageView;
	TVImageProxy* _imageProxy;

}

@property (nonatomic,copy) id pressCompletionBlock;                                              //@synthesize pressCompletionBlock=_pressCompletionBlock - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                                           //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy;                                          //@synthesize imageProxy=_imageProxy - In the implementation block
@property (nonatomic,readonly) TVMonogramViewConfiguration * configuration;                      //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) _TVMonogramDescription * monogramDescription;                       //@synthesize monogramDescription=_monogramDescription - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                    //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                         //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) double unfocusedImageAlpha;                                         //@synthesize unfocusedImageAlpha=_unfocusedImageAlpha - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                               //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,getter=isFocusedStateEnabled,nonatomic) BOOL focusedStateEnabled;              //@synthesize focusedStateEnabled=_focusedStateEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIView *)overlayView;
-(_TVImageView *)imageView;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIImage *)image;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 ;
-(TVMonogramViewConfiguration *)configuration;
-(void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2 ;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(TVImageProxy *)imageProxy;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)setFocusedStateEnabled:(BOOL)arg1 ;
-(void)setMonogramDescription:(_TVMonogramDescription *)arg1 ;
-(double)unfocusedImageAlpha;
-(void)_updatePlaceholerView;
-(void)_loadWithMonogramDescription:(id)arg1 imageProxy:(id)arg2 ;
-(void)_updateUnfocusedShadowFrameAndLayerWithFrame:(CGRect)arg1 ;
-(void)_updateAppearanceForSelectionStateWithCoordinator:(id)arg1 ;
-(void)setPressCompletionBlock:(id)arg1 ;
-(id)pressCompletionBlock;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(void)_updateFocusedShadowFrameAndLayerWithFrame:(CGRect)arg1 ;
-(_TVMonogramDescription *)monogramDescription;
-(void)setUnfocusedImageAlpha:(double)arg1 ;
-(BOOL)isFocusedStateEnabled;
@end

