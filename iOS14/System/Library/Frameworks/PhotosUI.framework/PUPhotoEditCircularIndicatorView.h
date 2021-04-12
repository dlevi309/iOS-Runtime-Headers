/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAShapeLayer, UIColor;

@interface PUPhotoEditCircularIndicatorView : UIView {

	double _thickness;
	double _currentValue;
	double _minValue;
	double _maxValue;
	CAShapeLayer* _backgroundLayer;
	CAShapeLayer* _progressLayer;

}

@property (nonatomic,retain) CAShapeLayer * backgroundLayer;              //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progressLayer;                //@synthesize progressLayer=_progressLayer - In the implementation block
@property (assign,nonatomic) double thickness;                            //@synthesize thickness=_thickness - In the implementation block
@property (assign,nonatomic) double currentValue;                         //@synthesize currentValue=_currentValue - In the implementation block
@property (nonatomic,retain) UIColor * ringColor; 
@property (assign,nonatomic) double minValue;                             //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;                             //@synthesize maxValue=_maxValue - In the implementation block
-(void)resetToDefaults;
-(void)setMaxValue:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)ringColor;
-(double)thickness;
-(void)setThickness:(double)arg1 ;
-(void)layoutSubviews;
-(void)_layoutSubLayers;
-(void)setRingColor:(UIColor *)arg1 ;
-(void)_updateProgressLayer;
-(CAShapeLayer *)progressLayer;
-(void)setProgressLayer:(CAShapeLayer *)arg1 ;
-(void)setMinValue:(double)arg1 ;
-(double)currentValue;
-(CAShapeLayer *)backgroundLayer;
-(void)setBackgroundLayer:(CAShapeLayer *)arg1 ;
-(double)maxValue;
-(void)setCurrentValue:(double)arg1 ;
-(double)minValue;
-(void)_setupLayers;
@end

