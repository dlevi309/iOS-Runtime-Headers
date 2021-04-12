/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIView, UIImage, _UIVisualEffectViewBackdropCaptureGroup, _UIVisualEffectHost, _UIVisualEffectEnvironment, UIVisualEffect, _UIVisualEffectViewCornerMask, NSArray, NSString, _UIVisualEffectBackdropView;

@interface UIVisualEffectView : UIView <NSSecureCoding> {

	UIView* _maskView;
	UIImage* _maskImage;
	_UIVisualEffectViewBackdropCaptureGroup* _captureGroup;
	_UIVisualEffectHost* _backgroundHost;
	_UIVisualEffectHost* _contentHost;
	_UIVisualEffectEnvironment* _environment;
	BOOL _backgroundHostNeedsUpdate;
	BOOL _contentHostNeedsUpdate;
	BOOL _isDependent;
	BOOL _isUpdatingSubviews;
	double _backdropViewBackgroundColorAlpha;
	BOOL _useReducedTransparencyForContentHost;
	BOOL __useKeyframeWorkaround;
	BOOL _useLiveMasking;
	BOOL _allowsDithering;
	BOOL _allowsBlurring;
	UIVisualEffect* _effect;
	_UIVisualEffectViewCornerMask* __cornerMask;
	NSArray* __captureDependents;
	NSArray* _backgroundEffects;
	NSArray* _contentEffects;

}

@property (assign,setter=_setCornerRadius:,nonatomic) double _cornerRadius; 
@property (setter=_setCornerMask:,nonatomic,retain) _UIVisualEffectViewCornerMask * _cornerMask;                                                                                            //@synthesize _cornerMask=__cornerMask - In the implementation block
@property (nonatomic,readonly) BOOL _applyCornerMaskToSelf; 
@property (assign,setter=_setBackdropViewBackgroundColorAlpha:,getter=_backdropViewBackgroundColorAlpha,nonatomic) double _backdropViewBackgroundColorAlpha; 
@property (assign,setter=_setUseKeyframeWorkaround:,nonatomic) BOOL _useKeyframeWorkaround;                                                                                                 //@synthesize _useKeyframeWorkaround=__useKeyframeWorkaround - In the implementation block
@property (setter=_setCaptureDependents:,nonatomic,copy) NSArray * _captureDependents;                                                                                                      //@synthesize _captureDependents=__captureDependents - In the implementation block
@property (nonatomic,copy) NSArray * backgroundEffects;                                                                                                                                     //@synthesize backgroundEffects=_backgroundEffects - In the implementation block
@property (nonatomic,copy) NSArray * contentEffects;                                                                                                                                        //@synthesize contentEffects=_contentEffects - In the implementation block
@property (assign,setter=_setUseLiveMasking:,getter=_useLiveMasking,nonatomic) BOOL useLiveMasking;                                                                                         //@synthesize useLiveMasking=_useLiveMasking - In the implementation block
@property (setter=_setGroupName:,nonatomic,copy) NSString * _groupName; 
@property (assign,setter=_setCaptureView:,nonatomic,__weak) _UIVisualEffectBackdropView * _captureView; 
@property (assign,setter=_setNoiseEnabled:,getter=_isNoiseEnabled,nonatomic) BOOL _noiseEnabled; 
@property (assign,nonatomic) BOOL allowsDithering;                                                                                                                                          //@synthesize allowsDithering=_allowsDithering - In the implementation block
@property (assign,nonatomic) BOOL allowsBlurring;                                                                                                                                           //@synthesize allowsBlurring=_allowsBlurring - In the implementation block
@property (nonatomic,readonly) _UIVisualEffectViewBackdropCaptureGroup * _captureGroup;                                                                                                     //@synthesize captureGroup=_captureGroup - In the implementation block
@property (setter=_setMaskImage:,nonatomic,retain) UIImage * _maskImage; 
@property (assign,setter=_setAllowsGroupFiltering:,nonatomic) BOOL _allowsGroupFiltering; 
@property (assign,setter=_setUseReducedTransparencyForContentEffects:,getter=_useReducedTransparencyForContentEffects,nonatomic) BOOL useReducedTransparencyForContentEffects; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,copy) UIVisualEffect * effect;                                                                                                                                         //@synthesize effect=_effect - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)_contentViewClass;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)_groupName;
-(void)_commonInit;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithEffect:(id)arg1 ;
-(void)setEffect:(UIVisualEffect *)arg1 ;
-(void)layoutSubviews;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(double)_cornerRadius;
-(void)_setCornerRadius:(double)arg1 continuous:(BOOL)arg2 maskedCorners:(unsigned long long)arg3 ;
-(void)_setEffect:(id)arg1 ;
-(void)setBackgroundEffects:(NSArray *)arg1 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)_setCornerRadius:(double)arg1 ;
-(void)_applyCornerRadiusToSubviews;
-(void)_setMaskView:(id)arg1 ;
-(double)_continuousCornerRadius;
-(BOOL)allowsBlurring;
-(BOOL)allowsDithering;
-(UIVisualEffect *)effect;
-(_UIVisualEffectBackdropView *)_captureView;
-(void)setAllowsDithering:(BOOL)arg1 ;
-(void)setAllowsBlurring:(BOOL)arg1 ;
-(void)_updateEnvironmentAndFlagUpdatesIfNecessary:(/*^block*/id)arg1 ;
-(void)_configureEffects;
-(void)_updateEffectForAccessibilityChanges:(id)arg1 ;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(void)_updateEffectsFromLegacyEffect;
-(void)_ensureContentHostWithView:(id)arg1 ;
-(void)_updateSubviews;
-(id)_initialValueForKey:(id)arg1 ;
-(id)_effectDescriptorForEffects:(id)arg1 usage:(long long)arg2 ;
-(void)_ensureBackgroundHost;
-(void)_generateWorkaroundKeyframeAnimationsForEffects:(id)arg1 ;
-(void)setContentEffects:(NSArray *)arg1 ;
-(void)_generateDeferredAnimations:(id)arg1 ;
-(void)_generateEffectAnimations:(id)arg1 ;
-(void)_generateBackgroundEffects:(id)arg1 contentEffects:(id)arg2 ;
-(void)_updateSubView:(id)arg1 frame:(CGRect)arg2 ;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(void)_setCaptureView:(id)arg1 ;
-(BOOL)_applyCornerMaskToSelf;
-(void)_setCornerMask:(id)arg1 ;
-(id)_maskImageForMaskView:(id)arg1 ;
-(id)_maskView;
-(void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3 ;
-(void)_updateEffectForReducedTransparency;
-(void)_resetEffect;
-(void)_updateEffectBackgroundColor;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)_setGroupName:(id)arg1 ;
-(void)_setCaptureDependents:(id)arg1 ;
-(void)_setNoiseEnabled:(BOOL)arg1 ;
-(BOOL)_isNoiseEnabled;
-(void)_setMaskImage:(id)arg1 ;
-(UIImage *)_maskImage;
-(BOOL)_allowsGroupFiltering;
-(void)_setAllowsGroupFiltering:(BOOL)arg1 ;
-(id)_debug;
-(id)_whatsWrongWithThisEffect;
-(void)_setBackdropViewBackgroundColorAlpha:(double)arg1 ;
-(double)_backdropViewBackgroundColorAlpha;
-(void)_setUseReducedTransparencyForContentEffects:(BOOL)arg1 ;
-(BOOL)_useReducedTransparencyForContentEffects;
-(void)_updateEffectForSnapshotWillBegin:(id)arg1 ;
-(void)_updateEffectForSnapshotDidEnd:(id)arg1 ;
-(void)_updateEffectForAlphaTransitionWillBegin:(id)arg1 ;
-(void)_updateEffectForAlphaTransitionDidEnd:(id)arg1 ;
-(void)_setTintOpacity:(double)arg1 ;
-(id)_contentHost;
-(id)_backgroundHost;
-(_UIVisualEffectViewBackdropCaptureGroup *)_captureGroup;
-(_UIVisualEffectViewCornerMask *)_cornerMask;
-(BOOL)_useKeyframeWorkaround;
-(void)_setUseKeyframeWorkaround:(BOOL)arg1 ;
-(NSArray *)_captureDependents;
-(NSArray *)backgroundEffects;
-(NSArray *)contentEffects;
-(BOOL)_useLiveMasking;
-(void)_setUseLiveMasking:(BOOL)arg1 ;
-(id)_colorViewBoundsOverlayCreateIfNecessary:(BOOL)arg1 ;
@end

