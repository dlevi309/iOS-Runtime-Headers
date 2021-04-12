/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@protocol CLKMonochromeFilterProvider;
@class UIImageView, CALayer, UIView, UIColor, UIImage, NTKColoringImageView, CLKDevice, NSString;

@interface NTKHandView : UIView <CLKMonochromeComplicationView> {

	UIImageView* _shadowImageView;
	CALayer* _inlayLayer;
	UIView* _handDotView;
	BOOL _shadowsHidden;
	id<CLKMonochromeFilterProvider> _filterProvider;
	UIColor* _color;
	UIImage* _image;
	double _zRotation;
	double _scale;
	UIColor* _inlayColor;
	UIImage* _shadowImage;
	UIView* _transitionContainerView;
	UIColor* _handDotColor;
	NTKColoringImageView* _handImageView;
	CLKDevice* _device;
	unsigned long long _style;
	UIEdgeInsets _inlayInsets;
	UIEdgeInsets _shadowInsets;

}

@property (nonatomic,readonly) CALayer * inlayLayer; 
@property (nonatomic,readonly) UIView * handDotView;                                             //@synthesize handDotView=_handDotView - In the implementation block
@property (nonatomic,readonly) NTKColoringImageView * handImageView;                             //@synthesize handImageView=_handImageView - In the implementation block
@property (nonatomic,readonly) CLKDevice * device;                                               //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                         //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIColor * color;                                                    //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                    //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) double zRotation;                                                   //@synthesize zRotation=_zRotation - In the implementation block
@property (assign,nonatomic) double scale;                                                       //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) UIColor * inlayColor;                                               //@synthesize inlayColor=_inlayColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets inlayInsets;                                           //@synthesize inlayInsets=_inlayInsets - In the implementation block
@property (assign,nonatomic) BOOL shadowsHidden;                                                 //@synthesize shadowsHidden=_shadowsHidden - In the implementation block
@property (assign,nonatomic) UIEdgeInsets shadowInsets;                                          //@synthesize shadowInsets=_shadowInsets - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                                              //@synthesize shadowImage=_shadowImage - In the implementation block
@property (nonatomic,retain) UIView * transitionContainerView;                                   //@synthesize transitionContainerView=_transitionContainerView - In the implementation block
@property (nonatomic,retain) UIColor * handDotColor;                                             //@synthesize handDotColor=_handDotColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
-(double)scale;
-(unsigned long long)style;
-(CLKDevice *)device;
-(UIColor *)color;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)layoutSubviews;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)_updateTransform;
-(UIView *)transitionContainerView;
-(void)setTransitionContainerView:(UIView *)arg1 ;
-(UIEdgeInsets)shadowInsets;
-(double)zRotation;
-(void)setZRotation:(double)arg1 ;
-(id)initWithImage:(id)arg1 forDevice:(id)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(void)setInlayColor:(UIColor *)arg1 ;
-(void)setHandDotColor:(UIColor *)arg1 ;
-(UIColor *)inlayColor;
-(void)setInlayInsets:(UIEdgeInsets)arg1 ;
-(id)initWithImage:(id)arg1 style:(unsigned long long)arg2 forDevice:(id)arg3 ;
-(UIEdgeInsets)inlayInsets;
-(UIView *)handDotView;
-(void)setupHandDotViewWithDiameter:(double)arg1 ;
-(void)_updateShadows;
-(void)_layoutInlayLayer;
-(void)noModelUpdate_setColor:(id)arg1 ;
-(void)_adjustHandImageSubviewOrder;
-(void)noModelUpdate_setInlayColor:(id)arg1 ;
-(CALayer *)inlayLayer;
-(void)noModelUpdate_setInlayInsets:(UIEdgeInsets)arg1 ;
-(void)noModelUpdate_setHandDotColor:(id)arg1 ;
-(void)setShadowsHidden:(BOOL)arg1 ;
-(BOOL)shadowsHidden;
-(void)setShadowInsets:(UIEdgeInsets)arg1 ;
-(UIColor *)handDotColor;
-(NTKColoringImageView *)handImageView;
@end

