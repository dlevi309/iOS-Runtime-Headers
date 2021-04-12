/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImage, UIImageView, UIColor, CAFilter, TVImageProxy, UIImageSymbolConfiguration;

@interface _TVImageView : UIControl {

	BOOL _rendersImageAsTemplates;
	UIImage* _image;
	UIImageView* _imageView;
	UIColor* __focusedColor;
	long long _imageContentMode;
	UIImage* _flatImage;
	UIImage* _flatHighlightImage;
	BOOL _selected;
	double _cornerRadius;
	BOOL _continuousCorners;
	CAFilter* _highlightFilter;
	BOOL _imageContainsCornerRadius;
	BOOL _imageLoaded;
	BOOL __enableEdgeAntialiasingOnSelected;
	UIImage* _placeholderImage;
	TVImageProxy* _imageProxy;
	/*^block*/id _dynamicProxyProvider;
	/*^block*/id _completion;
	UIColor* __tintColor;
	UIColor* __darkTintColor;
	UIImageSymbolConfiguration* _preferredSymbolConfiguration;

}

@property (nonatomic,copy) id completion;                                                                                                     //@synthesize completion=_completion - In the implementation block
@property (assign,getter=isImageLoaded,nonatomic) BOOL imageLoaded;                                                                           //@synthesize imageLoaded=_imageLoaded - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor;                                                                      //@synthesize _tintColor=__tintColor - In the implementation block
@property (setter=_setDarkTintColor:,nonatomic,retain) UIColor * _darkTintColor;                                                              //@synthesize _darkTintColor=__darkTintColor - In the implementation block
@property (setter=_setFocusedColor:,nonatomic,retain) UIColor * _focusedColor;                                                                //@synthesize _focusedColor=__focusedColor - In the implementation block
@property (assign,setter=_setEnableEdgeAntialiasingOnSelected:,nonatomic) BOOL _enableEdgeAntialiasingOnSelected;                             //@synthesize _enableEdgeAntialiasingOnSelected=__enableEdgeAntialiasingOnSelected - In the implementation block
@property (setter=_setPreferredSymbolConfiguration:,nonatomic,retain) UIImageSymbolConfiguration * preferredSymbolConfiguration;              //@synthesize preferredSymbolConfiguration=_preferredSymbolConfiguration - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * placeholderImage;                                                                                      //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) BOOL imageContainsCornerRadius;                                                                                  //@synthesize imageContainsCornerRadius=_imageContainsCornerRadius - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy;                                                                                       //@synthesize imageProxy=_imageProxy - In the implementation block
@property (nonatomic,copy) id dynamicProxyProvider;                                                                                           //@synthesize dynamicProxyProvider=_dynamicProxyProvider - In the implementation block
-(void)dealloc;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(id)backgroundColor;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)layoutSubviews;
-(id)_imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(UIColor *)_tintColor;
-(double)_cornerRadius;
-(void)_updateImageView;
-(void)_updateTintColor;
-(void)_setCornerRadius:(double)arg1 ;
-(double)_continuousCornerRadius;
-(double)cornerRadius;
-(void)willMoveToWindow:(id)arg1 ;
-(UIImageSymbolConfiguration *)preferredSymbolConfiguration;
-(void)_setTintColor:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)contentMode;
-(void)_setImage:(id)arg1 ;
-(void)_setContentRectInPixels:(CGRect)arg1 forContentSize:(CGSize)arg2 ;
-(void)_resetContentRect;
-(void)_updateCornerRadius;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(BOOL)isImageLoaded;
-(UIColor *)_darkTintColor;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(TVImageProxy *)imageProxy;
-(id)_imageProxyWithSize:(CGSize)arg1 ;
-(void)_loadImage;
-(void)setImageProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setImageLoaded:(BOOL)arg1 ;
-(BOOL)_enableEdgeAntialiasingOnSelected;
-(void)setImageContainsCornerRadius:(BOOL)arg1 ;
-(void)_reloadImageForLayoutDirectionChange;
-(void)_setDarkTintColor:(id)arg1 ;
-(void)_setFocusedColor:(id)arg1 ;
-(void)_setPreferredSymbolConfiguration:(id)arg1 ;
-(BOOL)imageContainsCornerRadius;
-(id)dynamicProxyProvider;
-(void)setDynamicProxyProvider:(id)arg1 ;
-(UIColor *)_focusedColor;
-(void)_setEnableEdgeAntialiasingOnSelected:(BOOL)arg1 ;
@end

