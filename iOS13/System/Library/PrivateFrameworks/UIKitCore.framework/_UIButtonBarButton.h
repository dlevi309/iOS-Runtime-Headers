/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	BOOL _backButton;
	_UIBarButtonItemData* _appearanceData;

}

@property (nonatomic,copy,readonly) _UIButtonBarButtonVisualProvider * visualProvider;              //@synthesize visualProvider=_visualProvider - In the implementation block
@property (getter=isBackButton,nonatomic,readonly) BOOL backButton;                                 //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) _UIBarButtonItemData * appearanceData;                                 //@synthesize appearanceData=_appearanceData - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * widthMinimizingConstraint; 
@property (nonatomic,readonly) NSLayoutConstraint * heightMinimizingConstraint; 
@property (nonatomic,readonly) CGRect _buttonBarHitRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isSpringLoaded,nonatomic) BOOL springLoaded; 
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setSpringLoaded:(BOOL)arg1 ;
-(BOOL)isSpringLoaded;
-(void)setSelected:(BOOL)arg1 ;
-(_UIButtonBarButtonVisualProvider *)visualProvider;
-(id)initWithVisualProvider:(id)arg1 ;
-(void)setAppearanceData:(_UIBarButtonItemData *)arg1 ;
-(void)setNeedsAppearanceUpdate;
-(void)configureFromBarItem:(id)arg1 withAppearanceDelegate:(id)arg2 ;
-(CGRect)_buttonBarHitRect;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
-(void)_accessibilitySettingsChanged:(id)arg1 ;
-(void)_setTouchHasHighlighted:(BOOL)arg1 ;
-(void)_configureFromBarItem:(id)arg1 appearanceDelegate:(id)arg2 isBackButton:(BOOL)arg3 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(void)configureBackButtonFromBarItem:(id)arg1 withAppearanceDelegate:(id)arg2 ;
-(NSLayoutConstraint *)widthMinimizingConstraint;
-(NSLayoutConstraint *)heightMinimizingConstraint;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityShouldActivateOnHUDLift;
-(BOOL)isBackButton;
-(_UIBarButtonItemData *)appearanceData;
@end

