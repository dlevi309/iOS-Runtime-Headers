/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UIButtonBarButton, UIView;

@interface _UIButtonBarButtonVisualProvider : NSObject <NSCopying> {

	_UIButtonBarButton* _button;

}

@property (nonatomic,readonly) UIView * backIndicatorView; 
@property (nonatomic,readonly) UIView * contentView; 
@property (assign,nonatomic) BOOL backButtonConstraintsActive; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIView *)contentView;
-(id)pointerPreviewParameters;
-(BOOL)shouldLift;
-(id)pointerShapeInContainer:(id)arg1 ;
-(id)matchingPointerShapeForView:(id)arg1 rect:(CGRect)arg2 inContainer:(id)arg3 ;
-(void)pointerWillEnter:(id)arg1 ;
-(void)pointerWillExit:(id)arg1 ;
-(BOOL)useLocalPointerInteraction;
-(BOOL)supportsBackButtons;
-(UIView *)backIndicatorView;
-(BOOL)backButtonConstraintsActive;
-(void)setBackButtonConstraintsActive:(BOOL)arg1 ;
-(BOOL)buttonSelectionState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(BOOL)buttonHighlitedState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(BOOL)buttonEnabledState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forSelectedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forHighlightedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forEnabledState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forFocusedState:(BOOL)arg2 ;
-(void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3 ;
-(void)updateButton:(id)arg1 appearance:(id)arg2 ;
-(void)updateButton:(id)arg1 toUseButtonShapes:(BOOL)arg2 ;
-(void)buttonLayoutSubviews:(id)arg1 baseImplementation:(/*^block*/id)arg2 ;
-(void)buttonWillMoveToWindow:(id)arg1 ;
-(void)buttonWillMoveToSuperview:(id)arg1 ;
-(void)button:(id)arg1 traitCollectionDidChange:(id)arg2 ;
-(CGSize)buttonIntrinsicContentSize:(id)arg1 ;
-(UIEdgeInsets)buttonAlignmentRectInsets:(id)arg1 ;
-(void)resetButtonHasHighlighted;
-(id)contentCursorInContainer:(id)arg1 ;
-(void)cursorWillEnter:(id)arg1 ;
-(void)cursorWillExit:(id)arg1 ;
@end

