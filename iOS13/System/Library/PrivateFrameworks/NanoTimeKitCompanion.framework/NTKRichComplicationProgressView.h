/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKMonochromeFilterProvider.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@protocol CLKMonochromeFilterProvider;
@class CLKDevice, NSNumber, NSArray, CLKGaugeProvider, NTKRichComplicationShapeView, UIView, NSString;

@interface NTKRichComplicationProgressView : UIView <CLKMonochromeFilterProvider, CLKMonochromeComplicationView> {

	CLKDevice* _device;
	NSNumber* _updateToken;
	float _currentBackgroundViewAlphaPercentage;
	BOOL _enabled;
	id<CLKMonochromeFilterProvider> _filterProvider;
	NSArray* _gradientColors;
	double _progress;
	long long _style;
	CLKGaugeProvider* _gaugeProvider;
	NTKRichComplicationShapeView* _backgroundView;
	NTKRichComplicationShapeView* _foregroundView;
	UIView* _ringView;

}

@property (nonatomic,readonly) NTKRichComplicationShapeView * backgroundView;                    //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) NTKRichComplicationShapeView * foregroundView;                    //@synthesize foregroundView=_foregroundView - In the implementation block
@property (nonatomic,readonly) UIView * ringView;                                                //@synthesize ringView=_ringView - In the implementation block
@property (nonatomic,retain) NSArray * gradientColors;                                           //@synthesize gradientColors=_gradientColors - In the implementation block
@property (assign,nonatomic) double progress;                                                    //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                       //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long style;                                                    //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) CLKGaugeProvider * gaugeProvider;                                   //@synthesize gaugeProvider=_gaugeProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(double)progress;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setProgress:(double)arg1 ;
-(NTKRichComplicationShapeView *)backgroundView;
-(void)layoutSubviews;
-(void)setGradientColors:(NSArray *)arg1 ;
-(NSArray *)gradientColors;
-(NTKRichComplicationShapeView *)foregroundView;
-(void)_applyStyle;
-(CLKGaugeProvider *)gaugeProvider;
-(void)setGaugeProvider:(CLKGaugeProvider *)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(id)filterForView:(id)arg1 style:(long long)arg2 ;
-(id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3 ;
-(id)colorForView:(id)arg1 accented:(BOOL)arg2 ;
-(UIView *)ringView;
-(void)_createRingView;
-(id)overrideBackgroundGradientColorsForGradientColors:(id)arg1 ;
-(id)overrideBackgroundGradientColorsForGradientColors:(id)arg1 locations:(id)arg2 ;
-(void)setGradientColors:(id)arg1 locations:(id)arg2 ;
-(void)_updateUIFromGaugeProvider;
-(void)animateToProgress:(float)arg1 duration:(double)arg2 ;
-(void)_adjustBackgroundViewAlphaWithPercentage:(float)arg1 ;
-(id)initForDevice:(id)arg1 backgroundShapeView:(id)arg2 foregroundShapeView:(id)arg3 ;
@end

