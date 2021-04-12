/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@protocol CLKMonochromeFilterProvider;
@class CLKDevice, UIView, CALayer, CAShapeLayer, CAGradientLayer, NSArray, NSString;

@interface NTKRichComplicationShapeView : UIView <CLKMonochromeComplicationView> {

	CLKDevice* _device;
	CGRect _previousBounds;
	BOOL _willUnfreezeForTransaction;
	UIView* _filterView;
	CALayer* _freezeLayer;
	CAShapeLayer* _shapeLayer;
	CAGradientLayer* _gradientLayer;
	NSArray* _gradientColors;
	NSArray* _filteredGradientColors;
	NSArray* _gradientLocations;
	double _monochromeFraction;
	id<CLKMonochromeFilterProvider> _filterProvider;
	double _progress;
	long long _filterStyle;

}

@property (nonatomic,retain) NSArray * gradientColors;                                           //@synthesize gradientColors=_gradientColors - In the implementation block
@property (assign,nonatomic) double progress;                                                    //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) long long filterStyle;                                            //@synthesize filterStyle=_filterStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
-(double)progress;
-(id)device;
-(void)setProgress:(double)arg1 ;
-(void)layoutSubviews;
-(void)setGradientColors:(NSArray *)arg1 ;
-(id)shapeLayer;
-(id)gradientLayer;
-(NSArray *)gradientColors;
-(void)_updatePath;
-(CGPathRef)_generatePath;
-(void)_updateGradient;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(CGPoint)_pointAtProgress:(float)arg1 ;
-(void)_setupShapeLayer:(id)arg1 ;
-(id)_shapeStrokeColor;
-(id)initForDevice:(id)arg1 withFilterStyle:(long long)arg2 ;
-(void)_setupGradientLayer:(id)arg1 ;
-(double)_shapeLineWidth;
-(id)_normalizeGradientLocations:(id)arg1 ;
-(BOOL)_shouldReverseGradient;
-(CGPoint)pointAtProgress:(float)arg1 ;
-(void)setGradientColors:(id)arg1 locations:(id)arg2 ;
-(void)unfreezeForTransaction;
-(long long)filterStyle;
@end

