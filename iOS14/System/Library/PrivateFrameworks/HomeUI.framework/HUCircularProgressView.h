/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIView.h>

@class UIColor, CAShapeLayer;

@interface HUCircularProgressView : UIView {

	BOOL _progressFillCounterClockwise;
	BOOL _removeProgressBarOnCompletion;
	double _baseLayerStrokeLineWidth;
	UIColor* _baseLayerStrokeLineColor;
	double _progressLayerStrokeLineWidth;
	UIColor* _progressLayerStrokeLineColor;
	unsigned long long _lineCapStyle;
	unsigned long long _progressBarFillDirection;
	double _avatarDiameter;
	double _radius;
	double _startAngle;
	double _endAngle;
	CAShapeLayer* _progressShapeLayer;
	CAShapeLayer* _baseLayer;
	double _fromValue;

}

@property (assign,nonatomic) double startAngle;                                        //@synthesize startAngle=_startAngle - In the implementation block
@property (assign,nonatomic) double endAngle;                                          //@synthesize endAngle=_endAngle - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progressShapeLayer;                        //@synthesize progressShapeLayer=_progressShapeLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * baseLayer;                                 //@synthesize baseLayer=_baseLayer - In the implementation block
@property (assign,nonatomic) double fromValue;                                         //@synthesize fromValue=_fromValue - In the implementation block
@property (assign,nonatomic) BOOL progressFillCounterClockwise;                        //@synthesize progressFillCounterClockwise=_progressFillCounterClockwise - In the implementation block
@property (assign,nonatomic) double baseLayerStrokeLineWidth;                          //@synthesize baseLayerStrokeLineWidth=_baseLayerStrokeLineWidth - In the implementation block
@property (nonatomic,retain) UIColor * baseLayerStrokeLineColor;                       //@synthesize baseLayerStrokeLineColor=_baseLayerStrokeLineColor - In the implementation block
@property (assign,nonatomic) double progressLayerStrokeLineWidth;                      //@synthesize progressLayerStrokeLineWidth=_progressLayerStrokeLineWidth - In the implementation block
@property (nonatomic,retain) UIColor * progressLayerStrokeLineColor;                   //@synthesize progressLayerStrokeLineColor=_progressLayerStrokeLineColor - In the implementation block
@property (assign,nonatomic) unsigned long long lineCapStyle;                          //@synthesize lineCapStyle=_lineCapStyle - In the implementation block
@property (assign,nonatomic) unsigned long long progressBarFillDirection;              //@synthesize progressBarFillDirection=_progressBarFillDirection - In the implementation block
@property (assign,nonatomic) BOOL removeProgressBarOnCompletion;                       //@synthesize removeProgressBarOnCompletion=_removeProgressBarOnCompletion - In the implementation block
@property (assign,nonatomic) double avatarDiameter;                                    //@synthesize avatarDiameter=_avatarDiameter - In the implementation block
@property (assign,nonatomic) double radius;                                            //@synthesize radius=_radius - In the implementation block
-(void)setRadius:(double)arg1 ;
-(CAShapeLayer *)baseLayer;
-(void)setBaseLayer:(CAShapeLayer *)arg1 ;
-(double)fromValue;
-(void)setLineCapStyle:(unsigned long long)arg1 ;
-(double)endAngle;
-(double)radius;
-(void)layoutSubviews;
-(void)setStartAngle:(double)arg1 ;
-(double)startAngle;
-(id)initWithRadius:(double)arg1 ;
-(void)setFromValue:(double)arg1 ;
-(void)setEndAngle:(double)arg1 ;
-(unsigned long long)lineCapStyle;
-(id)_lineCapStyle;
-(void)setAvatarDiameter:(double)arg1 ;
-(double)avatarDiameter;
-(BOOL)progressFillCounterClockwise;
-(UIColor *)baseLayerStrokeLineColor;
-(double)baseLayerStrokeLineWidth;
-(double)progressLayerStrokeLineWidth;
-(void)setProgressShapeLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)progressShapeLayer;
-(UIColor *)progressLayerStrokeLineColor;
-(id)_progressBarFillDirection;
-(BOOL)removeProgressBarOnCompletion;
-(unsigned long long)progressBarFillDirection;
-(id)initWithRadius:(double)arg1 startAngle:(double)arg2 endAngle:(double)arg3 progress:(double)arg4 ;
-(void)setBaseLayerStrokeLineColor:(UIColor *)arg1 ;
-(void)setProgressLayerStrokeLineColor:(UIColor *)arg1 ;
-(void)updateProgressBy:(double)arg1 animationDuration:(float)arg2 ;
-(void)updateProgressTo:(double)arg1 animationDuration:(float)arg2 ;
-(void)setProgressFillCounterClockwise:(BOOL)arg1 ;
-(void)setBaseLayerStrokeLineWidth:(double)arg1 ;
-(void)setProgressLayerStrokeLineWidth:(double)arg1 ;
-(void)setProgressBarFillDirection:(unsigned long long)arg1 ;
-(void)setRemoveProgressBarOnCompletion:(BOOL)arg1 ;
@end

