/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKitCore/_UILayoutEngineSuspending.h>
#import <UIKit/UITableConstantsCellProviding.h>
#import <UIKitCore/_UISystemBackgroundViewContainer.h>
#import <UIKitCore/_UIInteractiveHighlighting.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UITable_UITableViewCellDelegate, _UIContentViewInternal, _UIBackgroundConfigurationInternal, UITableConstants;
@class NSMutableDictionary, NSString, _UIFloatingContentView, UIView, UIImageView, UILabel, _UISystemBackgroundView, UIColor, UIVisualEffect, UIStoryboardPreviewingSegueTemplateStorage, UIControl, _UITableViewCellSeparatorView, UITextField, NSTimer, NSArray, UILongPressGestureRecognizer, NSIndexPath, UIFocusGuide, UICellAccessoryManager, UICellConfigurationState, UIBackgroundConfiguration;

@interface UITableViewCell : UIView <UIScrollViewDelegate, _UILayoutEngineSuspending, UITableConstantsCellProviding, _UISystemBackgroundViewContainer, _UIInteractiveHighlighting, NSCoding, UIGestureRecognizerDelegate> {

	struct {
		unsigned showingDeleteConfirmation : 1;
		unsigned separatorStyle : 3;
		unsigned selectionStyle : 3;
		unsigned selected : 1;
		unsigned editing : 1;
		unsigned swiped : 1;
		unsigned reordering : 1;
		unsigned showingCompactContextMenu : 1;
		unsigned editingStyle : 3;
		unsigned accessoryType : 3;
		unsigned editingAccessoryType : 3;
		unsigned showsReorderControl : 1;
		unsigned showTopSeparator : 1;
		unsigned hideTopSeparatorDuringReordering : 1;
		unsigned sectionLocation : 3;
		unsigned selectionGrouping : 3;
		unsigned tableViewStyle : 5;
		unsigned shouldIndentWhileEditing : 1;
		unsigned fontSet : 1;
		unsigned usingDefaultSelectedBackgroundView : 1;
		unsigned usingDefaultBackgroundView : 1;
		unsigned wasSwiped : 1;
		unsigned highlighted : 1;
		unsigned separatorDirty : 1;
		unsigned drawn : 1;
		unsigned drawingDisabled : 1;
		unsigned style : 12;
		unsigned shouldShowMenu : 1;
		unsigned showingMenu : 1;
		unsigned animatingSelection : 1;
		unsigned backgroundColorSet : 1;
		unsigned needsSetup : 1;
		unsigned usingMultiselectbackgroundView : 1;
		unsigned deleteAnimationInProgress : 1;
		unsigned animating : 1;
		unsigned animatingEditing : 1;
		unsigned shouldHaveFullLengthBottomSeparator : 1;
		unsigned shouldHaveFullLengthTopSeparator : 1;
		unsigned drawsSeparatorAtTopOfSection : 1;
		unsigned drawsSeparatorAtBottomOfSection : 1;
		unsigned separatorBackdropOverlayBlendMode : 3;
		unsigned separatorDrawsInVibrantLightMode : 1;
		unsigned separatorHidden : 1;
		unsigned hidingSeparatorsForSelection : 1;
		unsigned wantsClipping : 1;
		unsigned allowsReorderingWhenNotEditing : 1;
		unsigned needsHeightCalculation : 1;
		unsigned hasEditingFocusGuides : 1;
		unsigned focusStyle : 3;
		unsigned accessoryViewsHidden : 1;
		unsigned skipsLayout : 1;
		unsigned separatorInsetIsRelativeToCellEdges : 1;
		unsigned highlightingInteractively : 1;
		unsigned userInteractionEnabledWhileDragging : 1;
		unsigned userInteractionEnabledBeforeDragging : 2;
		unsigned insetsContentViewsToSafeArea : 1;
		unsigned needsAccessoriesUpdate : 1;
		unsigned needsAccessoriesUpdateForced : 1;
		unsigned badgeVisible : 1;
		unsigned shouldRestoreTextLabelAfterSystemTextSizeChange : 1;
		unsigned shouldRestoreDetailTextLabelAfterSystemTextSizeChange : 1;
		unsigned shouldRestoreEditableTextFieldAfterSystemTextSizeChange : 1;
		unsigned tableViewHasBeenExplicitlySet : 1;
		unsigned ignoresMultipleSelectionDuringEditing : 1;
		unsigned hasEverUsedRoundedGroups : 1;
		unsigned preserveBackgroundMaskingForReorderAnimationEnding : 1;
		unsigned needsConfigurationStateUpdate : 1;
		unsigned hasCustomBackgroundColor : 1;
		unsigned hasCustomBackgroundView : 1;
		unsigned hasCustomSelectedBackgroundView : 1;
		unsigned hasCustomMultipleSelectionBackgroundView : 1;
		unsigned hasCustomBackgroundViewConfigurationProvider : 1;
		unsigned hasCustomBackgroundViewConfiguration : 1;
		unsigned hasCustomIndentationWidth : 1;
		unsigned automaticallyUpdatesContentViewConfiguration : 1;
		unsigned automaticallyUpdatesBackgroundViewConfiguration : 1;
		unsigned hasShownHighlightedOrSelectedBackground : 1;
		unsigned needsFocusRingUpdateAfterLayout : 1;
	}  _tableCellFlags;
	NSMutableDictionary* __editingControlTintColors;
	id<UITable_UITableViewCellDelegate> _tableView;
	id _layoutManager;
	id _target;
	SEL _editAction;
	SEL _accessoryAction;
	id _editingData;
	long long _indentationLevel;
	double _indentationWidth;
	double _extraLeadingLayoutMarginForIndentation;
	NSString* _reuseIdentifier;
	_UIFloatingContentView* _floatingContentView;
	long long _lineBreakModeBeforeFocus;
	UIView* _contentView;
	UIImageView* _imageView;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UIView* _backgroundView;
	UIView* _selectedBackgroundView;
	UIView* _multipleSelectionBackgroundView;
	UIView* _selectedOverlayView;
	double _selectionFadeDuration;
	NSString* _contentViewConfigurationIdentifier;
	id<_UIContentViewInternal> _viewForContentConfiguration;
	/*^block*/id _contentViewConfigurationProvider;
	_UISystemBackgroundView* _systemBackgroundView;
	/*^block*/id _backgroundViewConfigurationProvider;
	id<_UIBackgroundConfigurationInternal> _lastNormalBackgroundViewConfiguration;
	UIColor* _separatorColor;
	UIVisualEffect* _separatorEffect;
	UIColor* _sectionBorderColor;
	UIView* _floatingSeparatorView;
	UIView* _topShadowAnimationView;
	UIView* _bottomShadowAnimationView;
	id _badge;
	CFDictionaryRef _unhighlightedStates;
	id _selectionSegueTemplate;
	id _accessoryActionSegueTemplate;
	UIStoryboardPreviewingSegueTemplateStorage* _accessoryActionPreviewingSegueTemplateStorage;
	UIControl* _accessoryView;
	UIControl* _editingAccessoryView;
	UIView* _customAccessoryView;
	UIView* _customEditingAccessoryView;
	_UITableViewCellSeparatorView* _separatorView;
	_UITableViewCellSeparatorView* _topSeparatorView;
	UITextField* _editableTextField;
	double _lastSelectionTime;
	NSTimer* _deselectTimer;
	double _textFieldOffset;
	double _indexBarExtentFromEdge;
	UIEdgeInsets _separatorInset;
	UIEdgeInsets _backgroundInset;
	SEL _returnAction;
	UIColor* _selectionTintColor;
	NSArray* _selectionEffects;
	UIColor* _accessoryTintColor;
	UILongPressGestureRecognizer* _longPressGesture;
	NSIndexPath* _representedIndexPath;
	UIView* _clearBlendingView;
	double _defaultLeadingMarginWidth;
	double _defaultTrailingCellMarginWidth;
	UIFocusGuide* _editControlFocusGuide;
	UIFocusGuide* _reorderControlFocusGuide;
	id<UITableConstants> _constants;
	long long _dragState;
	long long _dropState;
	BOOL _isLayoutEngineSuspended;
	UICellAccessoryManager* _accessoryManager;

}

@property (assign,setter=_setUsesModernAccessoriesLayout:,getter=_usesModernAccessoriesLayout,nonatomic) BOOL usesModernAccessoriesLayout; 
@property (getter=_accessoryManager,nonatomic,readonly) UICellAccessoryManager * accessoryManager;                                                       //@synthesize accessoryManager=_accessoryManager - In the implementation block
@property (setter=_setEditControlFocusGuide:,getter=_editControlFocusGuide,nonatomic,retain) UIFocusGuide * editControlFocusGuide;                       //@synthesize editControlFocusGuide=_editControlFocusGuide - In the implementation block
@property (setter=_setReorderControlFocusGuide:,getter=_reorderControlFocusGuide,nonatomic,retain) UIFocusGuide * reorderControlFocusGuide;              //@synthesize reorderControlFocusGuide=_reorderControlFocusGuide - In the implementation block
@property (assign,setter=_setSkipsLayout:,getter=_skipsLayout,nonatomic) BOOL skipsLayout; 
@property (nonatomic,readonly) UICellConfigurationState * configurationState; 
@property (nonatomic,copy) id<UIContentConfiguration> contentConfiguration; 
@property (assign,nonatomic) BOOL automaticallyUpdatesContentConfiguration; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) UIImageView * imageView; 
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (nonatomic,copy) UIBackgroundConfiguration * backgroundConfiguration; 
@property (assign,nonatomic) BOOL automaticallyUpdatesBackgroundConfiguration; 
@property (nonatomic,retain) UIView * backgroundView; 
@property (nonatomic,retain) UIView * selectedBackgroundView; 
@property (nonatomic,retain) UIView * multipleSelectionBackgroundView; 
@property (nonatomic,copy,readonly) NSString * reuseIdentifier; 
@property (assign,nonatomic) long long selectionStyle; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,readonly) long long editingStyle; 
@property (assign,nonatomic) BOOL showsReorderControl; 
@property (assign,nonatomic) BOOL shouldIndentWhileEditing; 
@property (assign,nonatomic) long long accessoryType; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (assign,nonatomic) long long editingAccessoryType; 
@property (nonatomic,retain) UIView * editingAccessoryView; 
@property (assign,nonatomic) long long indentationLevel; 
@property (assign,nonatomic) double indentationWidth; 
@property (assign,nonatomic) UIEdgeInsets separatorInset; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (nonatomic,readonly) BOOL showingDeleteConfirmation; 
@property (assign,nonatomic) long long focusStyle; 
@property (assign,nonatomic) BOOL userInteractionEnabledWhileDragging; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setLayoutEngineSuspended:,getter=_isLayoutEngineSuspended,nonatomic) BOOL _layoutEngineSuspended;                              //@synthesize isLayoutEngineSuspended=_isLayoutEngineSuspended - In the implementation block
@property (getter=_minimumCellAccessoryMargin,nonatomic,readonly) double minimumCellAccessoryMargin; 
@property (getter=_cellStyle,nonatomic,readonly) long long cellStyle; 
+(void)_ensureInitializeSystemAppearanceModifications;
+(void)_initializeForIdiom:(long long)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)sendSubviewToBack:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(id)_badge;
-(void)willMoveToSuperview:(id)arg1 ;
-(UIEdgeInsets)separatorInset;
-(void)setTarget:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)bringSubviewToFront:(id)arg1 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(long long)lineBreakMode;
-(id)_imageView;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)paste:(id)arg1 ;
-(id)preferredFocusedView;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(id)_constants;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(BOOL)_isAnimating;
-(void)_setBadgeColor:(id)arg1 ;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(void)_updateFloatingContentControlStateInContext:(id)arg1 withAnimationCoordinator:(id)arg2 animated:(BOOL)arg3 ;
-(long long)separatorStyle;
-(BOOL)_separatorInsetIsRelativeToCellEdges;
-(UIEdgeInsets)_rawSeparatorInset;
-(id)textColor;
-(double)_indexBarExtentFromEdge;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setImage:(id)arg1 ;
-(BOOL)_isLayoutEngineSuspended;
-(double)_separatorHeight;
-(CGPoint)center;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)indentationWidth;
-(void)setLineBreakMode:(long long)arg1 ;
-(BOOL)_allowsReorderingWhenNotEditing;
-(id)_customAccessoryView:(BOOL)arg1 ;
-(BOOL)_hasAccessoryView;
-(id)_customEditingAccessoryView:(BOOL)arg1 ;
-(id)init;
-(CGRect)_separatorFrame;
-(BOOL)_usesModernAccessoriesLayout;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(id)_defaultFont;
-(void)_setDragging:(BOOL)arg1 ;
-(void)_setUsesModernAccessoriesLayout:(BOOL)arg1 ;
-(UIEdgeInsets)_adjustedRawLayoutMargins:(UIEdgeInsets)arg1 withLeadingLayoutMarginAdjustment:(double)arg2 ;
-(BOOL)_changesOpaqueStateOfSubviews;
-(UIImageView *)imageView;
-(id)_backgroundView:(BOOL)arg1 ;
-(void)_setContainerView:(id)arg1 ;
-(void)_updateSeparatorContent:(BOOL)arg1 ;
-(void)_setOverriddenDefaultContentViewLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(id)_selectedBackgroundView:(BOOL)arg1 ;
-(id)_editControlFocusGuide;
-(double)textFieldOffset;
-(BOOL)wasSwiped;
-(id)_reorderControlFocusGuide;
-(id)_badgeText;
-(void)_setEditControlFocusGuide:(id)arg1 ;
-(void)_setReorderControlFocusGuide:(id)arg1 ;
-(BOOL)drawingEnabled;
-(void)setFont:(id)arg1 ;
-(id)_badgeFont;
-(id)_badge:(BOOL)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)_setEditing:(BOOL)arg1 animated:(BOOL)arg2 cellOrAncestorViewForAnimatedLayout:(id)arg3 ;
-(BOOL)_canDrawContent;
-(void)_setAutomaticallyUpdatesContentViewConfiguration:(BOOL)arg1 ;
-(void)_updateAccessories;
-(void)_setBadgeFont:(id)arg1 ;
-(UIView *)accessoryView;
-(void)_contentViewLabelTextDidChange:(id)arg1 ;
-(id)_editableTextField:(BOOL)arg1 ;
-(BOOL)_needsSetup;
-(id)_multiselectBackgroundColor;
-(id)_disclosureChevronImage;
-(void)_saveOpaqueViewState:(id)arg1 ;
-(double)_verticalPaddingForSeparator;
-(SEL)accessoryAction;
-(void)_setSeparatorDrawsInVibrantLightModeUIAppearance:(id)arg1 ;
-(id)_swipeContainerView;
-(BOOL)_shouldHideSeparator;
-(double)_rightMarginWidth;
-(void)_setAutomaticallyUpdatesBackgroundViewConfiguration:(BOOL)arg1 ;
-(void)_updateHighlightColorsForView:(id)arg1 highlighted:(BOOL)arg2 ;
-(void)_updateImageViewTintColor;
-(void)setLayoutManager:(id)arg1 ;
-(BOOL)_shouldUseHighlightedOrSelectedAppearance;
-(void)_showMenuFromLongPressGesture;
-(void)_updateDefaultImageSymbolConfiguration;
-(double)_roundedGroupCornerRadius;
-(BOOL)_shouldMaskToBoundsWhileAnimating;
-(void)_setContentClipCorners:(unsigned long long)arg1 updateCorners:(BOOL)arg2 ;
-(UIView *)backgroundView;
-(BOOL)_appliesMaskingToBackgroundConfiguration;
-(void)_updateSeparatorContent;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_setNeedsSeparatorUpdate;
-(BOOL)_showFullLengthTopSeparatorForTopOfSection;
-(void)_updateSeparatorViewAlpha;
-(BOOL)_hidesBottomSeparatorWhenUnselected;
-(void)_updateTopSeparatorViewAlpha;
-(id)_addSeparatorWithFrame:(CGRect)arg1 ;
-(BOOL)_showSeparatorAtTopOfSection;
-(CGRect)_topSeparatorFrame;
-(id)initWithFrame:(CGRect)arg1 reuseIdentifier:(id)arg2 ;
-(id)_subviewsForFloatingContentView;
-(void)_releaseTextLabel;
-(void)_releaseDetailTextLabel;
-(void)_longPressGestureRecognized:(id)arg1 ;
-(void)_updateContentClip;
-(void)_setupTableViewCellCommon;
-(void)_drawContentInRect:(CGRect)arg1 selected:(BOOL)arg2 ;
-(id)_detailTextLabel;
-(id)_createDefaultContentView;
-(void)_setupModernAccessoriesLayout;
-(BOOL)_isReorderable;
-(void)_setupMenuGesture;
-(id)_existingSystemAccessoryViews;
-(void)_didCreateContentView;
-(void)_setFont:(id)arg1 layout:(BOOL)arg2 ;
-(void)_setNeedsAccessoriesUpdate;
-(void)_resetContentViews;
-(void)_clearPrimaryTextFrameDidChangeHandlerForContentView:(id)arg1 ;
-(void)_delayedDeselect;
-(void)_setupPrimaryTextFrameDidChangeHandlerForContentView:(id)arg1 ;
-(id)_checkmarkImage:(BOOL)arg1 ;
-(BOOL)isSelected;
-(BOOL)_usingBackgroundConfigurationOrDefaultBackgroundConfiguration;
-(void)_setupSelectedBackgroundView;
-(void)setSelectedBackgroundView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setSwipeContainerView:(id)arg1 ;
-(void)_setDrawsTopSeparator:(BOOL)arg1 ;
-(void)_resetSelectionTimer;
-(void)_resetEditControlRotation;
-(void)setUserInteractionEnabledWhileDragging:(BOOL)arg1 ;
-(void)_updateHighlightColors;
-(id)_existingSystemAccessoryView:(BOOL)arg1 ;
-(BOOL)_shouldChangeOpaqueStateOfView:(id)arg1 ;
-(void)_applySelectedStateToSeparators:(BOOL)arg1 ;
-(id)selectedTextColor;
-(void)_updateAndCacheBackgroundColorForHighlightIgnoringSelection:(BOOL)arg1 ;
-(SEL)editAction;
-(void)_setSelectionStyle:(long long)arg1 selectionTintColor:(id)arg2 ;
-(void)_updateDefaultLabelsForFocus:(BOOL)arg1 ;
-(void)_updateUserInteractionEnabledForNewDragState:(long long)arg1 ;
-(void)_willTransitionToState:(unsigned long long)arg1 ;
-(void)_cancelInternalPerformRequests;
-(void)_safeAreaInsetsDidChangeFromOldInsets:(UIEdgeInsets)arg1 ;
-(BOOL)userInteractionEnabledWhileDragging;
-(void)setSectionLocation:(int)arg1 animated:(BOOL)arg2 ;
-(void)_updateCellForCurrentBackgroundConfiguration;
-(void)_deselectAnimationFinished;
-(void)showSelectedBackgroundView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateAccessoryMetrics;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)_updateDefaultAccessoryViewForFocus:(BOOL)arg1 ;
-(void)_updateFloatingContentControlStateAnimated:(BOOL)arg1 ;
-(void)_didTransitionToState:(unsigned long long)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGRect)frame;
-(void)_updateExpansionButton:(id)arg1 forType:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_syncAccessoryViewsIfNecessary;
-(BOOL)_updateExpansionButtonFromType:(long long)arg1 toType:(long long)arg2 ;
-(void)setShowingDeleteConfirmation:(BOOL)arg1 ;
-(BOOL)_automaticallyUpdatesBackgroundViewConfiguration;
-(void)_removeFromSuperviewIgnoringFirstResponder:(BOOL)arg1 ;
-(void)_setFrame:(CGRect)arg1 skipLayout:(BOOL)arg2 ;
-(id)_dropAnimationContainerView;
-(void)_updateCellMaskViewsForView:(id)arg1 backdropView:(id)arg2 ;
-(void)_layoutFloatingContentView;
-(void)_restoreLabelTextAfterSystemTextSizeChangeIfNeeded;
-(id)_editableTextField;
-(void)_setSectionLocation:(int)arg1 animated:(BOOL)arg2 forceBackgroundSetup:(BOOL)arg3 ;
-(void)_removeRemoveControl;
-(void)_grabberDragged:(id)arg1 yDelta:(float)arg2 touch:(id)arg3 ;
-(id)_accessoryViewForType:(long long)arg1 ;
-(id)_newAccessoryView:(BOOL)arg1 ;
-(id)_defaultAccessoryView;
-(void)didMoveToSuperview;
-(void)_clearOpaqueViewState:(id)arg1 ;
-(void)_multiselectColorChanged;
-(void)_systemTextSizeChanged;
-(void)setDrawingEnabled:(BOOL)arg1 ;
-(double)_contentConfigurationPrimaryTextInsetFromCellLeadingEdge;
-(void)setEditAction:(SEL)arg1 ;
-(double)_imageViewExtentFromCellLeadingEdge;
-(void)setText:(id)arg1 ;
-(void)_applyContentViewConfiguration:(id)arg1 withState:(id)arg2 usingSPI:(BOOL)arg3 ;
-(void)_setAnimating:(BOOL)arg1 clippingAdjacentCells:(BOOL)arg2 ;
-(void)_removeFocusedFloatingContentView;
-(void)_setSeparatorDrawsInVibrantLightMode:(BOOL)arg1 ;
-(id)_stateForUpdatingBackgroundConfigurationWithState:(id)arg1 ;
-(id)accessoryActionPreviewingSegueTemplateStorage;
-(id)_disclosureChevronImage:(BOOL)arg1 ;
-(id)layoutManager;
-(BOOL)_backgroundFillIsCustomizedForSelectionOrHighlight;
-(void)_setDefaultBackgroundColor:(id)arg1 ;
-(void)setSelectionSegueTemplate:(id)arg1 ;
-(void)_setAccessoryManager:(id)arg1 ;
-(UIEdgeInsets)_backgroundSeparatorInset;
-(id)selectionSegueTemplate;
-(void)_setNeedsAccessoriesUpdateForced:(BOOL)arg1 ;
-(void)_updateHighlightColorsForAnimationHalfwayPoint;
-(long long)_sanitizedEditingStyleForEditing:(BOOL)arg1 style:(long long)arg2 ;
-(id)_editControlAccessoryForStyle:(long long)arg1 ;
-(BOOL)_editControlShouldBeOnLeadingSideForStyle:(long long)arg1 ;
-(id)accessoryActionSegueTemplate;
-(id)_leadingAccessoriesForEditing:(BOOL)arg1 style:(long long)arg2 ;
-(BOOL)_drawsTopSeparatorDuringReordering;
-(id)_trailingAccessoriesForType:(long long)arg1 view:(id)arg2 editing:(BOOL)arg3 style:(long long)arg4 ;
-(void)setSelectedTextColor:(id)arg1 ;
-(void)_setDrawsTopSeparatorDuringReordering:(BOOL)arg1 ;
-(void)setAccessoryActionSegueTemplate:(id)arg1 ;
-(void)_setShouldHaveFullLengthBottomSeparator:(BOOL)arg1 ;
-(void)_willEnterReusePool;
-(BOOL)_shouldHaveFullLengthBottomSeparator;
-(void)_encodeBackgroundColorWithCoder:(id)arg1 ;
-(void)_setShouldHaveFullLengthTopSeparator:(BOOL)arg1 ;
-(BOOL)_shouldHaveFullLengthTopSeparator;
-(BOOL)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(id)_forSpringBoardDefaultSelectedBackgroundView;
-(void)setSectionBorderColor:(id)arg1 ;
-(void)setSeparatorColor:(id)arg1 ;
-(void)_forSpringBoardSetDefaultSelectedBackgroundView:(id)arg1 ;
-(id)sectionBorderColor;
-(BOOL)_ignoresMultipleSelectionDuringEditing;
-(CGRect)reorderRectForBounds:(CGRect)arg1 ;
-(void)_setIgnoresMultipleSelectionDuringEditing:(BOOL)arg1 ;
-(CGRect)accessoryRectForBounds:(CGRect)arg1 ;
-(void)_updateShowingSelectedBackground;
-(BOOL)isAtLeastHalfSelected;
-(float)selectionPercent;
-(void)_macSidebarDefaultIconSizeChanged;
-(id)selectedOverlayView;
-(void)setClipsContents:(BOOL)arg1 ;
-(void)_transitionToReorderingAppearance:(BOOL)arg1 ;
-(void)setHidesAccessoryWhenEditing:(BOOL)arg1 ;
-(void)_finishTransitioningToReorderingAppearance:(BOOL)arg1 ;
-(void)_setAccessoryTintColor:(id)arg1 ;
-(BOOL)hidesAccessoryWhenEditing;
-(void)_setDropAnimationContainerView:(id)arg1 ;
-(void)_setSkipsLayout:(BOOL)arg1 ;
-(void)setAccessoryAction:(SEL)arg1 ;
-(CGRect)contentRectForState:(unsigned long long)arg1 ;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_setReorderControlImage:(id)arg1 ;
-(id)_reorderControlImage;
-(void)_drawSeparatorInRect:(CGRect)arg1 ;
-(void)_setEditingControlTintColor:(id)arg1 forStyle:(long long)arg2 ;
-(void)_removeFloatingSeparator;
-(void)_animateFloatingSeparatorForInsertion:(BOOL)arg1 withRowAnimation:(long long)arg2 ;
-(void)_setNeedsSetup:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)_animateInnerShadowForInsertion:(BOOL)arg1 withRowAnimation:(long long)arg2 ;
-(void)_removeInnerShadow;
-(int)sectionLocation;
-(BOOL)_isReorderControlActive;
-(BOOL)_grabberBeganReorder:(id)arg1 touch:(id)arg2 ;
-(void)_grabberReleased:(id)arg1 ;
-(void)_grabberDragged:(id)arg1 yDelta:(float)arg2 ;
-(void)editControlWasClicked:(id)arg1 ;
-(void)_toggleExpansionButton;
-(void)_setAccessoryAction:(SEL)arg1 ;
-(SEL)_accessoryAction;
-(void)_setNeedsHeightCalculation:(BOOL)arg1 ;
-(BOOL)_needsHeightCalculation;
-(void)setTableViewStyle:(long long)arg1 ;
-(void)_startToEditTextField;
-(BOOL)_isSwiped;
-(BOOL)_isMultiselecting;
-(void)_setIndexPath:(id)arg1 ;
-(void)_tableViewDidUpdateMarginWidth;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(NSDirectionalEdgeInsets)_overriddenDefaultContentViewLayoutMargins;
-(BOOL)_isDeleteAnimationInProgress;
-(void)_setDeleteAnimationInProgress:(BOOL)arg1 ;
-(void)setTextFieldOffset:(double)arg1 ;
-(void)setPlaceHolderValue:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setAutomaticallyUpdatesBackgroundConfiguration:(BOOL)arg1 ;
-(void)textFieldDidBecomeFirstResponder:(id)arg1 ;
-(void)setReturnAction:(SEL)arg1 ;
-(BOOL)_separatorHidden;
-(BOOL)isEditing;
-(BOOL)_separatorDrawsInVibrantLightMode;
-(long long)_separatorBackdropOverlayBlendMode;
-(void)_setSeparatorBackdropOverlayBlendMode:(long long)arg1 ;
-(BOOL)_accessoryViewsHidden;
-(void)_setAllowsReorderingWhenNotEditing:(BOOL)arg1 ;
-(void)_setCurrentScreenScale:(double)arg1 ;
-(void)setAccessoryActionPreviewingSegueTemplateStorage:(id)arg1 ;
-(id)image;
-(long long)textAlignment;
-(void)_applyBackgroundViewConfiguration:(id)arg1 withState:(id)arg2 ;
-(id)backgroundColor;
-(id)_containerView;
-(void)_updateLeadingLayoutMarginForIndentation;
-(void)_setHiddenForReuse:(BOOL)arg1 ;
-(id)_accessoryTintColor;
-(void)setTextColor:(id)arg1 ;
-(id)_target;
-(BOOL)_highlightsAlongsideDefaultEffect;
-(void)_highlightForInteraction:(id)arg1 fractionComplete:(double)arg2 ended:(BOOL)arg3 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setAutomaticallyUpdatesContentConfiguration:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)_highlightDidEndForInteraction:(id)arg1 ;
-(void)_prepareHighlightForInteraction:(id)arg1 ;
-(long long)_preferredHighlightAnimationStyleForInteraction:(id)arg1 ;
-(void)setSelectionTintColor:(id)arg1 ;
-(BOOL)_automaticallyUpdatesContentViewConfiguration;
-(id)_accessoryView:(BOOL)arg1 ;
-(long long)_dragState;
-(long long)focusStyle;
-(void)_setDefaultLeadingMarginWidth:(double)arg1 ;
-(void)_setSwiped:(BOOL)arg1 ;
-(void)_updateBackgroundViewConfigurationForState:(id)arg1 ;
-(double)_defaultLeadingMarginWidth;
-(void)_setDefaultTrailingCellMarginWidth:(double)arg1 ;
-(double)_defaultTrailingCellMarginWidth;
-(void)_setIndexBarExtentFromEdge:(double)arg1 ;
-(BOOL)automaticallyUpdatesBackgroundConfiguration;
-(void)_setSeparatorInsetIsRelativeToCellEdges:(BOOL)arg1 ;
-(void)_setInsetsContentViewsToSafeArea:(BOOL)arg1 ;
-(void)_layoutMarginsDidChangeFromOldMargins:(UIEdgeInsets)arg1 ;
-(BOOL)_insetsContentViewsToSafeArea;
-(void)_setSeparatorEffect:(id)arg1 ;
-(void)layoutSubviews;
-(id)_textLabel;
-(void)_setBackgroundInset:(UIEdgeInsets)arg1 ;
-(void)_setMultiselecting:(BOOL)arg1 ;
-(void)_setDrawsSeparatorAtTopOfSection:(BOOL)arg1 ;
-(BOOL)_drawsSeparatorAtTopOfSection;
-(void)_setDrawsSeparatorAtBottomOfSection:(BOOL)arg1 ;
-(BOOL)shouldIndentWhileEditing;
-(BOOL)_drawsSeparatorAtBottomOfSection;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setShouldIndentWhileEditing:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(long long)_dropState;
-(void)setCenter:(CGPoint)arg1 ;
-(UIView *)selectedBackgroundView;
-(void)removeEditingData;
-(void)setSelectedBackgroundView:(UIView *)arg1 ;
-(void)setWasSwiped:(BOOL)arg1 ;
-(void)_setSeparatorHidden:(BOOL)arg1 ;
-(void)_setAccessoryViewsHidden:(BOOL)arg1 ;
-(void)setFocusStyle:(long long)arg1 ;
-(UILabel *)detailTextLabel;
-(void)_setShowsReorderControl:(BOOL)arg1 ;
-(void)_setShouldIndentWhileEditing:(BOOL)arg1 ;
-(void)_setShowingDeleteConfirmation:(BOOL)arg1 ;
-(double)selectionFadeDuration;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)_cellStyle;
-(UIView *)multipleSelectionBackgroundView;
-(void)setMultipleSelectionBackgroundView:(UIView *)arg1 ;
-(id)text;
-(long long)editingAccessoryType;
-(void)_setReordering:(BOOL)arg1 ;
-(void)setEditingAccessoryType:(long long)arg1 ;
-(void)_setAnimating:(BOOL)arg1 ;
-(UIView *)editingAccessoryView;
-(void)setEditingAccessoryView:(UIView *)arg1 ;
-(void)setEditingStyle:(long long)arg1 ;
-(BOOL)showingDeleteConfirmation;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)didTransitionToState:(unsigned long long)arg1 ;
-(BOOL)isHighlighted;
-(id)_textLabel:(BOOL)arg1 ;
-(void)_setDragState:(long long)arg1 ;
-(void)_setDropTarget:(BOOL)arg1 ;
-(id<UIContentConfiguration>)contentConfiguration;
-(id)_accessoryManager;
-(id)_checkmarkImage;
-(id)_badgeColor;
-(CGRect)textRectForContentRect:(CGRect)arg1 ;
-(id)_detailTextLabel:(BOOL)arg1 ;
-(void)setSelectionStyle:(long long)arg1 ;
-(void)_setMarginWidth:(double)arg1 ;
-(long long)_popoverControllerStyle;
-(BOOL)_isInModalViewController;
-(void)setAccessoryType:(long long)arg1 ;
-(id)_separatorEffect;
-(BOOL)_isDropTarget;
-(void)_setTableView:(id)arg1 ;
-(BOOL)_shouldApplyReadableWidthInsets;
-(BOOL)_isHighlighted;
-(unsigned long long)currentStateMask;
-(void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3 ;
-(void)setNeedsUpdateConstraints;
-(void)_setConstants:(id)arg1 ;
-(id)editingData:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setRightMarginWidth:(double)arg1 ;
-(UICellConfigurationState *)configurationState;
-(void)_updateAccessoriesIfNeeded;
-(long long)_focusTouchSensitivityStyle;
-(void)_updateDefaultBackgroundAppearance;
-(long long)indentationLevel;
-(id)separatorColor;
-(void)setSelectionFadeDuration:(double)arg1 ;
-(void)_setDropState:(long long)arg1 ;
-(void)setSectionLocation:(int)arg1 ;
-(id)_tableView;
-(void)_setContentViewConfiguration:(id)arg1 ;
-(void)dragStateDidChange:(long long)arg1 ;
-(void)_setBadgeText:(id)arg1 ;
-(id)_contentViewConfiguration;
-(void)_updateDefaultIndentationWidth;
-(void)_setNeedsConfigurationStateUpdate;
-(id)_indexPath;
-(/*^block*/id)_backgroundViewConfigurationProvider;
-(void)_performConfigurationStateUpdate;
-(void)_setOpaque:(BOOL)arg1 forSubview:(id)arg2 ;
-(id)_configurationState;
-(BOOL)_usingBackgroundViewConfiguration;
-(id)_systemBackgroundView;
-(void)setEditing:(BOOL)arg1 ;
-(void)_resetBackgroundViewsAndColor;
-(id)_previewingSegueTemplateStorageForLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(id)selectionTintColor;
-(id)_encodableSubviews;
-(UIEdgeInsets)_concreteDefaultLayoutMargins;
-(void)setBackgroundConfiguration:(UIBackgroundConfiguration *)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_setBackgroundViewConfigurationProvider:(/*^block*/id)arg1 ;
-(void)_setBackgroundViewConfiguration:(id)arg1 ;
-(id)target;
-(void)setTextAlignment:(long long)arg1 ;
-(id)selectedImage;
-(BOOL)_isShowingCompactContextMenu;
-(void)_updateContentViewConfigurationForState:(id)arg1 ;
-(void)_updateViewConfigurationsWithState:(unsigned long long)arg1 ;
-(void)updateConfigurationUsingState:(id)arg1 ;
-(void)_resetRawLayoutMargins;
-(void)setShowsReorderControl:(BOOL)arg1 ;
-(void)_layoutSystemBackgroundView;
-(id)_separatorView:(BOOL)arg1 ;
-(void)_resetBackgroundViewConfiguration;
-(void)_performAction:(SEL)arg1 sender:(id)arg2 ;
-(long long)accessoryType;
-(void)_setSelectionGrouping:(int)arg1 ;
-(void)_setIndentationWidth:(double)arg1 ;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(void)_ensureFocusedFloatingContentView;
-(void)setContentConfiguration:(id<UIContentConfiguration>)arg1 ;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(NSString *)reuseIdentifier;
-(BOOL)showsReorderControl;
-(BOOL)automaticallyUpdatesContentConfiguration;
-(UILabel *)textLabel;
-(void)_setContentViewConfigurationProvider:(/*^block*/id)arg1 ;
-(/*^block*/id)_contentViewConfigurationProvider;
-(UIView *)contentView;
-(void)_setupBackgroundView;
-(id)editableTextField;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)_setEditingStyle:(long long)arg1 ;
-(id)_contentBackgroundColor;
-(BOOL)_backgroundIsVerticallyInset;
-(id)_visiblePathForBackgroundConfiguration;
-(void)setNeedsUpdateConfiguration;
-(UIEdgeInsets)_backgroundInset;
-(long long)editingStyle;
-(id)_editingControlTintColorForStyle:(long long)arg1 ;
-(long long)tableViewStyle;
-(double)_minimumCellAccessoryMargin;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)defaultContentConfiguration;
-(id)_defaultBackgroundConfiguration;
-(BOOL)_isDragging;
-(id)_imageView:(BOOL)arg1 ;
-(void)setIndentationLevel:(long long)arg1 ;
-(void)_setShowingCompactContextMenu:(BOOL)arg1 ;
-(void)_setRawLayoutMargins:(UIEdgeInsets)arg1 ;
-(unsigned long long)_viewConfigurationState;
-(void)_setTarget:(id)arg1 ;
-(void)setReuseIdentifier:(NSString *)arg1 ;
-(void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)_setContentView:(id)arg1 ;
-(long long)selectionStyle;
-(long long)style;
-(void)setSelectedImage:(id)arg1 ;
-(void)setIndentationWidth:(double)arg1 ;
-(BOOL)_isReordering;
-(CGRect)_updatedContentViewFrameForTargetWidth:(double)arg1 ;
-(int)_selectionGrouping;
-(BOOL)_shouldSaveOpaqueStateForView:(id)arg1 ;
-(BOOL)clipsContents;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isUsingOldStyleMultiselection;
-(double)_marginWidth;
-(BOOL)_skipsLayout;
-(SEL)returnAction;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)font;
-(id)_layoutDebuggingTitle;
-(BOOL)_insetsBackground;
-(BOOL)_usesRoundedGroups;
-(id)_editingAccessoryView:(BOOL)arg1 ;
-(unsigned long long)_maskedCornersForSystemBackgroundView;
-(void)_setLayoutEngineSuspended:(BOOL)arg1 ;
-(CGRect)backgroundRectForBounds:(CGRect)arg1 ;
-(UIEdgeInsets)_effectiveSafeAreaInsets;
-(UIBackgroundConfiguration *)backgroundConfiguration;
-(BOOL)_hasEditingAccessoryView;
-(id)_backgroundViewConfiguration;
-(void)setHighlighted:(BOOL)arg1 ;
@end

