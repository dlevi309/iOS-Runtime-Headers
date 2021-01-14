/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UILayoutEngineSuspending.h>
#import <UIKitCore/_UISystemBackgroundViewContainer.h>

@protocol _UIContentViewInternal, _UIBackgroundConfigurationInternal;
@class UIView, UILongPressGestureRecognizer, NSString, _UISystemBackgroundView, _UIFloatingContentView, UICellConfigurationState, UIBackgroundConfiguration;

@interface UICollectionViewCell : UICollectionReusableView <UIGestureRecognizerDelegate, _UILayoutEngineSuspending, _UISystemBackgroundViewContainer> {

	UIView* _contentView;
	UIView* _backgroundView;
	UIView* _selectedBackgroundView;
	UILongPressGestureRecognizer* _menuGesture;
	id _selectionSegueTemplate;
	id _highlightingSupport;
	NSString* _contentViewConfigurationIdentifier;
	id<_UIContentViewInternal> _viewForContentConfiguration;
	/*^block*/id _contentViewConfigurationProvider;
	_UISystemBackgroundView* _systemBackgroundView;
	/*^block*/id _backgroundViewConfigurationProvider;
	id<_UIBackgroundConfigurationInternal> _lastNormalBackgroundViewConfiguration;
	struct {
		unsigned selected : 1;
		unsigned highlighted : 1;
		unsigned editing : 1;
		unsigned swiped : 1;
		unsigned reordering : 1;
		unsigned showingCompactContextMenu : 1;
		unsigned needsConfigurationStateUpdate : 1;
		unsigned hasCustomBackgroundColor : 1;
		unsigned hasCustomBackgroundView : 1;
		unsigned hasCustomSelectedBackgroundView : 1;
		unsigned hasCustomBackgroundViewConfigurationProvider : 1;
		unsigned hasCustomBackgroundViewConfiguration : 1;
		unsigned automaticallyUpdatesBackgroundViewConfiguration : 1;
		unsigned automaticallyUpdatesContentViewConfiguration : 1;
		unsigned showingMenu : 1;
		unsigned clearSelectionWhenMenuDisappears : 1;
		unsigned waitingForSelectionAnimationHalfwayPoint : 1;
		unsigned contentViewWantsSystemLayoutSizeFittingSize : 1;
		unsigned selectionOrHighlightStateChangedSinceBackgroundUpdate : 1;
		unsigned needsFocusRingUpdateAfterLayout : 1;
	}  _collectionCellFlags;
	long long _dragState;
	BOOL _selected;
	BOOL _highlighted;
	BOOL _isLayoutEngineSuspended;
	BOOL _dragging;
	_UIFloatingContentView* _focusedFloatingContentView;
	long long __dropState;
	long long _focusStyle;

}

@property (nonatomic,retain) UIView * contentView;                                                                                                             //@synthesize contentView=_contentView - In the implementation block
@property (getter=_focusedFloatingContentView,nonatomic,readonly) _UIFloatingContentView * focusedFloatingContentView;                                         //@synthesize focusedFloatingContentView=_focusedFloatingContentView - In the implementation block
@property (assign,setter=_setShowingCompactContextMenu:,getter=_isShowingCompactContextMenu,nonatomic) BOOL _showingCompactContextMenu; 
@property (assign,setter=_setSwiped:,getter=_isSwiped,nonatomic) BOOL _swiped; 
@property (assign,setter=_setReordering:,getter=_isReordering,nonatomic) BOOL _reordering; 
@property (assign,setter=_setDragState:,getter=_dragState,nonatomic) long long _dragState; 
@property (assign,setter=_setDropState:,getter=_dropState,nonatomic) long long _dropState;                                                                     //@synthesize _dropState=__dropState - In the implementation block
@property (getter=_selectionAnimationDuration,nonatomic,readonly) double selectionAnimationDuration; 
@property (getter=_contentViewInset,nonatomic,readonly) UIEdgeInsets contentViewInset; 
@property (getter=_backgroundFillIsCustomizedForSelectionOrHighlight,nonatomic,readonly) BOOL _backgroundFillIsCustomizedForSelectionOrHighlight; 
@property (getter=_backgroundIsVerticallyInset,nonatomic,readonly) BOOL _backgroundIsVerticallyInset; 
@property (assign,setter=_setFocusStyle:,getter=_focusStyle,nonatomic) long long focusStyle;                                                                   //@synthesize focusStyle=_focusStyle - In the implementation block
@property (assign,getter=isDragging,nonatomic) BOOL dragging;                                                                                                  //@synthesize dragging=_dragging - In the implementation block
@property (assign,setter=_setDropTarget:,getter=_isDropTarget,nonatomic) BOOL _dropTarget; 
@property (nonatomic,readonly) UICellConfigurationState * configurationState; 
@property (nonatomic,copy) id<UIContentConfiguration> contentConfiguration; 
@property (assign,nonatomic) BOOL automaticallyUpdatesContentConfiguration; 
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                                                                                  //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                                                                            //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,copy) UIBackgroundConfiguration * backgroundConfiguration; 
@property (assign,nonatomic) BOOL automaticallyUpdatesBackgroundConfiguration; 
@property (nonatomic,retain) UIView * backgroundView;                                                                                                          //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * selectedBackgroundView;                                                                                                  //@synthesize selectedBackgroundView=_selectedBackgroundView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setLayoutEngineSuspended:,getter=_isLayoutEngineSuspended,nonatomic) BOOL _layoutEngineSuspended;                                    //@synthesize isLayoutEngineSuspended=_isLayoutEngineSuspended - In the implementation block
+(BOOL)_isInternalCell;
+(id)_createDefaultContentViewWithFrame:(CGRect)arg1 ;
+(BOOL)_subclassOverridesContentViewClass;
+(Class)_contentViewClass;
-(void)copy:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(void)_updateBackgroundView;
-(void)cut:(id)arg1 ;
-(CGSize)_contentTargetSizeForTargetSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 forUseWithSizeThatFits:(BOOL)arg4 ;
-(void)_updateFocusedFloatingContentControlStateInContext:(id)arg1 withAnimationCoordinator:(id)arg2 animated:(BOOL)arg3 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)paste:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)_isLayoutEngineSuspended;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)_appliesLayoutAttributesMaskingToBackgroundConfiguration;
-(BOOL)_removesHighlightedAndSelectedStatesForBackground;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)_setAutomaticallyUpdatesContentViewConfiguration:(BOOL)arg1 ;
-(void)_setAutomaticallyUpdatesBackgroundViewConfiguration:(BOOL)arg1 ;
-(UIView *)backgroundView;
-(BOOL)isSelected;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(BOOL)_automaticallyUpdatesBackgroundViewConfiguration;
-(void)_layoutContentView;
-(void)_applyContentViewConfiguration:(id)arg1 withState:(id)arg2 usingSPI:(BOOL)arg3 ;
-(void)_updateFocusedFloatingContentControlStateAnimated:(BOOL)arg1 ;
-(id)_stateForUpdatingBackgroundConfigurationWithState:(id)arg1 ;
-(BOOL)_backgroundFillIsCustomizedForSelectionOrHighlight;
-(void)_updateHighlightColorsForAnimationHalfwayPoint;
-(unsigned long long)_effectiveMaskedCornersForSystemBackgroundView;
-(BOOL)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(BOOL)_isSwiped;
-(void)setAutomaticallyUpdatesBackgroundConfiguration:(BOOL)arg1 ;
-(BOOL)isEditing;
-(void)_applyBackgroundViewConfiguration:(id)arg1 withState:(id)arg2 ;
-(id)_selectionSegueTemplate;
-(id)_focusedFloatingContentView;
-(void)_setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setAutomaticallyUpdatesContentConfiguration:(BOOL)arg1 ;
-(BOOL)_appliesLayoutAttributesMaskingToReusableView;
-(BOOL)_automaticallyUpdatesContentViewConfiguration;
-(long long)_dragState;
-(void)_setSwiped:(BOOL)arg1 ;
-(void)_updateBackgroundViewConfigurationForState:(id)arg1 ;
-(BOOL)automaticallyUpdatesBackgroundConfiguration;
-(void)layoutSubviews;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(long long)_dropState;
-(UIView *)selectedBackgroundView;
-(void)setSelectedBackgroundView:(UIView *)arg1 ;
-(long long)_focusStyle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_setReordering:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)_setDragState:(long long)arg1 ;
-(void)_setDropTarget:(BOOL)arg1 ;
-(id<UIContentConfiguration>)contentConfiguration;
-(void)setDragging:(BOOL)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)_setFocusStyle:(long long)arg1 ;
-(BOOL)_isDropTarget;
-(BOOL)isDragging;
-(UIEdgeInsets)_contentViewInset;
-(double)_selectionAnimationDuration;
-(id)initWithCoder:(id)arg1 ;
-(void)_setContentView:(id)arg1 addToHierarchy:(BOOL)arg2 ;
-(BOOL)_usingContentViewConfiguration;
-(UICellConfigurationState *)configurationState;
-(void)_updateDefaultBackgroundAppearance;
-(void)_handleMenuGesture:(id)arg1 ;
-(void)_setDropState:(long long)arg1 ;
-(void)_setLayoutAttributes:(id)arg1 ;
-(void)_setContentViewConfiguration:(id)arg1 ;
-(void)dragStateDidChange:(long long)arg1 ;
-(id)_contentViewConfiguration;
-(void)_setNeedsConfigurationStateUpdate;
-(void)_updateHighlightColorsForView:(id)arg1 highlight:(BOOL)arg2 ;
-(void)_setupHighlightingSupport;
-(/*^block*/id)_backgroundViewConfigurationProvider;
-(void)_performConfigurationStateUpdate;
-(void)_teardownHighlightingSupportIfReady;
-(BOOL)_descendantsShouldHighlight;
-(void)_setOpaque:(BOOL)arg1 forSubview:(id)arg2 ;
-(id)_configurationState;
-(BOOL)_highlightDescendantsWhenSelected;
-(void)_updateGhostedAppearance;
-(BOOL)_usingBackgroundViewConfiguration;
-(id)_systemBackgroundView;
-(void)setEditing:(BOOL)arg1 ;
-(void)_resetBackgroundViewsAndColor;
-(id)_encodableSubviews;
-(void)setBackgroundConfiguration:(UIBackgroundConfiguration *)arg1 ;
-(void)_setBackgroundViewConfigurationProvider:(/*^block*/id)arg1 ;
-(void)_setBackgroundViewConfiguration:(id)arg1 ;
-(BOOL)_isShowingCompactContextMenu;
-(void)_updateContentViewConfigurationForState:(id)arg1 ;
-(void)_updateViewConfigurationsWithState:(unsigned long long)arg1 ;
-(void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateConfigurationUsingState:(id)arg1 ;
-(void)_layoutSystemBackgroundView;
-(void)_resetBackgroundViewConfiguration;
-(void)_performAction:(SEL)arg1 sender:(id)arg2 ;
-(void)_updateConfigurationUsingState:(id)arg1 ;
-(void)_ensureFocusedFloatingContentView;
-(void)setContentConfiguration:(id<UIContentConfiguration>)arg1 ;
-(BOOL)automaticallyUpdatesContentConfiguration;
-(void)_setContentViewConfigurationProvider:(/*^block*/id)arg1 ;
-(/*^block*/id)_contentViewConfigurationProvider;
-(UIView *)contentView;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(BOOL)_backgroundIsVerticallyInset;
-(id)_visiblePathForBackgroundConfiguration;
-(void)setNeedsUpdateConfiguration;
-(void)_setSelectionSegueTemplate:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_defaultBackgroundConfiguration;
-(id)_defaultBackgroundView;
-(id)_defaultSelectedBackgroundView;
-(void)_setShowingCompactContextMenu:(BOOL)arg1 ;
-(unsigned long long)_viewConfigurationState;
-(BOOL)_canFocusProgrammatically;
-(void)_configureFocusedFloatingContentView:(id)arg1 ;
-(void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(BOOL)_hasCustomSelectionAction;
-(BOOL)_performCustomSelectionAction;
-(BOOL)_isReordering;
-(BOOL)_shouldSaveOpaqueStateForView:(id)arg1 ;
-(BOOL)_isUsingOldStyleMultiselection;
-(void)dealloc;
-(unsigned long long)_maskedCornersForSystemBackgroundView;
-(void)_setLayoutEngineSuspended:(BOOL)arg1 ;
-(UIBackgroundConfiguration *)backgroundConfiguration;
-(id)_backgroundViewConfiguration;
-(void)setHighlighted:(BOOL)arg1 ;
@end

