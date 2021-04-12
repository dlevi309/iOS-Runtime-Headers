/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
*/

#import <MaterialKit/MaterialKit-Structs.h>
#import <MaterialKit/MTPillView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol MTLumaDodgePillBackgroundLuminanceObserver;
@class MTLumaDodgePillSettings, _MTLumaDodgePillLowQualityEffectView, NSMutableArray, NSString;

@interface MTLumaDodgePillView : MTPillView <CAAnimationDelegate> {

	long long _style;
	MTLumaDodgePillSettings* _settings;
	id<MTLumaDodgePillBackgroundLuminanceObserver> _backgroundLumninanceObserver;
	long long _backgroundLuminance;
	long long _backgroundLuminanceBias;
	long long _graphicsQuality;
	double _luma;
	BOOL _lumaIsValid;
	_MTLumaDodgePillLowQualityEffectView* _lowQualityEffectView;
	unsigned _bounceAnimationsInFlight;
	NSMutableArray* _bounceAnimationKeys;

}

@property (assign,nonatomic) long long style;                                                                                 //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<MTLumaDodgePillBackgroundLuminanceObserver> backgroundLumninanceObserver;              //@synthesize backgroundLumninanceObserver=_backgroundLumninanceObserver - In the implementation block
@property (nonatomic,readonly) long long backgroundLuminance;                                                                 //@synthesize backgroundLuminance=_backgroundLuminance - In the implementation block
@property (assign,nonatomic) long long backgroundLuminanceBias;                                                               //@synthesize backgroundLuminanceBias=_backgroundLuminanceBias - In the implementation block
@property (nonatomic,readonly) double suggestedEdgeSpacing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(Class)layerClass;
+(BOOL)supportsBackgroundLuminanceObserving;
-(void)dealloc;
-(NSString *)description;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_updateStyle;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)backdropLayer:(id)arg1 didChangeLuma:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 settings:(id)arg2 ;
-(void)bounce;
-(BOOL)_shouldAnimatePropertyAdditivelyWithKey:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 settings:(id)arg2 graphicsQuality:(long long)arg3 ;
-(void)setBackgroundLumninanceObserver:(id<MTLumaDodgePillBackgroundLuminanceObserver>)arg1 ;
-(void)setBackgroundLuminanceBias:(long long)arg1 ;
-(void)resetBackgroundLuminanceHysteresis;
-(double)suggestedEdgeSpacing;
-(CGSize)suggestedSizeForContentWidth:(double)arg1 ;
-(id<MTLumaDodgePillBackgroundLuminanceObserver>)backgroundLumninanceObserver;
-(long long)backgroundLuminance;
-(long long)backgroundLuminanceBias;
@end

