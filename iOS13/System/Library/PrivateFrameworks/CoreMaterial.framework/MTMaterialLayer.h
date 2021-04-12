/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
*/

#import <CoreMaterial/CoreMaterial-Structs.h>
#import <QuartzCore/CABackdropLayer.h>

@class MTMaterialSettingsInterpolator, NSMutableDictionary, NSString;

@interface MTMaterialLayer : CABackdropLayer {

	MTMaterialSettingsInterpolator* _settingsInterpolator;
	BOOL _needsConfiguring;
	BOOL _blurEnabled;
	BOOL _zoomEnabled;
	/*^block*/id _backdropScaleAdjustment;
	/*^block*/id _defaultBackdropScaleAdjustment;
	BOOL _shouldCrossfade;
	BOOL _contentReplacedWithSnapshot;
	NSMutableDictionary* _pendingChange;
	NSMutableDictionary* _visualStyleCategoriesToProviders;
	struct {
		unsigned delegateManagesWeighting : 1;
		unsigned delegateImplementsManagingOpacity : 1;
		unsigned delegateImplementsManagingInterpolation : 1;
	}  _materialLayerDelegateFlags;
	BOOL _reduceTransparencyEnabled;
	BOOL _reduceMotionEnabled;

}

@property (nonatomic,copy) NSString * recipeName; 
@property (assign,getter=isBlurEnabled,nonatomic) BOOL blurEnabled; 
@property (assign,getter=isZoomEnabled,nonatomic) BOOL zoomEnabled; 
@property (nonatomic,copy) id backdropScaleAdjustment; 
@property (getter=_backdropScale,nonatomic,readonly) double backdropScale; 
@property (nonatomic,copy) id blurRadiusTransformer; 
@property (assign,nonatomic) BOOL shouldCrossfade; 
@property (assign,getter=isContentReplacedWithSnapshot,nonatomic) BOOL contentReplacedWithSnapshot; 
@property (getter=_privateOpacity,nonatomic,readonly) double privateOpacity; 
@property (setter=_setRecipeSettings:,getter=_recipeSettings,nonatomic,retain) id<MTRecipeMaterialSettingsProviding> recipeSettings; 
@property (nonatomic,copy) id defaultBackdropScaleAdjustment;                                                                                     //@synthesize defaultBackdropScaleAdjustment=_defaultBackdropScaleAdjustment - In the implementation block
@property (nonatomic,copy) NSString * recipe; 
@property (nonatomic,copy) NSString * configuration; 
@property (assign,nonatomic) double weighting; 
@property (assign,getter=isReduceTransparencyEnabled,nonatomic) BOOL reduceTransparencyEnabled;                                                   //@synthesize reduceTransparencyEnabled=_reduceTransparencyEnabled - In the implementation block
@property (assign,getter=isReduceMotionEnabled,nonatomic) BOOL reduceMotionEnabled;                                                               //@synthesize reduceMotionEnabled=_reduceMotionEnabled - In the implementation block
+(void)initialize;
+(id)_attributeKeys;
+(id)mt_implicitlyAnimatableKeys;
+(id)mt_animatableKeys;
+(id)_unserializedAttributeKeys;
+(void)_pruneMaterialLayerAtCompletionOfCurrentTransaction:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(BOOL)shouldCrossfade;
-(void)setShouldCrossfade:(BOOL)arg1 ;
-(void)setUnsafeUnretainedDelegate:(id)arg1 ;
-(void)layoutSublayers;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(BOOL)isZoomEnabled;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(void)setReduceMotionEnabled:(BOOL)arg1 ;
-(void)prune;
-(void)_reevaluateDefaultShouldCrossfade;
-(void)_setNeedsConfiguring;
-(void)_updateVisualStylingProviders;
-(BOOL)_needsPruning;
-(void)_configureIfNecessaryWithSettingsInterpolator:(id)arg1 ;
-(void)_configureDelegateFlagsForDelegate:(id)arg1 ;
-(BOOL)_delegateManagesWeighting;
-(BOOL)_didValueChangeForKey:(id)arg1 withPendingChange:(id)arg2 ;
-(void)_updateForChangeInRecipeAndConfiguration;
-(void)_updateForChangeInWeighting;
-(BOOL)_isDelegateManagingOpacity;
-(BOOL)_isDelegateManagingInterpolation;
-(void)_configureBackdropLayerIfNecessaryWithSettingsInterpolator:(id)arg1 ;
-(void)_configureBackdropLayer:(id)arg1 withSettingsInterpolator:(id)arg2 preservingFiltersIfIdentity:(BOOL)arg3 ;
-(BOOL)isBlurEnabled;
-(void)_adjustScaleOfBackdropLayer:(id)arg1 ifNecessaryWithSettingsInterpolator:(id)arg2 ;
-(void)_setPrivateOpacity:(double)arg1 removingIfIdentity:(BOOL)arg2 ;
-(void)setDefaultBackdropScaleAdjustment:(id)arg1 ;
-(NSString *)recipeName;
-(void)setReduceTransparencyEnabled:(BOOL)arg1 ;
-(id)visualStylingProviderForCategory:(id)arg1 ;
-(BOOL)isReduceTransparencyEnabled;
-(BOOL)isReduceMotionEnabled;
-(id)defaultBackdropScaleAdjustment;
-(void)setRecipeName:(id)arg1 fromBundle:(id)arg2 ;
-(id)blurRadiusTransformer;
-(void)setBlurRadiusTransformer:(id)arg1 ;
-(void)setRecipeName:(NSString *)arg1 ;
-(void)setBlurEnabled:(BOOL)arg1 ;
-(id)backdropScaleAdjustment;
-(void)setBackdropScaleAdjustment:(id)arg1 ;
-(double)_backdropScale;
-(BOOL)isContentReplacedWithSnapshot;
-(void)setContentReplacedWithSnapshot:(BOOL)arg1 ;
-(double)_privateOpacity;
@end

