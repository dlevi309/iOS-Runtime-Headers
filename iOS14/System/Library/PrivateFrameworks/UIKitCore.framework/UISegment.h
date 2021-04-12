/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIView, UIImageView, _UISegmentedControlAppearanceStorage, _UIFloatingContentView, NSString, _UIBadgeView, NSArray, UIAction;

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
		unsigned adjustsForContentSizeCategory : 1;
		unsigned hovered : 1;
		unsigned animatingSelectionIndicator : 1;
	}  _segmentFlags;
	NSArray* _infoConstraints;
	UIAction* _action;
	double _requestedScaleFactor;

}

@property (setter=_setInfoConstraints:,nonatomic,copy) NSArray * _infoConstraints;              //@synthesize infoConstraints=_infoConstraints - In the implementation block
@property (nonatomic,copy) UIAction * action;                                                   //@synthesize action=_action - In the implementation block
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
-(NSString *)badgeValue;
-(id)disabledTextColor;
-(void)setBadgeValue:(NSString *)arg1 ;
-(BOOL)canBecomeFocused;
-(void)_removeSelectionIndicator;
-(void)setSelectionIndicatorDragged:(BOOL)arg1 ;
-(id)_effectiveContentView;
-(void)setControlSize:(int)arg1 ;
-(unsigned)position;
-(id)objectValue;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(Class)_segmentedControlClass;
-(id)viewForLastBaselineLayout;
-(BOOL)isRightHighlighted;
-(CGSize)_maximumTextSize;
-(UIView *)badgeView;
-(void)tintColorDidChange;
-(int)controlSize;
-(void)_updateHighlight;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)_effectiveBackgroundView;
-(void)setTintColor:(id)arg1 ;
-(BOOL)isMomentary;
-(void)removeFromSuperview;
-(CGRect)contentRect;
-(void)setHovered:(BOOL)arg1 ;
-(id)_effectiveBackgroundTintColor;
-(void)_updateFloatingContentControlState:(unsigned long long)arg1 context:(id)arg2 withAnimationCoordinator:(id)arg3 animated:(BOOL)arg4 ;
-(void)_invalidateInfoConstraints;
-(double)_idealWidth;
-(unsigned long long)_segmentState;
-(void)setAutosizeText:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(CGSize)contentSize;
-(BOOL)isSelected;
-(void)encodeWithCoder:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)requestedScaleFactor;
-(void)setAnimatingSelectionIndicator:(BOOL)arg1 ;
-(double)_barHeight;
-(UIAction *)action;
-(void)updateMasking;
-(void)_updateSelectionIndicator;
-(id)_dividerImage;
-(void)setAdjustsForContentSizeCategory:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setAction:(UIAction *)arg1 ;
-(void)_positionInfo;
-(void)setBounds:(CGRect)arg1 ;
-(void)updateDividerViewForChangedSegment:(id)arg1 ;
-(CATransform3D)_highlightSelectionInfoTransform;
-(void)_setInfoConstraints:(id)arg1 ;
-(void)animateAdd:(BOOL)arg1 ;
-(id)_tintColorArchivingKey;
-(id)_floatingContentView;
-(void)_updateDynamicShadow:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_effectiveVibrancyEffect;
-(void)setWasSelected:(BOOL)arg1 ;
-(BOOL)isHovered;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setFrame:(CGRect)arg1 ;
-(id)_stateTextAttibutes:(id)arg1 segmentState:(unsigned long long)arg2 ;
-(void)_setEnabledAppearance:(BOOL)arg1 ;
-(id)_enabledColor:(BOOL)arg1 ;
-(void)_updateTextColors;
-(BOOL)showDivider;
-(BOOL)_isContainedInHostedFocusSystem;
-(BOOL)isAnimatingSelectionIndicator;
-(BOOL)isHighlighted;
-(void)_finishInitialSegmentSetup;
-(void)_updateBackgroundAndContentViewsIfNeeded;
-(BOOL)_effectiveDisableShadow;
-(void)setObjectValue:(id)arg1 ;
-(void)animateRemoveForWidth:(double)arg1 ;
-(void)setPosition:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRequestedScaleFactor:(double)arg1 ;
-(void)insertDividerView;
-(void)setNeedsBackgroundAndContentViewUpdate;
-(id)initWithInfo:(id)arg1 size:(int)arg2 barStyle:(long long)arg3 tintColor:(id)arg4 appearanceStorage:(id)arg5 position:(unsigned)arg6 autosizeText:(BOOL)arg7 adjustsForContentSizeCategory:(BOOL)arg8 ;
-(void)_forceInfoDisplay;
-(id)_attributedTextForState:(unsigned long long)arg1 selected:(BOOL)arg2 forceSelectedAppearance:(BOOL)arg3 ;
-(id)_encodableSubviews;
-(void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setSelectionIndicatorDragged:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGRect)_contentRectForBounds:(CGRect)arg1 ;
-(void)_updateSelectionToTransform:(CATransform3D)arg1 infoTransform:(CATransform3D)arg2 hideSelection:(BOOL)arg3 shouldAnimate:(BOOL)arg4 ;
-(NSArray *)_infoConstraints;
-(void)setShowDivider:(BOOL)arg1 ;
-(void)_positionInfoWithoutAnimation;
-(id)_parentSegmentedControl;
-(void)_insertSelectionView;
-(void)updateForAppearance:(id)arg1 ;
-(id)_segmentLabel;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(id)_dividerImageIsCustom:(BOOL*)arg1 ;
-(BOOL)isRightSelected;
-(BOOL)_hasSelectedColor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setUsesAXTextSize:(BOOL)arg1 ;
-(UIEdgeInsets)_paddingInsets;
-(CGSize)_baselineOffsetsAtSize:(CGSize)arg1 ;
-(void)setContentOffset:(CGSize)arg1 ;
-(BOOL)useBlockyMagnificationInClassic;
-(id)label;
-(void)setSelected:(BOOL)arg1 highlighted:(BOOL)arg2 ;
-(void)setMomentary:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(BOOL)isSelectionIndicatorDragged;
-(id)_effectiveSelectedSegmentTintColor;
-(BOOL)_effectiveUseDynamicShadow;
-(void)dealloc;
-(void)_updateBackgroundAndContentViews;
-(void)setHighlighted:(BOOL)arg1 ;
@end

