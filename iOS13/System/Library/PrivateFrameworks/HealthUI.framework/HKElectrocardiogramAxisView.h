/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HKElectrocardiogramAxisOptions, CAReplicatorLayer, UIFontMetrics, UIFont, UIColor;

@interface HKElectrocardiogramAxisView : UIView {

	double _axisSpacing;
	HKElectrocardiogramAxisOptions* _options;
	CAReplicatorLayer* _ticksLayer;
	UIFontMetrics* _metrics;
	long long _startingIndex;
	CGSize _lastBoundsSize;

}

@property (nonatomic,retain) HKElectrocardiogramAxisOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) CAReplicatorLayer * ticksLayer;                        //@synthesize ticksLayer=_ticksLayer - In the implementation block
@property (nonatomic,retain) UIFontMetrics * metrics;                               //@synthesize metrics=_metrics - In the implementation block
@property (assign,nonatomic) long long startingIndex;                               //@synthesize startingIndex=_startingIndex - In the implementation block
@property (assign,nonatomic) CGSize lastBoundsSize;                                 //@synthesize lastBoundsSize=_lastBoundsSize - In the implementation block
@property (nonatomic,readonly) UIFont * axisLabelFont; 
@property (assign,nonatomic) double axisSpacing;                                    //@synthesize axisSpacing=_axisSpacing - In the implementation block
@property (nonatomic,readonly) UIColor * lineColor; 
@property (nonatomic,readonly) double lineWidth; 
-(HKElectrocardiogramAxisOptions *)options;
-(void)setOptions:(HKElectrocardiogramAxisOptions *)arg1 ;
-(UIFontMetrics *)metrics;
-(void)setMetrics:(UIFontMetrics *)arg1 ;
-(long long)startingIndex;
-(void)setStartingIndex:(long long)arg1 ;
-(double)lineWidth;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(UIColor *)lineColor;
-(id)_createLabel;
-(void)setAxisSpacing:(double)arg1 ;
-(double)axisSpacing;
-(id)initWithAxisSpacing:(double)arg1 options:(id)arg2 startingIndex:(long long)arg3 ;
-(void)_drawAxis;
-(CGSize)lastBoundsSize;
-(void)setLastBoundsSize:(CGSize)arg1 ;
-(CAReplicatorLayer *)ticksLayer;
-(UIFont *)axisLabelFont;
-(id)initWithAxisSpacing:(double)arg1 lineColor:(id)arg2 lineWidth:(double)arg3 ;
-(void)setTicksLayer:(CAReplicatorLayer *)arg1 ;
@end

