/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (assign,getter=isBlurEnabled,nonatomic) BOOL blurEnabled; 
@property (assign,getter=isZoomEnabled,nonatomic) BOOL zoomEnabled; 
@property (assign,getter=isCaptureOnly,nonatomic) BOOL captureOnly; 
@property (nonatomic,copy) id backdropScaleAdjustment; 
@property (assign,nonatomic) BOOL shouldCrossfade; 
@property (assign,nonatomic) BOOL useBuiltInAlphaTransformerAndBackdropScaleAdjustment; 
@property (assign,nonatomic) BOOL useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary; 
@property (assign,getter=isRecipeDynamic,nonatomic) BOOL recipeDynamic; 
@property (assign,nonatomic) BOOL ignoresScreenClip; 
@property (assign,getter=isContentReplacedWithSnapshot,nonatomic) BOOL contentReplacedWithSnapshot; 
@property (nonatomic,copy) NSString * recipeName; 
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(Class)layerClass;
+(id)materialViewWithRecipe:(long long)arg1 configuration:(long long)arg2 ;
+(id)_recipeNameForTraitCollection:(id)arg1 withRecipeNamesByTraitCollection:(id)arg2 ;
+(id)materialViewWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3 ;
+(id)newDefaultHighlightAnimator;
+(id)materialViewWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(/*^block*/id)arg4 ;
+(id)materialViewWithRecipeNamed:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(/*^block*/id)arg5 ;
+(id)materialViewWithRecipeNamesByTraitCollection:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(/*^block*/id)arg5 ;
+(id)staticMaterialViewWithRecipe:(long long)arg1 configuration:(long long)arg2 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_removeObserver:(id)arg1 ;
-(void)setConfiguration:(long long)arg1 ;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(long long)configuration;
-(void)_addObserver:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setWeighting:(double)arg1 ;
-(double)weighting;
-(BOOL)shouldCrossfade;
-(void)setShouldCrossfade:(BOOL)arg1 ;
-(void)setCaptureOnly:(BOOL)arg1 ;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(BOOL)isZoomEnabled;
-(id)_materialLayer;
-(long long)recipe;
-(void)setRecipe:(long long)arg1 ;
-(BOOL)ignoresScreenClip;
-(void)setIgnoresScreenClip:(BOOL)arg1 ;
-(BOOL)isCaptureOnly;
-(void)prune;
-(BOOL)addCompletionForCurrentAnimation:(/*^block*/id)arg1 forMaterialLayer:(id)arg2 ;
-(BOOL)isBlurEnabled;
-(BOOL)managesWeightingForMaterialLayer:(id)arg1 ;
-(BOOL)isManagingOpacityForMaterialLayer:(id)arg1 ;
-(BOOL)isManagingInterpolationForMaterialLayer:(id)arg1 ;
-(NSString *)recipeName;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(void)setRecipeName:(NSString *)arg1 ;
-(void)setBlurEnabled:(BOOL)arg1 ;
-(id)backdropScaleAdjustment;
-(void)setBackdropScaleAdjustment:(id)arg1 ;
-(BOOL)isContentReplacedWithSnapshot;
-(void)setContentReplacedWithSnapshot:(BOOL)arg1 ;
-(void)_notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(void)setGroupNameBase:(NSString *)arg1 ;
-(BOOL)isRecipeDynamic;
-(BOOL)useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
-(void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustment:(BOOL)arg1 ;
-(BOOL)useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
-(void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary:(BOOL)arg1 ;
-(id)_coreMaterialVisualStylingProviderForCategory:(id)arg1 ;
-(void)_reduceTransparencyStatusDidChange;
-(void)_reduceMotionStatusDidChange;
-(id)_initWithCoreMaterialRecipe:(id)arg1 fromBundle:(id)arg2 coreMaterialConfiguration:(id)arg3 initialWeighting:(double)arg4 scaleAdjustment:(/*^block*/id)arg5 ;
-(id)_initWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(/*^block*/id)arg4 ;
-(void)_updateGroupNameIfNecessary;
-(id)_backdropFloatAnimatableProperty;
-(void)_setupAlphaTransformer;
-(void)_invalidateAlphaTransformer;
-(id)_recipeNameForCurrentTraitCollection;
-(void)_updateRecipeNameIfNeeded;
-(id)_groupNameWithBase:(id)arg1 ;
-(void)_setupOrInvalidateAlphaTransformer;
-(id)_initWithRecipeNamesByTraitCollection:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(/*^block*/id)arg5 ;
-(void)_setRecipeName:(id)arg1 withWeighting:(double)arg2 ;
-(NSString *)groupNameBase;
-(void)setBackdropFloatAnimatableProperty:(UIViewFloatAnimatableProperty *)arg1 ;
-(void)setRecipeDynamic:(BOOL)arg1 ;
-(id)newShadowViewWithCaptureOnlyMaterialView:(BOOL)arg1 ;
-(id)newShadowView;
-(BOOL)shouldCrossfadeIfNecessary;
-(void)setShouldCrossfadeIfNecessary:(BOOL)arg1 ;
-(BOOL)forceCrossfadeIfNecessary;
-(void)setForceCrossfadeIfNecessary:(BOOL)arg1 ;
@end

