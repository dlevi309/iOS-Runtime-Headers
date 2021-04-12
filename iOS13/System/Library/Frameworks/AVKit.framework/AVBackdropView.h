/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVView.h>

@class NSArray, UIView, UIStackView, UIVisualEffectView, AVCABackdropLayerView;

@interface AVBackdropView : AVView {

	NSArray* _temporaryArrangedSubviews;
	BOOL _prefersLowQualityEffects;
	BOOL _disablesAutoLayout;
	long long _axis;
	unsigned long long _shapeStyle;
	UIView* _targetViewForSecondaryMaterialOverlay;
	UIStackView* _stackView;
	UIVisualEffectView* _secondaryMaterialOverlayView;
	NSArray* _secondaryMaterialOverlayViewConstraints;
	AVCABackdropLayerView* _backdropLayerView;

}

@property (nonatomic,readonly) UIStackView * stackView;                                      //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * secondaryMaterialOverlayView;              //@synthesize secondaryMaterialOverlayView=_secondaryMaterialOverlayView - In the implementation block
@property (nonatomic,retain) NSArray * secondaryMaterialOverlayViewConstraints;              //@synthesize secondaryMaterialOverlayViewConstraints=_secondaryMaterialOverlayViewConstraints - In the implementation block
@property (assign,nonatomic) BOOL disablesAutoLayout;                                        //@synthesize disablesAutoLayout=_disablesAutoLayout - In the implementation block
@property (nonatomic,retain) AVCABackdropLayerView * backdropLayerView;                      //@synthesize backdropLayerView=_backdropLayerView - In the implementation block
@property (nonatomic,readonly) long long axis;                                               //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets contentLayoutMargins; 
@property (assign,nonatomic) unsigned long long shapeStyle;                                  //@synthesize shapeStyle=_shapeStyle - In the implementation block
@property (nonatomic,retain) UIView * targetViewForSecondaryMaterialOverlay;                 //@synthesize targetViewForSecondaryMaterialOverlay=_targetViewForSecondaryMaterialOverlay - In the implementation block
@property (assign,nonatomic) BOOL prefersLowQualityEffects;                                  //@synthesize prefersLowQualityEffects=_prefersLowQualityEffects - In the implementation block
+(id)secondaryMaterialOverlayView;
+(void)removeAllFiltersFromView:(id)arg1 ;
+(void)applyPrimaryGlyphTintToView:(id)arg1 ;
+(void)applySecondaryGlyphTintToView:(id)arg1 ;
+(void)applyGlyphTintColor:(id)arg1 toView:(id)arg2 ;
+(void)configureSlider:(id)arg1 thumbView:(id)arg2 loadedTrackView:(id)arg3 ;
+(void)applyBaseTrackTintToView:(id)arg1 ;
+(void)applyCompletedTrackTintToView:(id)arg1 ;
+(void)applyLoadedTrackTintToView:(id)arg1 ;
+(void)configureView:(id)arg1 forTintEffectWithColor:(id)arg2 filterType:(id)arg3 ;
+(void)configureView:(id)arg1 withBackgroundFillOfColor:(id)arg2 opacity:(double)arg3 filter:(id)arg4 ;
+(id)secondaryGlyphTintColor;
-(void)dealloc;
-(long long)axis;
-(void)setHidden:(BOOL)arg1 ;
-(id)backgroundColor;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(id)arrangedSubviews;
-(UIStackView *)stackView;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(void)setCustomSpacing:(double)arg1 afterView:(id)arg2 ;
-(double)customSpacingAfterView:(id)arg1 ;
-(void)setPrefersLowQualityEffects:(BOOL)arg1 ;
-(BOOL)prefersLowQualityEffects;
-(id)initWithFrame:(CGRect)arg1 disablingAutoLayout:(BOOL)arg2 ;
-(BOOL)hasVisibleArrangedSubview;
-(void)setArrangedSubviews:(id)arg1 axis:(long long)arg2 ;
-(void)setCustomSpacing:(double)arg1 afterViews:(id)arg2 ;
-(void)setTargetViewForSecondaryMaterialOverlay:(UIView *)arg1 ;
-(NSDirectionalEdgeInsets)contentLayoutMargins;
-(void)setContentLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(void)setShapeStyle:(unsigned long long)arg1 ;
-(id)_stackViewIfLoaded;
-(void)_applyShapeStyle;
-(unsigned long long)shapeStyle;
-(UIView *)targetViewForSecondaryMaterialOverlay;
-(UIVisualEffectView *)secondaryMaterialOverlayView;
-(void)setSecondaryMaterialOverlayView:(UIVisualEffectView *)arg1 ;
-(NSArray *)secondaryMaterialOverlayViewConstraints;
-(void)setSecondaryMaterialOverlayViewConstraints:(NSArray *)arg1 ;
-(BOOL)disablesAutoLayout;
-(void)setDisablesAutoLayout:(BOOL)arg1 ;
-(AVCABackdropLayerView *)backdropLayerView;
-(void)setBackdropLayerView:(AVCABackdropLayerView *)arg1 ;
@end

