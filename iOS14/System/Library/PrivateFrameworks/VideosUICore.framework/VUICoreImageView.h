/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/

#import <VideosUICore/VideosUICore-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImage, UIImageView, UIColor, CAFilter, VUIImageProxy, UIImageSymbolConfiguration;

@interface VUICoreImageView : UIControl {

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
	BOOL __enableEdgeAntialiasingOnSelected;
	BOOL _imageLoaded;
	BOOL __symbolImage;
	BOOL __resourceImage;
	BOOL __scaleToSize;
	UIImage* _placeholderImage;
	VUIImageProxy* _imageProxy;
	/*^block*/id _dynamicProxyProvider;
	UIColor* __tintColor;
	UIColor* __darkTintColor;
	UIImageSymbolConfiguration* _preferredSymbolConfiguration;
	/*^block*/id _completion;
	CGSize __scaleSize;

}

@property (nonatomic,copy) id completion;                                                                                                     //@synthesize completion=_completion - In the implementation block
@property (assign,getter=isImageLoaded,nonatomic) BOOL imageLoaded;                                                                           //@synthesize imageLoaded=_imageLoaded - In the implementation block
@property (assign,getter=_isSymbolImage,nonatomic) BOOL _symbolImage;                                                                         //@synthesize _symbolImage=__symbolImage - In the implementation block
@property (assign,getter=_isResourceImage,nonatomic) BOOL _resourceImage;                                                                     //@synthesize _resourceImage=__resourceImage - In the implementation block
@property (assign,getter=_shouldScaleToSize,nonatomic) BOOL _scaleToSize;                                                                     //@synthesize _scaleToSize=__scaleToSize - In the implementation block
@property (assign,nonatomic) CGSize _scaleSize;                                                                                               //@synthesize _scaleSize=__scaleSize - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * placeholderImage;                                                                                      //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) BOOL imageContainsCornerRadius;                                                                                  //@synthesize imageContainsCornerRadius=_imageContainsCornerRadius - In the implementation block
@property (nonatomic,retain) VUIImageProxy * imageProxy;                                                                                      //@synthesize imageProxy=_imageProxy - In the implementation block
@property (nonatomic,copy) id dynamicProxyProvider;                                                                                           //@synthesize dynamicProxyProvider=_dynamicProxyProvider - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor;                                                                      //@synthesize _tintColor=__tintColor - In the implementation block
@property (setter=_setDarkTintColor:,nonatomic,retain) UIColor * _darkTintColor;                                                              //@synthesize _darkTintColor=__darkTintColor - In the implementation block
@property (setter=_setFocusedColor:,nonatomic,retain) UIColor * _focusedColor;                                                                //@synthesize _focusedColor=__focusedColor - In the implementation block
@property (assign,setter=_setEnableEdgeAntialiasingOnSelected:,nonatomic) BOOL _enableEdgeAntialiasingOnSelected;                             //@synthesize _enableEdgeAntialiasingOnSelected=__enableEdgeAntialiasingOnSelected - In the implementation block
@property (setter=_setPreferredSymbolConfiguration:,nonatomic,retain) UIImageSymbolConfiguration * preferredSymbolConfiguration;              //@synthesize preferredSymbolConfiguration=_preferredSymbolConfiguration - In the implementation block
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_imageView;
-(long long)contentMode;
-(void)_setTintColor:(id)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(void)_updateTintColor;
-(CGSize)intrinsicContentSize;
-(double)_continuousCornerRadius;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(UIColor *)_tintColor;
-(double)_cornerRadius;
-(void)_updateCornerRadius;
-(id)completion;
-(void)setBackgroundColor:(id)arg1 ;
-(UIImage *)image;
-(id)backgroundColor;
-(double)cornerRadius;
-(void)_setImage:(id)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)_setContentRectInPixels:(CGRect)arg1 forContentSize:(CGSize)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)placeholderImage;
-(BOOL)_isSymbolImage;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_resetContentRect;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)_setCornerRadius:(double)arg1 ;
-(void)_updateImageView;
-(CGSize)_scaleSize;
-(void)setCornerRadius:(double)arg1 ;
-(UIImageSymbolConfiguration *)preferredSymbolConfiguration;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isImageLoaded;
-(VUIImageProxy *)imageProxy;
-(void)_setFocusedColor:(id)arg1 ;
-(void)setImageProxy:(VUIImageProxy *)arg1 ;
-(void)setImageContainsCornerRadius:(BOOL)arg1 ;
-(void)setImageLoaded:(BOOL)arg1 ;
-(void)_setDarkTintColor:(id)arg1 ;
-(void)setImageProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDynamicProxyProvider:(id)arg1 ;
-(void)_loadImage;
-(UIColor *)_darkTintColor;
-(id)_imageProxyWithSize:(CGSize)arg1 ;
-(BOOL)_enableEdgeAntialiasingOnSelected;
-(void)_updateFlatImageWithImage:(id)arg1 ;
-(void)_reloadImageForLayoutDirectionChange;
-(void)_setPreferredSymbolConfiguration:(id)arg1 ;
-(BOOL)imageContainsCornerRadius;
-(id)dynamicProxyProvider;
-(UIColor *)_focusedColor;
-(void)_setEnableEdgeAntialiasingOnSelected:(BOOL)arg1 ;
-(void)set_symbolImage:(BOOL)arg1 ;
-(void)set_resourceImage:(BOOL)arg1 ;
-(void)set_scaleToSize:(BOOL)arg1 ;
-(void)set_scaleSize:(CGSize)arg1 ;
-(BOOL)_isResourceImage;
-(BOOL)_shouldScaleToSize;
@end

