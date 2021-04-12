/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKCalloutView.h>

@class UIView, UIColor, CAShapeLayer, CALayer, UIImageView, UIImage;

@interface _MKBalloonCalloutView : MKCalloutView {

	UIView* _shadowView;
	UIView* _containerView;
	UIColor* _balloonTintColor;
	UIColor* _strokeColor;
	UIColor* _innerStrokeColor;
	CAShapeLayer* _balloonShape;
	CALayer* _balloonInnerStrokeLayer;
	UIImageView* _balloonBodyImageView;
	UIImageView* _tailView;
	UIView* _innerBackgroundView;
	UIImageView* _imageView;
	CGSize _intrinsicSize;
	CGSize _shadowSize;
	BOOL _originatesAsSmallBalloon;
	double _croppedImageScale;
	UIImageView* _contentViewMaskView;
	UIView* _contentView;
	long long _style;
	UIImage* _image;
	double _smallBalloonScale;

}

@property (nonatomic,readonly) long long style;                          //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) UIImage * image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIView * contentView;                       //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL originatesAsSmallBalloon;              //@synthesize originatesAsSmallBalloon=_originatesAsSmallBalloon - In the implementation block
@property (assign,nonatomic) double smallBalloonScale;                   //@synthesize smallBalloonScale=_smallBalloonScale - In the implementation block
@property (nonatomic,copy) UIColor * balloonTintColor;                   //@synthesize balloonTintColor=_balloonTintColor - In the implementation block
@property (nonatomic,copy) UIColor * strokeColor;                        //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,copy) UIColor * innerStrokeColor;                   //@synthesize innerStrokeColor=_innerStrokeColor - In the implementation block
-(long long)style;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)_commonInit;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(void)_updateStyle;
-(void)didMoveToWindow;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(BOOL)calloutContainsPoint:(CGPoint)arg1 ;
-(id)initWithAnnotationView:(id)arg1 ;
-(void)showAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(double)_innerDiameter;
-(void)setOriginatesAsSmallBalloon:(BOOL)arg1 ;
-(void)setSmallBalloonScale:(double)arg1 ;
-(void)_handleTapOnCallout:(id)arg1 ;
-(void)setBalloonTintColor:(UIColor *)arg1 ;
-(void)setInnerStrokeColor:(UIColor *)arg1 ;
-(CGRect)_centerFrame;
-(id)_generateInnerStrokeImage;
-(void)_updateCroppedImage;
-(void)showCalloutAnimated:(BOOL)arg1 ;
-(void)hideCalloutAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(UIColor *)balloonTintColor;
-(BOOL)originatesAsSmallBalloon;
-(double)smallBalloonScale;
-(UIColor *)innerStrokeColor;
@end

