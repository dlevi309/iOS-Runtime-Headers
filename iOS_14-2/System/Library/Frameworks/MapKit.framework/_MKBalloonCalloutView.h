/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKCalloutView.h>

@class UIView, UIColor, UIImageView, _MKBezierPathView, UIImage;

@interface _MKBalloonCalloutView : MKCalloutView {

	UIView* _shadowView;
	UIView* _containerView;
	UIColor* _balloonTintColor;
	UIColor* _strokeColor;
	UIColor* _innerStrokeColor;
	UIColor* _imageTintColor;
	UIImageView* _balloonBodyImageView;
	UIImageView* _tailView;
	UIView* _innerBackgroundView;
	UIImageView* _imageView;
	CGSize _intrinsicSize;
	CGSize _shadowSize;
	BOOL _originatesAsSmallBalloon;
	double _croppedImageScale;
	UIImageView* _contentViewMaskView;
	_MKBezierPathView* _backgroundView;
	BOOL _centerAnnotationWhenOffscreen;
	BOOL _showsArrow;
	BOOL _dismissed;
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
@property (nonatomic,copy) UIColor * imageTintColor;                     //@synthesize imageTintColor=_imageTintColor - In the implementation block
@property (assign,nonatomic) BOOL showsArrow;                            //@synthesize showsArrow=_showsArrow - In the implementation block
-(UIColor *)strokeColor;
-(void)_updateStyle;
-(CGSize)intrinsicContentSize;
-(void)setImage:(UIImage *)arg1 ;
-(UIColor *)imageTintColor;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)showsArrow;
-(CGRect)_idealFrame;
-(UIImage *)image;
-(void)layoutSubviews;
-(id)initWithAnnotationView:(id)arg1 ;
-(CGRect)_centerFrame;
-(double)_innerDiameter;
-(void)setSmallBalloonScale:(double)arg1 ;
-(void)didMoveToWindow;
-(void)setOriginatesAsSmallBalloon:(BOOL)arg1 ;
-(void)setShowsArrow:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_handleTapOnCallout:(id)arg1 ;
-(void)setBalloonTintColor:(UIColor *)arg1 ;
-(void)setInnerStrokeColor:(UIColor *)arg1 ;
-(void)setShowsArrow:(BOOL)arg1 ;
-(void)_configureForArrowStateWithDuration:(double)arg1 ;
-(void)_updateCroppedImage;
-(void)_showAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)updateWithNewCalloutOffset;
-(void)showCalloutAnimated:(BOOL)arg1 ;
-(UIColor *)balloonTintColor;
-(void)setImageTintColor:(UIColor *)arg1 ;
-(void)hideCalloutAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)originatesAsSmallBalloon;
-(double)smallBalloonScale;
-(UIColor *)innerStrokeColor;
-(void)showAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(void)_commonInit;
-(UIView *)contentView;
-(BOOL)calloutContainsPoint:(CGPoint)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)style;
@end

