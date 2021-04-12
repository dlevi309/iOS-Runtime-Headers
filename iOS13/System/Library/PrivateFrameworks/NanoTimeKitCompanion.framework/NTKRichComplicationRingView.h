/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationShapeView.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@class UIView, CAShapeLayer, NSString;

@interface NTKRichComplicationRingView : NTKRichComplicationShapeView <CLKMonochromeComplicationView> {

	double _curveWidth;
	double _padding;
	UIView* _foregroundView;
	CAShapeLayer* _headLayer;
	CAShapeLayer* _tailLayer;
	CAShapeLayer* _tailStrokeLayer;
	BOOL _clockwise;

}

@property (assign,nonatomic) BOOL clockwise;                                                     //@synthesize clockwise=_clockwise - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider; 
+(id)_disabledLayerActions;
-(void)setProgress:(double)arg1 ;
-(void)layoutSubviews;
-(const CGPathRef)_generatePath;
-(void)_updateGradient;
-(BOOL)clockwise;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(CGPoint)_pointAtProgress:(float)arg1 ;
-(void)_setupGradientLayer:(id)arg1 ;
-(void)setClockwise:(BOOL)arg1 ;
-(double)_shapeLineWidth;
-(id)_normalizeGradientLocations:(id)arg1 ;
-(BOOL)_shouldReverseGradient;
-(id)initWithCurveWidth:(double)arg1 padding:(double)arg2 forDevice:(id)arg3 withFilterStyle:(long long)arg4 ;
-(id)_createHeadTailViewWithStartAngle:(double)arg1 endAngle:(double)arg2 clockwise:(BOOL)arg3 additionalWidth:(double)arg4 ;
-(void)_layoutHeadTailView:(id)arg1 forProgress:(double)arg2 ;
@end

