/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PLPlatterInternal.h>
#import <libobjc.A.dylib/PLPlatter.h>
#import <libobjc.A.dylib/MTVisualStylingProviding.h>
#import <libobjc.A.dylib/MTVisualStylingRequiring.h>
#import <libobjc.A.dylib/MTMaterialGrouping.h>

@class UIView, MTShadowView, NSMutableDictionary, NSDictionary, NSBundle, NSString, MTMaterialView, MTMaterialShadowView, NSArray;

@interface PLPlatterView : UIView <PLPlatterInternal, PLPlatter, MTVisualStylingProviding, MTVisualStylingRequiring, MTMaterialGrouping> {

	MTShadowView* _shadowView;
	UIView* _customContentView;
	BOOL _recipeDynamic;
	NSMutableDictionary* _categoriesToProviders;
	NSDictionary* _recipeNamesByTraitCollection;
	NSBundle* _recipeBundle;
	BOOL _backgroundBlurred;
	BOOL _usesBackgroundView;
	NSString* _materialGroupNameBase;
	UIView* _backgroundView;
	long long _materialRecipe;
	double _cornerRadius;
	SCD_Struct_PL5 _shadowAttributes;

}

@property (nonatomic,readonly) MTMaterialView * backgroundMaterialView; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,getter=isRecipeDynamic,nonatomic) BOOL recipeDynamic; 
@property (nonatomic,readonly) MTMaterialShadowView * backgroundMaterialShadowView; 
@property (assign,nonatomic) double cornerRadius;                                                //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL usesBackgroundView;                                            //@synthesize usesBackgroundView=_usesBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                            //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) long long materialRecipe;                                           //@synthesize materialRecipe=_materialRecipe - In the implementation block
@property (assign,nonatomic) SCD_Struct_PL6 shadowAttributes;                                    //@synthesize shadowAttributes=_shadowAttributes - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets shadowOutsets; 
@property (nonatomic,readonly) UIView * customContentView;                                       //@synthesize customContentView=_customContentView - In the implementation block
@property (assign,nonatomic) BOOL hasShadow; 
@property (assign,getter=isBackgroundBlurred,nonatomic) BOOL backgroundBlurred;                  //@synthesize backgroundBlurred=_backgroundBlurred - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
@property (nonatomic,copy) NSString * materialGroupNameBase;                                     //@synthesize materialGroupNameBase=_materialGroupNameBase - In the implementation block
+(id)platterViewWithStyle:(id)arg1 ;
+(id)platterViewWithBlurEffectStyle:(long long)arg1 ;
+(id)platterViewWithStyle:(id)arg1 inBundle:(id)arg2 ;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(CGSize)contentSizeForSize:(CGSize)arg1 ;
-(BOOL)isRecipeDynamic;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(NSArray *)requiredVisualStyleCategories;
-(void)setRecipeDynamic:(BOOL)arg1 ;
-(void)setBackgroundBlurred:(BOOL)arg1 ;
-(id)_newDefaultBackgroundView;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isBackgroundBlurred;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)_layoutShadowView;
-(UIEdgeInsets)shadowOutsets;
-(NSString *)materialGroupNameBase;
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(double)cornerRadius;
-(void)_configureBackgroundViewIfNecessary;
-(void)setHasShadow:(BOOL)arg1 ;
-(id)initWithRecipe:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isHighlighted;
-(UIView *)customContentView;
-(BOOL)hasShadow;
-(void)setCornerRadius:(double)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(MTMaterialView *)backgroundMaterialView;
-(long long)materialRecipe;
-(void)_configureCustomContentView;
-(void)_configureCustomContentViewIfNecessary;
-(SCD_Struct_PL6)shadowAttributes;
-(void)_configureShadowViewIfNecessary;
-(id)initWithRecipeNamesByTraitCollection:(id)arg1 inBundle:(id)arg2 ;
-(MTMaterialShadowView *)backgroundMaterialShadowView;
-(void)setUsesBackgroundView:(BOOL)arg1 ;
-(void)setShadowAttributes:(SCD_Struct_PL6)arg1 ;
-(id)_newCarPlayBannerStrokeView;
-(id)_initWithNavigationBannerStyle;
-(id)_initWithCarPlayBannerStyle;
-(id)_initWithNotificationsBannerStyle;
-(id)_initWithBlurEffectStyle:(long long)arg1 ;
-(id)_initWithRecipe:(long long)arg1 orRecipeNamesByTraitCollection:(id)arg2 inBundle:(id)arg3 ;
-(void)_configureBackgroundView:(id)arg1 ;
-(BOOL)_isMaterialViewSufficientlySpecified;
-(void)setMaterialRecipe:(long long)arg1 ;
-(BOOL)usesBackgroundView;
-(void)_willRemoveCustomContent:(id)arg1 ;
@end

