/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBarAppearanceData.h>

@class UIVibrancyEffect, NSArray, UIColor, UIImage, UIBlurEffect;

@interface _UIBarBackgroundAppearanceData : _UIBarAppearanceData {

	struct {
		unsigned backgroundEffectsAreSingular : 1;
		unsigned hasBackground : 1;
		unsigned hasShadow : 1;
		unsigned needsToCalculateVibrantEffect : 1;
	}  _flags;
	UIVibrancyEffect* _shadowViewEffect;
	UIVibrancyEffect* _defaultVibrancyEffect;
	NSArray* _backgroundEffects;
	UIColor* _backgroundColor;
	UIImage* _backgroundImage;
	long long _backgroundImageContentMode;
	UIColor* _shadowColor;
	UIImage* _shadowImage;
	UIVibrancyEffect* _shadowEffect;

}

@property (nonatomic,copy) UIBlurEffect * backgroundEffect; 
@property (nonatomic,copy) NSArray * backgroundEffects;                               //@synthesize backgroundEffects=_backgroundEffects - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                               //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign,nonatomic) long long backgroundImageContentMode;                    //@synthesize backgroundImageContentMode=_backgroundImageContentMode - In the implementation block
@property (nonatomic,copy) UIColor * shadowColor;                                     //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                                   //@synthesize shadowImage=_shadowImage - In the implementation block
@property (nonatomic,copy) UIVibrancyEffect * shadowEffect;                           //@synthesize shadowEffect=_shadowEffect - In the implementation block
@property (nonatomic,readonly) BOOL hasBackground; 
@property (nonatomic,readonly) BOOL hasShadow; 
@property (nonatomic,readonly) UIVibrancyEffect * shadowViewEffect;                   //@synthesize shadowViewEffect=_shadowViewEffect - In the implementation block
@property (nonatomic,readonly) UIColor * shadowViewBackgroundColor; 
@property (nonatomic,readonly) UIColor * shadowViewTintColor; 
@property (nonatomic,readonly) UIVibrancyEffect * defaultVibrancyEffect;              //@synthesize defaultVibrancyEffect=_defaultVibrancyEffect - In the implementation block
+(id)decodeFromCoder:(id)arg1 prefix:(id)arg2 ;
+(id)standardBackgroundData;
+(id)opaqueBackgroundData;
+(id)transparentBackgroundData;
-(long long)backgroundImageContentMode;
-(BOOL)checkEqualTo:(id)arg1 ;
-(id)replicate;
-(void)encodeToCoder:(id)arg1 prefix:(id)arg2 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(long long)hashInto:(long long)arg1 ;
-(void)describeInto:(id)arg1 ;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(UIColor *)shadowViewBackgroundColor;
-(UIColor *)shadowColor;
-(UIVibrancyEffect *)shadowEffect;
-(void)setBackgroundEffects:(NSArray *)arg1 ;
-(BOOL)hasBackground;
-(void)setBackgroundImageContentMode:(long long)arg1 ;
-(UIVibrancyEffect *)shadowViewEffect;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(UIColor *)backgroundColor;
-(void)_updateShadowFlags;
-(void)configureWithoutShadow;
-(void)setBackgroundEffect:(UIBlurEffect *)arg1 ;
-(void)setShadowEffect:(UIVibrancyEffect *)arg1 ;
-(void)configureWithDefaultShadow;
-(UIColor *)shadowViewTintColor;
-(long long)behaviorForTransitioningTo:(id)arg1 ;
-(BOOL)hasShadow;
-(UIImage *)backgroundImage;
-(void)_updateBackgroundFlags;
-(UIVibrancyEffect *)defaultVibrancyEffect;
-(NSArray *)backgroundEffects;
-(UIBlurEffect *)backgroundEffect;
@end

