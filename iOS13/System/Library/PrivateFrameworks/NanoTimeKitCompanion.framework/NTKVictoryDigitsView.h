/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class CLKDevice, NTKVictoryLabel, CAGradientLayer, UIColor, NSString;

@interface NTKVictoryDigitsView : UIView {

	CLKDevice* _device;
	NTKVictoryLabel* _label;
	BOOL _hasSetAppearance;
	CAGradientLayer* _dimmingOverlay;
	BOOL _dimIsUpper;
	UIColor* _color;
	double _scale;
	long long _appearance;
	UIColor* _outlineBackgroundColor;

}

@property (nonatomic,retain) UIColor * outlineBackgroundColor;              //@synthesize outlineBackgroundColor=_outlineBackgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * color;                                 //@synthesize color=_color - In the implementation block
@property (nonatomic,copy) NSString * digitText; 
@property (assign,nonatomic) double scale;                                  //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long appearance;                          //@synthesize appearance=_appearance - In the implementation block
+(id)_fontForAppearance:(long long)arg1 forDevice:(id)arg2 ;
-(double)scale;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setScale:(double)arg1 ;
-(long long)appearance;
-(void)setAppearance:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_updateFonts;
-(id)_createLabel;
-(id)initForDevice:(id)arg1 ;
-(void)prepareAppearance:(long long)arg1 ;
-(void)applyColor;
-(UIColor *)outlineBackgroundColor;
-(void)setDimmingFactor:(double)arg1 isUpper:(BOOL)arg2 ;
-(void)setDigitText:(NSString *)arg1 ;
-(NSString *)digitText;
-(void)setOutlineBackgroundColor:(UIColor *)arg1 ;
@end

