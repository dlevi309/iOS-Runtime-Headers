/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
*/

#import <MaterialKit/MaterialKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MTVisualStylingProviding.h>

@class NSMutableDictionary, NSDictionary, NSBundle, NSHashTable, UIView, NSString, UIViewFloatAnimatableProperty, MTMaterialLayer;

@interface MTMaterialView : UIView <NSCopying, MTVisualStylingProviding> {

	BOOL _useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
	BOOL _recipeDynamic;
	BOOL _shadowed;
	NSMutableDictionary* _cmVisualStyleCategoriesToProviders;
	NSDictionary* _recipeNamesByTraitCollection;
	NSBundle* _recipeBundle;
	NSHashTable* _observers;
	UIView* _highlightView;
	BOOL _needsLayoutOnMoveToWindow;
	BOOL _highlighted;
	NSString* _groupNameBase;
	long long _recipe;
	long long _configuration;
	UIViewFloatAnimatableProperty* _backdropFloatAnimatableProperty;

}

@property (nonatomic,copy) NSString * recipeName; 
@property (assign,getter=isBlurEnabled,nonatomic) BOOL blurEnabled; 
@property (assign,getter=isZoomEnabled,nonatomic) BOOL zoomEnabled; 
@property (assign,getter=isCaptureOnly,nonatomic) BOOL captureOnly; 
@property (assign,getter=isShadowed,nonatomic) BOOL shadowed; 
@property (assign,getter=isInPlaceFilteringEnabled,nonatomic) BOOL inPlaceFilteringEnabled; 
@property (nonatomic,copy) id backdropScaleAdjustment; 
@property (assign,nonatomic) BOOL shouldCrossfade; 
@property (assign,nonatomic) BOOL useBuiltInAlphaTransformerAndBackdropScaleAdjustment; 
@property (assign,nonatomic) BOOL useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary; 
@property (assign,getter=isRecipeDynamic,nonatomic) BOOL recipeDynamic; 
@property (assign,nonatomic) BOOL ignoresScreenClip; 
@property (assign,getter=isContentReplacedWithSnapshot,nonatomic) BOOL contentReplacedWithSnapshot; 
@property (getter=_materialLayer,nonatomic,readonly) MTMaterialLayer * materialLayer; 
@property (assign,nonatomic) BOOL shouldCrossfadeIfNecessary; 
@property (assign,nonatomic) BOOL forceCrossfadeIfNecessary; 
@property (getter=_backdropFloatAnimatableProperty,nonatomic,retain) UIViewFloatAnimatableProperty * backdropFloatAnimatableProperty;              //@synthesize backdropFloatAnimatableProperty=_backdropFloatAnimatableProperty - In the implementation block
@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,copy) NSString * groupNameBase;                                                                                               //@synthesize groupNameBase=_groupNameBase - In the implementation block
@property (assign,nonatomic) double weighting; 
@property (assign,nonatomic) long long recipe;                                                                                                     //@synthesize recipe=_recipe - In the implementation block
@property (assign,nonatomic) long long configuration;                                                                                              //@synthesize configuration=_configuration - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                                                                //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,copy) NSString * debugIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)materialViewWithRecipeNamesByTraitCollection:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(/*^block*/id)arg5 ;
+(id)materialViewWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3 compatibleWithTraitCollection:(id)arg4 ;
+(id)newDefaultHighlightAnimator;
+(id)_recipeNameForTraitCollection:(id)arg1 withRecipeNamesByTraitCollection:(id)arg2 ;
+(id)materialViewWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(/*^block*/id)arg4 ;
+(id)materialViewWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3 ;
+(id)materialViewWithRecipeNamesByTraitCollection:(id)arg1 compatibleWithTraitCollection:(id)arg2 bundle:(id)arg3 configuration:(long long)arg4 initialWeighting:(double)arg5 scaleAdjustment:(/*^block*/id)arg6 ;
+(id)materialViewWithRecipeNamed:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(/*^block*/id)arg5 ;
+(Class)layerClass;
+(id)materialViewWithRecipe:(long long)arg1 configuration:(long long)arg2 ;
+(id)materialViewWithRecipeNamed:(id)arg1 ;
+(id)staticMaterialViewWithRecipe:(long long)arg1 configuration:(long long)arg2 ;
-(BOOL)isManagingInterpolationForMaterialLayer:(id)arg1 ;
-(id)newShadowView;
-(id)_backdropFloatAnimatableProperty;
-(BOOL)useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
-(BOOL)managesWeightingForMaterialLayer:(id)arg1 ;
-(BOOL)isZoomEnabled;
-(void)prune;
-(void)_setRecipeName:(id)arg1 withWeighting:(double)arg2 ;
-(BOOL)forceCrossfadeIfNecessary;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(void)_updateGroupNameIfNecessary;
-(id)_groupNameWithBase:(id)arg1 ;
-(BOOL)isRecipeDynamic;
-(void)setBackdropScaleAdjustment:(id)arg1 ;
-(void)setIgnoresScreenClip:(BOOL)arg1 ;
-(void)_setupOrInvalidateAlphaTransformer;
-(void)_addObserver:(id)arg1 ;
-(id)newShadowViewWithCaptureOnlyMaterialView:(BOOL)arg1 ;
-(void)setRecipeDynamic:(BOOL)arg1 ;
-(void)_notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(id)_initWithRecipeNamesByTraitCollection:(id)arg1 compatibleWithTraitCollection:(id)arg2 bundle:(id)arg3 configuration:(long long)arg4 initialWeighting:(double)arg5 scaleAdjustment:(/*^block*/id)arg6 ;
-(BOOL)addCompletionForCurrentAnimation:(/*^block*/id)arg1 forMaterialLayer:(id)arg2 reason:(out id*)arg3 ;
-(double)weighting;
-(BOOL)isCaptureOnly;
-(BOOL)isShadowed;
-(id)_recipeNameForCurrentTraitCollection;
-(id)_materialLayer;
-(void)_reduceMotionStatusDidChange;
-(void)setGroupNameBase:(NSString *)arg1 ;
-(void)setInPlaceFilteringEnabled:(BOOL)arg1 ;
-(void)setBlurEnabled:(BOOL)arg1 ;
-(void)_reduceTransparencyStatusDidChange;
-(void)setWeighting:(double)arg1 ;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(void)setShouldCrossfadeIfNecessary:(BOOL)arg1 ;
-(BOOL)shouldCrossfade;
-(NSString *)groupNameBase;
-(BOOL)isInPlaceFilteringEnabled;
-(BOOL)isBlurEnabled;
-(void)setBackdropFloatAnimatableProperty:(UIViewFloatAnimatableProperty *)arg1 ;
-(long long)recipe;
-(void)setForceCrossfadeIfNecessary:(BOOL)arg1 ;
-(BOOL)isContentReplacedWithSnapshot;
-(BOOL)ignoresScreenClip;
-(void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary:(BOOL)arg1 ;
-(void)_removeObserver:(id)arg1 ;
-(void)setRecipe:(long long)arg1 ;
-(void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustment:(BOOL)arg1 ;
-(id)_initWithCoreMaterialRecipe:(id)arg1 fromBundle:(id)arg2 coreMaterialConfiguration:(id)arg3 initialWeighting:(double)arg4 scaleAdjustment:(/*^block*/id)arg5 ;
-(void)setRecipeName:(NSString *)arg1 ;
-(BOOL)shouldCrossfadeIfNecessary;
-(void)_updateRecipeNameIfNeeded;
-(id)_initWithRecipe:(long long)arg1 configuration:(long long)arg2 userInterfaceStyle:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(/*^block*/id)arg5 ;
-(id)backdropScaleAdjustment;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setContentReplacedWithSnapshot:(BOOL)arg1 ;
-(void)setShadowed:(BOOL)arg1 ;
-(id)init;
-(BOOL)isManagingOpacityForMaterialLayer:(id)arg1 ;
-(NSString *)recipeName;
-(BOOL)useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
-(id)_coreMaterialVisualStylingProviderForCategory:(id)arg1 ;
-(void)setCaptureOnly:(BOOL)arg1 ;
-(void)_setupAlphaTransformer;
-(void)_invalidateAlphaTransformer;
-(NSString *)debugIdentifier;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setShouldCrossfade:(BOOL)arg1 ;
-(NSString *)groupName;
-(NSString *)description;
-(void)layoutSubviews;
-(long long)configuration;
-(void)didMoveToWindow;
-(BOOL)isHighlighted;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setConfiguration:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

