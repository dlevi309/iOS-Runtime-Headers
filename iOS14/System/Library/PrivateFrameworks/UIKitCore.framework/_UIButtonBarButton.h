/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIPointerInteractionDelegate.h>
#import <UIKit/UISpringLoadedInteractionSupporting.h>

@class _UIButtonBarButtonVisualProvider, NSLayoutConstraint, _UIBarButtonItemData, NSString;

@interface _UIButtonBarButton : UIControl <UIPointerInteractionDelegate, UISpringLoadedInteractionSupporting> {

	_UIButtonBarButtonVisualProvider* _visualProvider;
	NSLayoutConstraint* _widthMinimizingConstraint;
	NSLayoutConstraint* _heightMinimizingConstraint;
	BOOL _autolayoutIsCleanForBoundsChange;
	BOOL _backButton;
	_UIBarButtonItemData* _appearanceData;

}

@property (nonatomic,copy,readonly) _UIButtonBarButtonVisualProvider * visualProvider;              //@synthesize visualProvider=_visualProvider - In the implementation block
@property (getter=isBackButton,nonatomic,readonly) BOOL backButton;                                 //@synthesize backButton=_backButton - In the implementation block
@property (assign,nonatomic) BOOL backButtonMaskEnabled; 
@property (nonatomic,retain) _UIBarButtonItemData * appearanceData;                                 //@synthesize appearanceData=_appearanceData - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * widthMinimizingConstraint; 
@property (nonatomic,readonly) NSLayoutConstraint * heightMinimizingConstraint; 
@property (nonatomic,readonly) CGRect _buttonBarHitRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isSpringLoaded,nonatomic) BOOL springLoaded; 
-(void)willMoveToSuperview:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2 ;
-(id)init;
-(void)_configureFromBarItem:(id)arg1 appearanceDelegate:(id)arg2 isBackButton:(BOOL)arg3 ;
-(void)configureBackButtonFromBarItem:(id)arg1 withAppearanceDelegate:(id)arg2 ;
-(UIEdgeInsets)alignmentRectInsets;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)_accessibilitySettingsChanged:(id)arg1 ;
-(void)configureFromBarItem:(id)arg1 withAppearanceDelegate:(id)arg2 ;
-(void)_traitCollectionDidChangeOnSubtreeInternal:(const UITraitCollectionChangeDescription*)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGPoint)menuAttachmentPointForConfiguration:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)_accessibilityShouldActivateOnHUDLift;
-(BOOL)isBackButton;
-(BOOL)backButtonMaskEnabled;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)isSpringLoaded;
-(void)setSpringLoaded:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(_UIBarButtonItemData *)appearanceData;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(_UIButtonBarButtonVisualProvider *)visualProvider;
-(void)setBackButtonMaskEnabled:(BOOL)arg1 ;
-(CGRect)_buttonBarHitRect;
-(id)initWithVisualProvider:(id)arg1 ;
-(void)setNeedsAppearanceUpdate;
-(BOOL)updatePresentedMenuFrom:(id)arg1 ;
-(void)dealloc;
-(void)setAppearanceData:(_UIBarButtonItemData *)arg1 ;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
-(void)_setTouchHasHighlighted:(BOOL)arg1 ;
-(void)_is_setNeedsLayout;
-(NSLayoutConstraint *)widthMinimizingConstraint;
-(NSLayoutConstraint *)heightMinimizingConstraint;
-(void)setHighlighted:(BOOL)arg1 ;
@end

