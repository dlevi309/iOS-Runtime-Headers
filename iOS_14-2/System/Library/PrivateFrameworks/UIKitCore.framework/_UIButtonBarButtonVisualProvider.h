/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UIButtonBarButton, UIBarButtonItem, UIView;

@interface _UIButtonBarButtonVisualProvider : NSObject <NSCopying> {

	_UIButtonBarButton* _button;
	UIBarButtonItem* _barButtonItem;

}

@property (nonatomic,readonly) UIView * backIndicatorView; 
@property (nonatomic,readonly) UIView * contentView; 
@property (assign,nonatomic) BOOL backButtonConstraintsActive; 
@property (assign,nonatomic) BOOL backButtonMaskEnabled; 
@property (nonatomic,readonly) UIView * alignmentViewForStaticNavBarButtonLeading; 
@property (nonatomic,readonly) UIView * alignmentViewForStaticNavBarButtonTrailing; 
-(void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3 ;
-(id)contentCursorInContainer:(id)arg1 ;
-(id)matchingPointerShapeForView:(id)arg1 rect:(CGRect)arg2 inContainer:(id)arg3 ;
-(BOOL)shouldLift;
-(BOOL)supportsBackButtons;
-(void)buttonLayoutSubviews:(id)arg1 baseImplementation:(/*^block*/id)arg2 ;
-(UIView *)backIndicatorView;
-(BOOL)useLocalPointerInteraction;
-(BOOL)buttonSelectionState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(BOOL)shouldButtonAdjustToTraitCollection:(id)arg1 ;
-(void)pointerWillExit:(id)arg1 ;
-(id)pointerPreviewParameters;
-(void)updateButton:(id)arg1 forHighlightedState:(BOOL)arg2 ;
-(BOOL)buttonHighlitedState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 appearance:(id)arg2 ;
-(id)buttonContextMenuInteractionConfiguration;
-(id)buttonContextMenuStyleFromDefaultStyle:(id)arg1 ;
-(void)traitCollectionChangedInSubtreeFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)buttonEnabledState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(id)buttonSpringLoadedInteractionBehavior;
-(BOOL)backButtonMaskEnabled;
-(void)resetButtonHasHighlighted;
-(UIView *)alignmentViewForStaticNavBarButtonTrailing;
-(void)pointerWillEnter:(id)arg1 ;
-(unsigned long long)hash;
-(void)updateButton:(id)arg1 forFocusedState:(BOOL)arg2 ;
-(void)setBackButtonConstraintsActive:(BOOL)arg1 ;
-(void)updateButton:(id)arg1 forSelectedState:(BOOL)arg2 ;
-(void)cursorWillExit:(id)arg1 ;
-(void)cursorWillEnter:(id)arg1 ;
-(BOOL)backButtonConstraintsActive;
-(CGSize)buttonIntrinsicContentSize:(id)arg1 ;
-(UIView *)contentView;
-(BOOL)canUpdateMenuInPlace;
-(id)pointerShapeInContainer:(id)arg1 ;
-(void)updateButton:(id)arg1 toUseButtonShapes:(BOOL)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBackButtonMaskEnabled:(BOOL)arg1 ;
-(void)updateButton:(id)arg1 forEnabledState:(BOOL)arg2 ;
-(id)buttonContextMenuTargetedPreview;
-(CGPoint)menuAnchorPoint;
-(BOOL)isEqual:(id)arg1 ;
-(void)updateMenu;
-(id)buttonSpringLoadedInteractionEffect;
-(void)buttonWillMoveToWindow:(id)arg1 ;
-(void)buttonWillMoveToSuperview:(id)arg1 ;
-(UIView *)alignmentViewForStaticNavBarButtonLeading;
-(UIEdgeInsets)buttonAlignmentRectInsets:(id)arg1 ;
@end

