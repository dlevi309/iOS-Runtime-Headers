/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIVibrancyEffect, NSArray, UIColor, UIImage;

@interface _UIBarBackgroundLayout : NSObject <NSCopying> {

	double _backgroundAlpha;
	double _shadowAlpha;
	double _backgroundHeight1;
	double _backgroundHeight2;
	double _backgroundTransitionProgress;
	long long _interfaceIdiom;
	long long _interfaceStyle;
	BOOL _useExplicitGeometry;
	BOOL _disableTinting;
	BOOL _shadowHidden;
	UIVibrancyEffect* _bg1ShadowEffect;
	UIVibrancyEffect* _bg2ShadowEffect;

}

@property (nonatomic,readonly) double bgInset; 
@property (nonatomic,readonly) BOOL shouldUseExplicitGeometry; 
@property (nonatomic,readonly) double bg1Alpha; 
@property (nonatomic,readonly) NSArray * bg1Effects; 
@property (nonatomic,readonly) UIColor * bg1Color; 
@property (nonatomic,readonly) UIImage * bg1Image; 
@property (nonatomic,readonly) double bg1ImageAlpha; 
@property (nonatomic,readonly) long long bg1ImageMode; 
@property (nonatomic,readonly) BOOL bg1HasShadow; 
@property (nonatomic,readonly) UIColor * bg1ShadowColor; 
@property (nonatomic,readonly) UIImage * bg1ShadowImage; 
@property (nonatomic,readonly) UIVibrancyEffect * bg1ShadowEffect;              //@synthesize bg1ShadowEffect=_bg1ShadowEffect - In the implementation block
@property (nonatomic,readonly) UIColor * bg1ShadowTint; 
@property (nonatomic,readonly) double bg1ShadowAlpha; 
@property (nonatomic,readonly) BOOL bg2Enabled; 
@property (nonatomic,readonly) double bg2Alpha; 
@property (nonatomic,readonly) NSArray * bg2Effects; 
@property (nonatomic,readonly) UIColor * bg2Color; 
@property (nonatomic,readonly) UIImage * bg2Image; 
@property (nonatomic,readonly) long long bg2ImageMode; 
@property (nonatomic,readonly) BOOL bg2HasShadow; 
@property (nonatomic,readonly) UIColor * bg2ShadowColor; 
@property (nonatomic,readonly) UIImage * bg2ShadowImage; 
@property (nonatomic,readonly) UIVibrancyEffect * bg2ShadowEffect;              //@synthesize bg2ShadowEffect=_bg2ShadowEffect - In the implementation block
@property (nonatomic,readonly) UIColor * bg2ShadowTint; 
@property (nonatomic,readonly) double bg2ShadowAlpha; 
@property (assign,nonatomic) long long interfaceIdiom;                          //@synthesize interfaceIdiom=_interfaceIdiom - In the implementation block
@property (assign,nonatomic) long long interfaceStyle;                          //@synthesize interfaceStyle=_interfaceStyle - In the implementation block
@property (assign,nonatomic) double backgroundAlpha;                            //@synthesize backgroundAlpha=_backgroundAlpha - In the implementation block
@property (assign,nonatomic) double shadowAlpha;                                //@synthesize shadowAlpha=_shadowAlpha - In the implementation block
@property (assign,nonatomic) BOOL shadowHidden;                                 //@synthesize shadowHidden=_shadowHidden - In the implementation block
@property (assign,nonatomic) BOOL useExplicitGeometry;                          //@synthesize useExplicitGeometry=_useExplicitGeometry - In the implementation block
@property (assign,nonatomic) double backgroundHeight1;                          //@synthesize backgroundHeight1=_backgroundHeight1 - In the implementation block
@property (assign,nonatomic) double backgroundHeight2;                          //@synthesize backgroundHeight2=_backgroundHeight2 - In the implementation block
@property (assign,nonatomic) double backgroundTransitionProgress;               //@synthesize backgroundTransitionProgress=_backgroundTransitionProgress - In the implementation block
@property (nonatomic,readonly) double topInset; 
@property (assign,nonatomic) BOOL disableTinting;                               //@synthesize disableTinting=_disableTinting - In the implementation block
-(void)setBackgroundHeight2:(double)arg1 ;
-(NSArray *)bg2Effects;
-(double)bg2Alpha;
-(UIImage *)bg1ShadowImage;
-(UIImage *)bg1Image;
-(double)bg1ShadowAlpha;
-(void)setDisableTinting:(BOOL)arg1 ;
-(void)setBackgroundTransitionProgress:(double)arg1 ;
-(double)bg1Alpha;
-(UIColor *)bg2Color;
-(double)shadowAlpha;
-(void)setBackgroundHeight1:(double)arg1 ;
-(void)setInterfaceStyle:(long long)arg1 ;
-(UIColor *)bg1ShadowColor;
-(UIColor *)bg2ShadowTint;
-(UIImage *)bg2ShadowImage;
-(void)setShadowHidden:(BOOL)arg1 ;
-(UIColor *)bg2ShadowColor;
-(UIVibrancyEffect *)bg2ShadowEffect;
-(long long)bg1ImageMode;
-(BOOL)bg2HasShadow;
-(void)setUseExplicitGeometry:(BOOL)arg1 ;
-(BOOL)shadowHidden;
-(BOOL)bg2Enabled;
-(BOOL)bg2HasHeight;
-(double)bgInset;
-(UIColor *)bg1Color;
-(void)setShadowAlpha:(double)arg1 ;
-(double)bg2ShadowAlpha;
-(BOOL)disableTinting;
-(double)bg1ImageAlpha;
-(BOOL)useExplicitGeometry;
-(UIVibrancyEffect *)bg1ShadowEffect;
-(UIColor *)bg1ShadowTint;
-(double)backgroundHeight2;
-(long long)bg2ImageMode;
-(long long)interfaceIdiom;
-(BOOL)bg1HasShadow;
-(id)initWithLayout:(id)arg1 ;
-(void)describeInto:(id)arg1 ;
-(double)topInset;
-(id)init;
-(BOOL)shouldUseExplicitGeometry;
-(double)backgroundHeight1;
-(void)setBackgroundAlpha:(double)arg1 ;
-(UIImage *)bg2Image;
-(double)backgroundAlpha;
-(id)description;
-(long long)interfaceStyle;
-(NSArray *)bg1Effects;
-(void)setInterfaceIdiom:(long long)arg1 ;
-(double)backgroundTransitionProgress;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

