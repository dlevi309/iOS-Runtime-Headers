/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIView, UIImageView, _UISegmentedControlAppearanceStorage, _UIFloatingContentView, NSString, _UIBadgeView, NSArray;

@interface UISegment : UIImageView <CAAnimationDelegate> {

	UIView* _info;
	UIImageView* _backgroundView;
	UIView* _selectionIndicatorView;
	UIImageView* _selectionImageView;
	_UISegmentedControlAppearanceStorage* _appearanceStorage;
	_UIFloatingContentView* _floatingContentView;
	double _width;
	CGSize _contentOffset;
	long long _barStyle;
	unsigned long long _rightSegmentState;
	NSString* _badgeValue;
	_UIBadgeView* _badgeView;
	id _objectValue;
	struct {
		unsigned size : 2;
		unsigned selected : 1;
		unsigned highlighted : 1;
		unsigned showDivider : 1;
		unsigned hasImage : 1;
		unsigned position : 3;
		unsigned autosizeText : 1;
		unsigned isMomentary : 1;
		unsigned wasSelected : 1;
		unsigned needsBackgroundAndContentViewUpdate : 1;
		unsigned usesAXTextSize : 1;
		unsigned selectionIndicatorDragged : 1;
		unsigned hovered : 1;
		unsigned animatingSelectionIndicator : 1;
	}  _segmentFlags;
	NSArray* _infoConstraints;
	double _requestedScaleFactor;

}

@property (setter=_setInfoConstraints:,nonatomic,copy) NSArray * _infoConstraints;              //@synthesize infoConstraints=_infoConstraints - In the implementation block
@property (getter=isSelected) BOOL selected; 
@property (getter=isMomentary) BOOL momentary; 
@property (assign) int controlSize; 
@property (nonatomic,copy) NSString * badgeValue; 
@property (readonly) UIView * badgeView; 
@property (assign,nonatomic) double requestedScaleFactor;                                       //@synthesize requestedScaleFactor=_requestedScaleFactor - In the implementation block
@property (assign,nonatomic) unsigned position; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_backgroundImageWithStorage:(id)arg1 mini:(BOOL)arg2 state:(unsigned long long)arg3 position:(unsigned)arg4 drawMode:(unsigned*)arg5 isCustom:(BOOL*)arg6 defaultBlock:(/*^block*/id)arg7 ;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)position;
-(void)setBounds:(CGRect)arg1 ;
-(id)label;
-(CGSize)contentSize;
-(BOOL)isSelected;
-(id)objectValue;
-(void)setObjectValue:(id)arg1 ;
-(void)setPosition:(unsigned)arg1 ;
-(void)removeFromSuperview;
-(void)setFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setTintColor:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)tintColorDidChange;
-(id)viewForLastBaselineLayout;
-(void)setContentOffset:(CGSize)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(id)_encodableSubviews;
-(int)controlSize;
-(void)setControlSize:(int)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(double)_barHeight;
-(void)setBadgeValue:(NSString *)arg1 ;
-(NSString *)badgeValue;
-(void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_effectiveContentView;
-(id)_floatingContentView;
-(CGSize)_baselineOffsetsAtSize:(CGSize)arg1 ;
-(void)insertDividerView;
-(void)_updateTextColors;
-(void)_finishInitialSegmentSetup;
-(id)_parentSegmentedControl;
-(id)_effectiveBackgroundView;
-(unsigned long long)_segmentState;
-(BOOL)_effectiveDisableShadow;
-(Class)_segmentedControlClass;
-(id)_effectiveBackgroundTintColor;
-(void)setNeedsBackgroundAndContentViewUpdate;
-(id)_dividerImageIsCustom:(BOOL*)arg1 ;
-(void)_updateBackgroundAndContentViews;
-(id)_effectiveVibrancyEffect;
-(id)_effectiveSelectedSegmentTintColor;
-(BOOL)_effectiveUseDynamicShadow;
-(void)_updateDynamicShadow:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_insertSelectionView;
-(void)_removeSelectionIndicator;
-(CATransform3D)_highlightSelectionInfoTransform;
-(void)_updateSelectionToTransform:(CATransform3D)arg1 infoTransform:(CATransform3D)arg2 hideSelection:(BOOL)arg3 shouldAnimate:(BOOL)arg4 ;
-(void)updateDividerViewForChangedSegment:(id)arg1 ;
-(void)_updateHighlight;
-(void)_updateSelectionIndicator;
-(void)_positionInfo;
-(BOOL)isMomentary;
-(id)_stateTextAttibutes:(id)arg1 segmentState:(unsigned long long)arg2 ;
-(BOOL)_hasSelectedColor;
-(void)updateMasking;
-(id)_attributedTextForState:(unsigned long long)arg1 selected:(BOOL)arg2 forceSelectedAppearance:(BOOL)arg3 ;
-(void)_setEnabledAppearance:(BOOL)arg1 ;
-(void)_setSelectionIndicatorDragged:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_invalidateInfoConstraints;
-(UIEdgeInsets)_paddingInsets;
-(CGRect)_contentRectForBounds:(CGRect)arg1 ;
-(CGSize)_maximumTextSize;
-(void)_setInfoConstraints:(id)arg1 ;
-(CGRect)contentRect;
-(void)_updateBackgroundAndContentViewsIfNeeded;
-(id)initWithInfo:(id)arg1 size:(int)arg2 barStyle:(long long)arg3 tintColor:(id)arg4 appearanceStorage:(id)arg5 position:(unsigned)arg6 autosizeText:(BOOL)arg7 ;
-(id)_tintColorArchivingKey;
-(void)updateForAppearance:(id)arg1 ;
-(id)_dividerImage;
-(void)setWasSelected:(BOOL)arg1 ;
-(void)setUsesAXTextSize:(BOOL)arg1 ;
-(id)disabledTextColor;
-(void)setAutosizeText:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 highlighted:(BOOL)arg2 ;
-(BOOL)isSelectionIndicatorDragged;
-(void)setSelectionIndicatorDragged:(BOOL)arg1 ;
-(BOOL)isHovered;
-(void)setHovered:(BOOL)arg1 ;
-(BOOL)isAnimatingSelectionIndicator;
-(void)setAnimatingSelectionIndicator:(BOOL)arg1 ;
-(UIView *)badgeView;
-(BOOL)_isContainedInHostedFocusSystem;
-(void)setMomentary:(BOOL)arg1 ;
-(BOOL)showDivider;
-(void)setShowDivider:(BOOL)arg1 ;
-(void)animateAdd:(BOOL)arg1 ;
-(void)animateRemoveForWidth:(double)arg1 ;
-(void)_positionInfoWithoutAnimation;
-(id)_segmentLabel;
-(void)setRequestedScaleFactor:(double)arg1 ;
-(void)_forceInfoDisplay;
-(void)_updateFloatingContentControlState:(unsigned long long)arg1 context:(id)arg2 withAnimationCoordinator:(id)arg3 animated:(BOOL)arg4 ;
-(BOOL)useBlockyMagnificationInClassic;
-(double)_idealWidth;
-(NSArray *)_infoConstraints;
-(double)requestedScaleFactor;
@end

