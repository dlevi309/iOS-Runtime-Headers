/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView, CLKDevice, UIColor;

@interface NTKAstronomyLocationDot : UIView {

	UIView* _outerDot;
	UIImageView* _innerDotImageView;
	BOOL _animating;
	CLKDevice* _device;
	UIColor* _outerDotColor;
	double _outerDotDiameter;
	UIColor* _innerDotColor;
	double _innerDotDiameter;
	double _pulseDuration;
	double _pulseAlphaDelay;

}

@property (nonatomic,readonly) CLKDevice * device;                 //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) UIColor * outerDotColor;              //@synthesize outerDotColor=_outerDotColor - In the implementation block
@property (assign,nonatomic) double outerDotDiameter;              //@synthesize outerDotDiameter=_outerDotDiameter - In the implementation block
@property (nonatomic,retain) UIColor * innerDotColor;              //@synthesize innerDotColor=_innerDotColor - In the implementation block
@property (assign,nonatomic) double innerDotDiameter;              //@synthesize innerDotDiameter=_innerDotDiameter - In the implementation block
@property (assign,nonatomic) double pulseDuration;                 //@synthesize pulseDuration=_pulseDuration - In the implementation block
@property (assign,nonatomic) double pulseAlphaDelay;               //@synthesize pulseAlphaDelay=_pulseAlphaDelay - In the implementation block
@property (assign,nonatomic) BOOL animating;                       //@synthesize animating=_animating - In the implementation block
+(id)_defaultColor;
+(CGSize)_defaultSize;
+(double)_defaultOuterDotDiameterForSizeClass:(unsigned long long)arg1 ;
+(double)_defaultInnerDotDiameterForSizeClass:(unsigned long long)arg1 ;
+(double)defaultPulseDuration;
+(double)defaultPulseAlphaDelay;
-(void)startAnimation;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)animating;
-(CLKDevice *)device;
-(void)layoutSubviews;
-(void)stopAnimation;
-(void)setInnerDotColor:(UIColor *)arg1 ;
-(UIColor *)innerDotColor;
-(id)initForDevice:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 ;
-(void)setOuterDotColor:(UIColor *)arg1 ;
-(void)_generateInnerDotImage;
-(void)setOuterDotDiameter:(double)arg1 ;
-(void)setInnerDotDiameter:(double)arg1 ;
-(void)setPulseDuration:(double)arg1 ;
-(UIColor *)outerDotColor;
-(double)outerDotDiameter;
-(double)innerDotDiameter;
-(double)pulseDuration;
-(double)pulseAlphaDelay;
-(void)setPulseAlphaDelay:(double)arg1 ;
@end

