/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UILayoutEngineSuspending.h>

@class UIView, UILongPressGestureRecognizer, _UIFloatingContentView, NSString;

@interface UICollectionViewCell : UICollectionReusableView <UIGestureRecognizerDelegate, _UILayoutEngineSuspending> {

	UIView* _contentView;
	UIView* _backgroundView;
	UIView* _selectedBackgroundView;
	UILongPressGestureRecognizer* _menuGesture;
	id _selectionSegueTemplate;
	id _highlightingSupport;
	struct {
		unsigned selected : 1;
		unsigned highlighted : 1;
		unsigned showingMenu : 1;
		unsigned clearSelectionWhenMenuDisappears : 1;
		unsigned waitingForSelectionAnimationHalfwayPoint : 1;
		unsigned contentViewWantsSystemLayoutSizeFittingSize : 1;
	}  _collectionCellFlags;
	long long _dragState;
	BOOL _selected;
	BOOL _highlighted;
	BOOL _isLayoutEngineSuspended;
	BOOL _dragging;
	_UIFloatingContentView* _focusedFloatingContentView;
	long long _focusStyle;

}

@property (nonatomic,retain) UIView * contentView;                                                                                       //@synthesize contentView=_contentView - In the implementation block
@property (getter=_focusedFloatingContentView,nonatomic,readonly) _UIFloatingContentView * focusedFloatingContentView;                   //@synthesize focusedFloatingContentView=_focusedFloatingContentView - In the implementation block
@property (assign,setter=_setDragState:,getter=_dragState,nonatomic) long long _dragState; 
@property (getter=_selectionAnimationDuration,nonatomic,readonly) double selectionAnimationDuration; 
@property (getter=_contentViewInset,nonatomic,readonly) UIEdgeInsets contentViewInset; 
@property (assign,setter=_setFocusStyle:,getter=_focusStyle,nonatomic) long long focusStyle;                                             //@synthesize focusStyle=_focusStyle - In the implementation block
@property (assign,getter=isDragging,nonatomic) BOOL dragging;                                                                            //@synthesize dragging=_dragging - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                                                            //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                                                      //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                                                                    //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * selectedBackgroundView;                                                                            //@synthesize selectedBackgroundView=_selectedBackgroundView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setLayoutEngineSuspended:,getter=_isLayoutEngineSuspended,nonatomic) BOOL _layoutEngineSuspended;              //@synthesize isLayoutEngineSuspended=_isLayoutEngineSuspended - In the implementation block
+(Class)_contentViewClass;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(BOOL)isSelected;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)backgroundView;
-(BOOL)canBecomeFocused;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)isDragging;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(id)_encodableSubviews;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)_updateBackgroundView;
-(BOOL)isEditing;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)setSelectedBackgroundView:(UIView *)arg1 ;
-(void)_setFocusStyle:(long long)arg1 ;
-(UIView *)selectedBackgroundView;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)_canFocusProgrammatically;
-(void)_configureFocusedFloatingContentView:(id)arg1 ;
-(UIEdgeInsets)_contentViewInset;
-(id)_focusedFloatingContentView;
-(void)_setContentView:(id)arg1 addToHierarchy:(BOOL)arg2 ;
-(void)_setLayoutAttributes:(id)arg1 ;
-(double)_selectionAnimationDuration;
-(BOOL)_shouldSaveOpaqueStateForView:(id)arg1 ;
-(BOOL)_isUsingOldStyleMultiselection;
-(void)_setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_selectionSegueTemplate;
-(void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setLayoutEngineSuspended:(BOOL)arg1 ;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_setDragState:(long long)arg1 ;
-(void)_updateHighlightColorsForView:(id)arg1 highlight:(BOOL)arg2 ;
-(void)_setupHighlightingSupport;
-(void)_teardownHighlightingSupportIfReady;
-(BOOL)_descendantsShouldHighlight;
-(void)_setOpaque:(BOOL)arg1 forSubview:(id)arg2 ;
-(void)_updateHighlightColorsForAnimationHalfwayPoint;
-(BOOL)_highlightDescendantsWhenSelected;
-(void)_updateFocusedFloatingContentControlStateAnimated:(BOOL)arg1 ;
-(void)dragStateDidChange:(long long)arg1 ;
-(void)_updateGhostedAppearance;
-(long long)_dragState;
-(void)_performAction:(SEL)arg1 sender:(id)arg2 ;
-(void)_updateFocusedFloatingContentControlStateInContext:(id)arg1 withAnimationCoordinator:(id)arg2 animated:(BOOL)arg3 ;
-(void)_ensureFocusedFloatingContentView;
-(BOOL)_isLayoutEngineSuspended;
-(void)_handleMenuGesture:(id)arg1 ;
-(void)_setSelectionSegueTemplate:(id)arg1 ;
-(BOOL)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1 ;
-(long long)_focusStyle;
-(void)setDragging:(BOOL)arg1 ;
@end

