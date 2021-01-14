/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIView, UIImage, _UIVisualEffectViewBackdropCaptureGroup, NSMutableArray, _UIVisualEffectHost, _UIVisualEffectEnvironment, UIVisualEffect, _UIVisualEffectViewCornerMask, NSArray, NSString, _UIVisualEffectBackdropView;

@interface UIVisualEffectView : UIView <NSSecureCoding> {

	UIView* _maskView;
	UIImage* _maskImage;
	_UIVisualEffectViewBackdropCaptureGroup* _captureGroup;
	NSMutableArray* _captureDependents;
	_UIVisualEffectHost* _backgroundHost;
	_UIVisualEffectHost* _contentHost;
	_UIVisualEffectEnvironment* _environment;
	struct {
		unsigned backgroundHostNeedsUpdate : 1;
		unsigned contentHostNeedsUpdate : 1;
		unsigned allowsDithering : 1;
		unsigned allowsBlurring : 1;
		unsigned allowsGroupFiltering : 1;
		unsigned useReducedTransparencyForContentHost : 1;
		unsigned isUpdatingSubviews : 1;
		unsigned hasBackdropBackgroundColorAlpha : 1;
	}  _effectViewFlags;
	BOOL _useLiveMasking;
	UIVisualEffectView* _captureSource;
	UIVisualEffect* _effect;
	_UIVisualEffectViewCornerMask* __cornerMask;
	NSArray* _backgroundEffects;
	NSArray* _contentEffects;

}

@property (assign,setter=_setCornerRadius:,nonatomic) double _cornerRadius; 
@property (setter=_setCornerMask:,nonatomic,retain) _UIVisualEffectViewCornerMask * _cornerMask;                                                                                            //@synthesize _cornerMask=__cornerMask - In the implementation block
@property (nonatomic,readonly) BOOL _applyCornerMaskToSelf; 
@property (assign,setter=_setBackdropViewBackgroundColorAlpha:,nonatomic) double _backdropViewBackgroundColorAlpha; 
@property (nonatomic,copy) NSArray * backgroundEffects;                                                                                                                                     //@synthesize backgroundEffects=_backgroundEffects - In the implementation block
@property (nonatomic,copy) NSArray * contentEffects;                                                                                                                                        //@synthesize contentEffects=_contentEffects - In the implementation block
@property (assign,setter=_setUseLiveMasking:,getter=_useLiveMasking,nonatomic) BOOL useLiveMasking;                                                                                         //@synthesize useLiveMasking=_useLiveMasking - In the implementation block
@property (assign,setter=_setNoiseEnabled:,getter=_isNoiseEnabled,nonatomic) BOOL _noiseEnabled; 
@property (setter=_setGroupName:,nonatomic,copy) NSString * _groupName; 
@property (assign,setter=_setCaptureView:,nonatomic,__weak) _UIVisualEffectBackdropView * _captureView; 
@property (assign,nonatomic) BOOL allowsDithering; 
@property (assign,nonatomic) BOOL allowsBlurring; 
@property (nonatomic,readonly) _UIVisualEffectViewBackdropCaptureGroup * _captureGroup; 
@property (setter=_setCaptureDependents:,nonatomic,copy) NSArray * _captureDependents; 
@property (nonatomic,__weak,readonly) UIVisualEffectView * _captureSource;                                                                                                                  //@synthesize captureSource=_captureSource - In the implementation block
@property (assign,setter=_setRenderMode:,nonatomic) long long _renderMode; 
@property (setter=_setMaskImage:,nonatomic,retain) UIImage * _maskImage; 
@property (assign,setter=_setAllowsGroupFiltering:,nonatomic) BOOL _allowsGroupFiltering; 
@property (assign,setter=_setUseReducedTransparencyForContentEffects:,getter=_useReducedTransparencyForContentEffects,nonatomic) BOOL useReducedTransparencyForContentEffects; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,copy) UIVisualEffect * effect;                                                                                                                                         //@synthesize effect=_effect - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)_contentViewClass;
-(void)setEffect:(UIVisualEffect *)arg1 ;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(id)_debug;
-(UIVisualEffect *)effect;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(double)_continuousCornerRadius;
-(void)_registerNotifications;
-(UIImage *)_maskImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(double)_cornerRadius;
-(BOOL)allowsDithering;
-(void)setBackgroundEffects:(NSArray *)arg1 ;
-(void)_applyCornerRadiusToSubviews;
-(void)_setCornerRadius:(double)arg1 continuous:(BOOL)arg2 maskedCorners:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)didMoveToSuperview;
-(id)_maskView;
-(void)_updateEffectForAlphaTransitionWillBegin:(id)arg1 ;
-(void)_generateBackgroundEffects:(id)arg1 contentEffects:(id)arg2 ;
-(BOOL)_useReducedTransparencyForContentEffects;
-(void)_updateEnvironmentAndFlagUpdatesIfNecessary:(/*^block*/id)arg1 ;
-(void)_setUseReducedTransparencyForContentEffects:(BOOL)arg1 ;
-(void)setAllowsDithering:(BOOL)arg1 ;
-(void)_unregisterNotifications;
-(id)description;
-(NSString *)_groupName;
-(void)layoutSubviews;
-(void)_updateEffectForAlphaTransitionDidEnd:(id)arg1 ;
-(void)_setEffect:(id)arg1 ;
-(void)didMoveToWindow;
-(void)_updateEffectForReducedTransparency;
-(id)_effectDescriptorForEffects:(id)arg1 usage:(long long)arg2 ;
-(void)_updateEffectForSnapshotWillBegin:(id)arg1 ;
-(void)setAllowsBlurring:(BOOL)arg1 ;
-(void)_updateEffectForAccessibilityChanges:(id)arg1 ;
-(void)_setBackdropViewBackgroundColorAlpha:(double)arg1 ;
-(long long)_renderMode;
-(_UIVisualEffectViewCornerMask *)_cornerMask;
-(_UIVisualEffectBackdropView *)_captureView;
-(NSArray *)contentEffects;
-(void)_resetEffect;
-(id)_contentHost;
-(id)_environment;
-(double)_backdropViewBackgroundColorAlpha;
-(id)initWithEffect:(id)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3 ;
-(void)_updateEffectsFromLegacyEffect;
-(void)_updateEffectForSnapshotDidEnd:(id)arg1 ;
-(void)_setMaskView:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setGroupName:(id)arg1 ;
-(_UIVisualEffectViewBackdropCaptureGroup *)_captureGroup;
-(void)_setCornerRadius:(double)arg1 ;
-(void)_commonInit;
-(BOOL)allowsBlurring;
-(void)_setMaskImage:(id)arg1 ;
-(UIVisualEffectView *)_captureSource;
-(void)_updateSubviews;
-(void)_setCornerMask:(id)arg1 ;
-(void)_setRenderMode:(long long)arg1 ;
-(BOOL)_isNoiseEnabled;
-(void)_ensureContentHostWithView:(id)arg1 ;
-(id)_backgroundHost;
-(BOOL)_useLiveMasking;
-(void)_setCaptureView:(id)arg1 ;
-(void)_setTintOpacity:(double)arg1 ;
-(BOOL)_applyCornerMaskToSelf;
-(UIView *)contentView;
-(void)_generateDeferredAnimations:(id)arg1 ;
-(void)_updateEffectBackgroundColor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSArray *)backgroundEffects;
-(void)_ensureBackgroundHost;
-(void)_generateEffectAnimations:(id)arg1 ;
-(void)_setAllowsGroupFiltering:(BOOL)arg1 ;
-(void)_updateSubView:(id)arg1 frame:(CGRect)arg2 ;
-(void)_addCaptureDependent:(id)arg1 ;
-(BOOL)_allowsGroupFiltering;
-(id)_whatsWrongWithThisEffect;
-(void)_configureEffects;
-(void)_setNoiseEnabled:(BOOL)arg1 ;
-(id)_colorViewBoundsOverlayCreateIfNecessary:(BOOL)arg1 ;
-(id)_initialValueForKey:(id)arg1 ;
-(void)dealloc;
-(void)setContentEffects:(NSArray *)arg1 ;
-(NSArray *)_captureDependents;
-(void)_setUseLiveMasking:(BOOL)arg1 ;
-(void)_updateCaptureDependents;
-(void)_removeCaptureDependent:(id)arg1 ;
-(id)_maskImageForMaskView:(id)arg1 ;
-(void)_setCaptureDependents:(id)arg1 ;
@end

