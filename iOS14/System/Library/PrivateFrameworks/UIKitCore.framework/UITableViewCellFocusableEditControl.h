/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewCellEditControl.h>

@class _UIFloatingContentView;

@interface UITableViewCellFocusableEditControl : UITableViewCellEditControl {

	_UIFloatingContentView* _focusedFloatingContentView;

}
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)wantsImageShadow;
-(void)_updateFloatingViewForCurrentTraits;
-(BOOL)_shouldHandlePressEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)_currentImage;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_ensureFocusedFloatingContentView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

