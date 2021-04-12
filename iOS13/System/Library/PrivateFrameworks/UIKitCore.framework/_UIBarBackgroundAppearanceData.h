/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)standardBackgroundData;
+(id)decodeFromCoder:(id)arg1 prefix:(id)arg2 ;
+(id)opaqueBackgroundData;
+(id)transparentBackgroundData;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(UIColor *)shadowColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setBackgroundEffects:(NSArray *)arg1 ;
-(NSArray *)backgroundEffects;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)encodeToCoder:(id)arg1 prefix:(id)arg2 ;
-(void)describeInto:(id)arg1 ;
-(UIBlurEffect *)backgroundEffect;
-(void)setBackgroundEffect:(UIBlurEffect *)arg1 ;
-(long long)backgroundImageContentMode;
-(void)setBackgroundImageContentMode:(long long)arg1 ;
-(void)configureWithDefaultShadow;
-(void)configureWithoutShadow;
-(UIVibrancyEffect *)shadowEffect;
-(void)setShadowEffect:(UIVibrancyEffect *)arg1 ;
-(id)replicate;
-(long long)hashInto:(long long)arg1 ;
-(BOOL)checkEqualTo:(id)arg1 ;
-(void)_updateBackgroundFlags;
-(void)_updateShadowFlags;
-(BOOL)hasBackground;
-(BOOL)hasShadow;
-(long long)behaviorForTransitioningTo:(id)arg1 ;
-(UIVibrancyEffect *)shadowViewEffect;
-(UIColor *)shadowViewBackgroundColor;
-(UIColor *)shadowViewTintColor;
-(UIVibrancyEffect *)defaultVibrancyEffect;
@end

