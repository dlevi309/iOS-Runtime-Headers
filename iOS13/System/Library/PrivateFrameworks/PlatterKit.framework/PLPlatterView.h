/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PLPlatterInternal.h>
#import <libobjc.A.dylib/PLPlatter.h>
#import <libobjc.A.dylib/MTVisualStylingRequiring.h>
#import <libobjc.A.dylib/MTMaterialGrouping.h>

@class UIView, PLShadowView, NSMutableDictionary, NSDictionary, NSBundle, NSString, MTMaterialView, MTMaterialShadowView, NSArray;

@interface PLPlatterView : UIView <PLPlatterInternal, PLPlatter, MTVisualStylingRequiring, MTMaterialGrouping> {

	PLShadowView* _shadowView;
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
	SCD_Struct_PL2 _shadowAttributes;

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
@property (assign,nonatomic) SCD_Struct_PL3 shadowAttributes;                                    //@synthesize shadowAttributes=_shadowAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * customContentView;                                       //@synthesize customContentView=_customContentView - In the implementation block
@property (assign,nonatomic) BOOL hasShadow; 
@property (assign,getter=isBackgroundBlurred,nonatomic) BOOL backgroundBlurred;                  //@synthesize backgroundBlurred=_backgroundBlurred - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
@property (nonatomic,copy) NSString * materialGroupNameBase;                                     //@synthesize materialGroupNameBase=_materialGroupNameBase - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(UIView *)backgroundView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIView *)customContentView;
-(double)cornerRadius;
-(BOOL)hasShadow;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)setHasShadow:(BOOL)arg1 ;
-(void)_layoutShadowView;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(MTMaterialView *)backgroundMaterialView;
-(BOOL)isRecipeDynamic;
-(void)setRecipeDynamic:(BOOL)arg1 ;
-(void)_configureShadowViewIfNecessary;
-(id)initWithRecipe:(long long)arg1 ;
-(NSArray *)requiredVisualStyleCategories;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(CGSize)contentSizeForSize:(CGSize)arg1 ;
-(NSString *)materialGroupNameBase;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(void)setBackgroundBlurred:(BOOL)arg1 ;
-(BOOL)isBackgroundBlurred;
-(void)_configureBackgroundViewIfNecessary;
-(long long)materialRecipe;
-(SCD_Struct_PL3)shadowAttributes;
-(void)_configureCustomContentViewIfNecessary;
-(void)_configureCustomContentView;
-(id)_initWithRecipe:(long long)arg1 orRecipeNamesByTraitCollection:(id)arg2 inBundle:(id)arg3 ;
-(void)_configureBackgroundView:(id)arg1 ;
-(BOOL)_isMaterialViewSufficientlySpecified;
-(id)_newDefaultBackgroundView;
-(void)setMaterialRecipe:(long long)arg1 ;
-(void)setShadowAttributes:(SCD_Struct_PL3)arg1 ;
-(BOOL)usesBackgroundView;
-(void)setUsesBackgroundView:(BOOL)arg1 ;
-(id)initWithRecipeNamesByTraitCollection:(id)arg1 inBundle:(id)arg2 ;
-(void)_willRemoveCustomContent:(id)arg1 ;
-(MTMaterialShadowView *)backgroundMaterialShadowView;
@end

