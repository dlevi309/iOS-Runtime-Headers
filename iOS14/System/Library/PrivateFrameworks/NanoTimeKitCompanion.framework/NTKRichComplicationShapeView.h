/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)gradientLayer;
-(double)progress;
-(id)device;
-(void)layoutSubviews;
-(id)shapeLayer;
-(void)_updateGradient;
-(void)setProgress:(double)arg1 ;
-(NSArray *)gradientColors;
-(void)setGradientColors:(NSArray *)arg1 ;
-(void)_updatePath;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(CGPoint)_pointAtProgress:(float)arg1 ;
-(void)_setupShapeLayer:(id)arg1 ;
-(id)_shapeStrokeColor;
-(id)initForDevice:(id)arg1 withFilterStyle:(long long)arg2 ;
-(void)_setupGradientLayer:(id)arg1 ;
-(double)_shapeLineWidth;
-(id)_normalizeGradientLocations:(id)arg1 ;
-(CGPathRef)_generatePath;
-(BOOL)_shouldReverseGradient;
-(CGPoint)pointAtProgress:(float)arg1 ;
-(void)setGradientColors:(id)arg1 locations:(id)arg2 ;
-(void)unfreezeForTransaction;
-(long long)filterStyle;
@end

